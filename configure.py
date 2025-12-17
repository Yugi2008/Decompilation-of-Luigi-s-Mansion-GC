#!/usr/bin/env python3

###
# Generates build files for the project.
# This file also includes the project configuration,
# such as compiler flags and the object matching status.
#
# Usage:
#   python3 configure.py
#   ninja
#
# Append --help to see available options.
###

import argparse
import sys
import os
import glob
from pathlib import Path
from typing import Any, Dict, List, Tuple

from tools.project import (
    Object,
    ProgressCategory,
    ProjectConfig,
    calculate_progress,
    generate_build,
    is_windows,
)

# Game versions
DEFAULT_VERSION = 0 # Japan
VERSIONS = [
    "GLMJ01",   # Japan
    "GLME01",   # US
    "GLME01_1", # US Demo
    "GLMP01",   # EU Demo
    "GLMP01_1", # EU Rev 0
    "GLMP01_2", # EU Rev 1
]

parser = argparse.ArgumentParser()
parser.add_argument(
    "mode",
    choices=["configure", "progress"],
    default="configure",
    help="script mode (default: configure)",
    nargs="?",
)
parser.add_argument(
    "-v",
    "--version",
    choices=VERSIONS,
    type=str.upper,
    default=VERSIONS[DEFAULT_VERSION],
    help="version to build",
)
parser.add_argument(
    "--build-dir",
    metavar="DIR",
    type=Path,
    default=Path("build"),
    help="base build directory (default: build)",
)
parser.add_argument(
    "--binutils",
    metavar="BINARY",
    type=Path,
    help="path to binutils (optional)",
)
parser.add_argument(
    "--compilers",
    metavar="DIR",
    type=Path,
    help="path to compilers (optional)",
)
parser.add_argument(
    "--map",
    action="store_true",
    help="generate map file(s)",
)
parser.add_argument(
    "--debug",
    action="store_true",
    help="build with debug info (non-matching)",
)
parser.add_argument(
    "--action",
    action="store_true",
    help="build for github actions (do not use)",
)
parser.add_argument(
    "--nowarn",
    action="store_true",
    help="Disable all warnings"
)
if not is_windows():
    parser.add_argument(
        "--wrapper",
        metavar="BINARY",
        type=Path,
        help="path to wibo or wine (optional)",
    )
parser.add_argument(
    "--dtk",
    metavar="BINARY | DIR",
    type=Path,
    help="path to decomp-toolkit binary or source (optional)",
)
parser.add_argument(
    "--objdiff",
    metavar="BINARY | DIR",
    type=Path,
    help="path to objdiff-cli binary or source (optional)",
)
parser.add_argument(
    "--sjiswrap",
    metavar="EXE",
    type=Path,
    help="path to sjiswrap.exe (optional)",
)
parser.add_argument(
    "--verbose",
    action="store_true",
    help="print verbose output",
)
parser.add_argument(
    "--non-matching",
    dest="non_matching",
    action="store_true",
    help="builds equivalent (but non-matching) or modded objects",
)
parser.add_argument(
    "--no-progress",
    dest="progress",
    action="store_false",
    help="disable progress calculation",
)
args = parser.parse_args()

config = ProjectConfig()
config.version = str(args.version)
version_num = VERSIONS.index(config.version)

# Apply arguments
config.build_dir = args.build_dir
config.dtk_path = args.dtk
config.objdiff_path = args.objdiff
config.binutils_path = args.binutils
config.compilers_path = args.compilers
config.generate_map = args.map
config.non_matching = args.non_matching
config.sjiswrap_path = args.sjiswrap
config.progress = args.progress
if not is_windows():
    config.wrapper = args.wrapper
# Don't build asm unless we're --non-matching
if not config.non_matching:
    config.asm_dir = None

# Tool versions
config.binutils_tag = "2.42-1"
config.compilers_tag = "latest"
config.dtk_tag = "v1.6.2"
config.objdiff_tag = "v2.7.1"
config.sjiswrap_tag = "v1.2.1"
config.wibo_tag = "0.6.16"

# Project

## Helper (Guess who generated this)
def cflags_paths_expand(cflags):
    seen = set()
    converted = []

    for flag in cflags:
        if flag.startswith("-i "):
            path = flag[3:]
            if any(c in path for c in "*?[]"):
                matches = glob.glob(path, recursive=True)
                for p in matches:
                    norm_path = os.path.normpath(p)
                    flag_str = f"-i {norm_path}"
                    if os.path.isdir(p) and flag_str not in seen:
                        converted.append(flag_str)
                        seen.add(flag_str)
            else:
                if flag not in seen:
                    converted.append(flag)
                    seen.add(flag)
        else:
            if flag not in seen:
                converted.append(flag)
                seen.add(flag)

    cflags[:] = converted

## Definitions
config.config_path = Path("config") / config.version / "config.yml"
config.check_sha_path = Path("config") / config.version / "build.sha1"
config.asflags = [
    "-mgekko",
    "--strip-local-absolute",
#    "-I {decomp_root}/Project/sources/*/include",
    "-I {decomp_root}/JSystem/**/include",
    "-I {decomp_root}/DolphinSDK/include",
    "-I {decomp_root}/CodeWarrior/**/Include",
    "-I {decomp_root}/CodeWarrior/**/INCLUDE",
    "-I {decomp_root}/CodeWarrior/**/Inc",
    f"-I {config.build_dir}/{config.version}/include",
    f"-I {config.build_dir}/{config.version}/bin",
    f"--defsym version={version_num}",
]
# fill in * , because MWCC not supporting that
cflags_paths_expand(config.asflags)

config.ldflags = [
    "-proc gekko",
    "-fp hardware",
    "-nodefaults",
    #"-msgstyle IDE",
]
if args.debug:
    config.ldflags.append("-g")
if args.map:
    config.ldflags.append("-mapunused")

# Use for any additional files that should cause a re-configure when modified
config.reconfig_deps = []

# Mumeric ID for decomp.me preset
# Can be overridden in libraries or objects
config.scratch_preset_id = 91

# Libraries that should not be linked in a bundled library file
config.nolib = [
    "*", # Leaving libraries unused for now, needs decomp to be finished
]
decomp_root = "decomp"

# Base flags, common to most GC/Wii games.
# Generally leave untouched, with overrides added below.
cflags_base = [
    "-nodefaults",
    "-proc gekko",
    "-align powerpc",
    "-enum int",
    "-fp hardware",
    "-Cpp_exceptions off",
    '-pragma "cats off"',
    '-pragma "warn_notinlined off"',
    "-maxerrors 1",
    "-nosyspath",
    "-str reuse",
    "-multibyte",
    f"-i {decomp_root}/Project/lib",
    f"-i {decomp_root}/CodeWarrior/**/Include",
    f"-i {decomp_root}/CodeWarrior/**/INCLUDE",
    f"-i {decomp_root}/CodeWarrior/**/Inc",
    f"-i {config.build_dir}/{config.version}/include",
    f"-DVERSION_{config.version}",
    #"-msgstyle IDE",
]

# Debug flags
if args.debug:
#    cflags_base.extend(["-g", "-DDEBUG=1"])
    cflags_base.extend(["-g"]) # TODO: fix all ASSERTS.
#else:
#    cflags_base.append("-DNDEBUG=1")

if args.action:
    cflags_base.append("-DGH_ACTION=1")

if args.nowarn:
    cflags_base.append("-W off")
else:
    cflags_base.append("-W all")

# JAudio flags
cflags_jaudio = [
    *cflags_base,
    f"-i {decomp_root}/JSystem/**/include",
    "-proc 750",
    "-O4,s",
    "-inline off",
    "-common on",
    "-func_align 32",
    "-lang c++",
    "-DNDEBUG=1", 
    "-w off",
    "-use_lmw_stmw on",
    "-str reuse, readonly",
]

# JSystem library flags
cflags_jsys = [
    *cflags_base,
    f"-i {decomp_root}/DolphinSDK/include",
    f"-i {decomp_root}/JSystem/**/include",
    "-O4,p",
    "-inline auto",
    "-RTTI on",
    "-fp_contract on",
    
]

# OdemuExi2 library flags
cflags_odemu = [
    *cflags_base,
    f"-i {decomp_root}/DolphinSDK/include",

]
# Metrowerks library flags
cflags_cw = [
    *cflags_base,
    f"-i {decomp_root}/CodeWarrior/**/Include",
    "-O4,p",
    "-use_lmw_stmw on",
    "-str reuse,pool,readonly",
    "-common off",
    "-inline deferred,auto",
    "-char signed",
]
# Metrowerks TRK library flags
cflags_cw_trk = [
    *cflags_base,
    "-O4,p",
    "-pool off",
    "-str readonly",
    "-enum min",
    "-sdatathreshold 0",
]

# Game flags
cflags_game = [
    *cflags_base,
    f"-i {decomp_root}/DolphinSDK/include",
    f"-i {decomp_root}/Project/sources/*/include",
    f"-i {decomp_root}/JSystem/**/include",
    "-O4,p",
    "-RTTI on",
    "-inline auto",
    "-fp_contract on",
]

if config.version == "GLMJ01":
    cflags_odemu.extend(["-O3,p", "-use_lmw_stmw off"])
else:
    cflags_odemu.extend(["-O4,p", "-inline all"])

# SDK flags
cflags_sdk = [
    *cflags_base,
    "-DBUILD_REV=37",
    "-DBUILD_DATE=\"\\\"Jul 19 2001\\\"\"",
    "-DBUILD_TIME=\"\\\"05:43:42\\\"\"",
    "-DJAUDIO_OLD",
    f"-i {decomp_root}/DolphinSDK/include",
    f"-i {decomp_root}/CodeWarrior/PowerPC_EABI_Support/MetroTRK",
    "-O4,p",
    "-inline auto",
]
cflags_sdk_cpp = [
    *cflags_sdk,
    "-lang cpp"
]

# fill in * , because MWCC not supporting that
cflags_paths_expand(cflags_base)
cflags_paths_expand(cflags_jaudio)
cflags_paths_expand(cflags_jsys)
cflags_paths_expand(cflags_odemu)
cflags_paths_expand(cflags_cw)
cflags_paths_expand(cflags_cw_trk)
cflags_paths_expand(cflags_game)
cflags_paths_expand(cflags_sdk)

config.linker_version = "GC/1.2.5"

# Helper function for SDK libraries
def SDKLib(lib_name: str, files: List[Tuple[bool, str]], lib_name_override: str="", conf: Dict[str,str]={"":""}) -> Dict[str, Any]:
    objects = []
    if lib_name_override == "":
        lib_name_override = str

    dirname = f"DolphinSDK/src/{lib_name}"
    for matching, filename in files:
        filepath = f"{dirname}/{filename}"
        objects.append(Object(matching, filepath))

    __cflags = cflags_sdk + [f"-i {decomp_root}/{dirname}"]

    return {
        "lib": lib_name_override,
        "cflags": __cflags,
        "progress_category": "sdk",
        "src_dir": decomp_root,
        "objects": objects,
        **conf
    }

# Helper function for Dolphin libraries
def DolphinLib(lib_name: str, files: List[Tuple[bool, str]], conf:Dict[str,str]={"":""}) -> Dict[str, Any]:
    return SDKLib(f"dolphin/{lib_name}", files, f"{lib_name}")

# Helper function for JSystem libraries
def JSystemLib(lib_name: str, sub_dir: str, files: List[Tuple[bool, str]], cflags: List[str]=cflags_jsys, conf: Dict[str, str]={"":""}) -> Dict[str, Any]:
    objects = []
    dirpath = f"JSystem/{sub_dir}/src"
    for matching, filename in files:
        filepath = f"{dirpath}/{filename}"
        objects.append(Object(matching, filepath))

    __cflags = cflags_jsys + [f"-i {decomp_root}/{dirpath}"]

    return {
        "lib": lib_name,
        "cflags": __cflags,
        "progress_category": "jsys",
        "src_dir": decomp_root,
        "objects": objects,
        **conf
    }

# Helper function for CodeWarrior runtime libraries
def CWLib(lib_name: str, sub_path: str, files: List[Tuple[bool, str]], conf: Dict[str, str]={"":""}) -> Dict[str, Any]:
    objects = []
    dirpath = f"CodeWarrior/PowerPC_EABI_Support/{sub_path}"
    for matching, filename in files:
        filepath = f"{dirpath}/{filename}"
        objects.append(Object(matching, filepath))

    __cflags = cflags_cw + [f"-i {decomp_root}/{dirpath}"]

    return {
        "mw_version": "GC/1.1p1",
        "lib": lib_name,
        "cflags": __cflags,
        "progress_category": "cw",
        "src_dir": f".",
        "objects": objects,
        **conf
    }

# Helper function for Game app libraries
def GameSource(lib_name: str, files: List[Tuple[bool, str]], conf: Dict[str, str]={"":""}) -> Dict[str, Any]:
    objects = []
    dirpath = f"sources/{lib_name}/src"
    for matching, filename in files:
        filepath = f"{dirpath}/{filename}"
        objects.append(Object(matching, filepath))

    __cflags = cflags_game + [f"-i {decomp_root}/Project/{dirpath}"]

    return {
        "lib": lib_name,
        "cflags": __cflags,
        "progress_category": "game",
        "src_dir": f"{decomp_root}/Project",
        "objects": objects,
        **conf
    }
def GameMain(file: str, matching: bool, conf: Dict[str, str]={"":""}) -> Dict[str, Any]:
    objects = []
    filepath = f"sources/{file}"
    objects.append(Object(matching, filepath))

    __cflags = cflags_game + [f"-i {decomp_root}/Project"]

    return {
        "lib": "yasiki",
        "cflags": __cflags,
        "progress_category": "game",
        "src_dir": f"{decomp_root}/Project",
        "objects": objects,
        **conf
    }

def GameProject(file: str, matching: bool, conf: Dict[str, str]={"":""}) -> Dict[str, Any]:
    objects = []
    filepath = f"Project/{file}"  # <-- must match the split/unit name prefix exactly
    objects.append(Object(matching, filepath))

    __cflags = cflags_game + [f"-i {decomp_root}/Project"]

    return {
        "lib": "yasiki",
        "cflags": __cflags,
        "progress_category": "game",
        "src_dir": f"{decomp_root}",
        "objects": objects,
        **conf
    }


Matching = True                   # Object matches and should be linked
NonMatching = False               # Object does not match and should not be linked
Equivalent = config.non_matching  # Object should be linked when configured with --non-matching


# Object is only matching for specific versions
def MatchingFor(*versions):
    return config.version in versions


config.warn_missing_config = True
config.warn_missing_source = False
config.libs = [

    # Game source folders

    GameMain("main.c", NonMatching),
    GameProject("auto_03_80194428_text.c", NonMatching),
    GameProject("auto_03_801356FC_text.c", NonMatching),
    GameProject("auto_03_80005C00_text.c", NonMatching),
    GameProject("auto_03_800082F0_text.c", NonMatching),
    GameProject("auto_03_80009418_text.c", NonMatching),
    GameProject("auto_03_8000AEEC_text.c", NonMatching),
    GameProject("auto_03_8000B7A4_text.c", NonMatching),
    GameProject("auto_03_8000C650_text.c", NonMatching),
    GameProject("auto_03_80014278_text.c", NonMatching),
    GameProject("auto_03_80022B6C_text.c", NonMatching),
    GameProject("auto_03_8002E8C4_text.c", NonMatching),
    GameProject("auto_03_80037B3C_text.c", NonMatching),
    GameProject("auto_03_80039FF8_text.c", NonMatching),
    GameProject("auto_03_8003AAF4_text.c", NonMatching),
    GameProject("auto_03_8003E70C_text.c", NonMatching),
    GameProject("auto_03_8003F200_text.c", NonMatching),
    GameProject("auto_03_800401B8_text.c", NonMatching),
    GameProject("auto_03_80041980_text.c", NonMatching),
    GameProject("auto_03_80043C64_text.c", NonMatching),
    GameProject("auto_03_80043E40_text.c", NonMatching),
    GameProject("auto_03_800448A0_text.c", NonMatching),
    GameProject("auto_03_80045724_text.c", NonMatching),
    GameProject("auto_03_80045F78_text.c", NonMatching),
    GameProject("auto_03_80046214_text.c", NonMatching),
    GameProject("auto_03_80046DE4_text.c", NonMatching),
    GameProject("auto_03_8004C868_text.c", NonMatching),
    GameProject("auto_03_8004CF54_text.c", NonMatching),
    GameProject("auto_03_80050538_text.c", NonMatching),
    GameProject("auto_03_80054EAC_text.c", NonMatching),
    GameProject("auto_03_800576D0_text.c", NonMatching),
    GameProject("auto_03_800576E4_text.c", NonMatching),
    GameProject("auto_03_8005B650_text.c", NonMatching),
    GameProject("auto_03_8005C720_text.c", NonMatching),
    GameProject("auto_03_8005D43C_text.c", NonMatching),
    GameProject("auto_03_80066134_text.c", NonMatching),
    GameProject("auto_03_80069A6C_text.c", NonMatching),
    GameProject("auto_03_8006AAAC_text.c", NonMatching),
    GameProject("auto_03_8006AE4C_text.c", NonMatching),
    GameProject("auto_03_8006CB2C_text.c", NonMatching),
    GameProject("auto_03_8006E008_text.c", NonMatching),
    GameProject("auto_03_8006E73C_text.c", NonMatching),
    GameProject("auto_03_8006F0F8_text.c", NonMatching),
    GameProject("auto_03_80070668_text.c", NonMatching),
    GameProject("auto_03_80070B38_text.c", NonMatching),
    GameProject("auto_03_80070DFC_text.c", NonMatching),
    GameProject("auto_03_80072790_text.c", NonMatching),
    GameProject("auto_03_80076420_text.c", NonMatching),
    GameProject("auto_03_800813F0_text.c", NonMatching),
    GameProject("auto_03_800839F8_text.c", NonMatching),
    GameProject("auto_03_8008882C_text.c", NonMatching),
    GameProject("auto_03_80097B30_text.c", NonMatching),
    GameProject("auto_03_8009A278_text.c", NonMatching),
    GameProject("auto_03_8009BFD8_text.c", NonMatching),
    GameProject("auto_03_8009F188_text.c", NonMatching),
    GameProject("auto_03_800A0A54_text.c", NonMatching),
    GameProject("auto_03_800A0D4C_text.c", NonMatching),
    GameProject("auto_03_800A26EC_text.c", NonMatching),
    GameProject("auto_03_800A5BE4_text.c", NonMatching),
    GameProject("auto_03_800A7508_text.c", NonMatching),
    GameProject("auto_03_800A85F4_text.c", NonMatching),
    GameProject("auto_03_800A8AA0_text.c", NonMatching),
    GameProject("auto_03_800B8424_text.c", NonMatching),
    GameProject("auto_03_800C1CF8_text.c", NonMatching),
    GameProject("auto_03_800C373C_text.c", NonMatching),
    GameProject("auto_03_800C4194_text.c", NonMatching),
    GameProject("auto_03_800C5070_text.c", NonMatching),
    GameProject("auto_03_800C81F0_text.c", NonMatching),
    GameProject("auto_03_800C93E0_text.c", NonMatching),
    GameProject("auto_03_800CA030_text.c", NonMatching),
    GameProject("auto_03_800CB4B0_text.c", NonMatching),
    GameProject("auto_03_800CC0F4_text.c", NonMatching),
    GameProject("auto_03_800CD074_text.c", NonMatching),
    GameProject("auto_03_800CDF34_text.c", NonMatching),
    GameProject("auto_03_800D1700_text.c", NonMatching),
    GameProject("auto_03_800D1FA4_text.c", NonMatching),
    GameProject("auto_03_800D2BC4_text.c", NonMatching),
    GameProject("auto_03_800D355C_text.c", NonMatching),
    GameProject("auto_03_800D380C_text.c", NonMatching),
    GameProject("auto_03_800D410C_text.c", NonMatching),
    GameProject("auto_03_800D4C9C_text.c", NonMatching),
    GameProject("auto_03_800D62C0_text.c", NonMatching),
    GameProject("auto_03_800D7168_text.c", NonMatching),
    GameProject("auto_03_800D7478_text.c", NonMatching),
    GameProject("auto_03_800D8030_text.c", NonMatching),
    GameProject("auto_03_800DA19C_text.c", NonMatching),
    GameProject("auto_03_800DA8A8_text.c", NonMatching),
    GameProject("auto_03_800DB360_text.c", NonMatching),
    GameProject("auto_03_800DC4B4_text.c", NonMatching),
    GameProject("auto_03_800DD284_text.c", NonMatching),
    GameProject("auto_03_800DD7A0_text.c", NonMatching),
    GameProject("auto_03_800DF29C_text.c", NonMatching),
    GameProject("auto_03_800E2760_text.c", NonMatching),
    GameProject("auto_03_800E495C_text.c", NonMatching),
    GameProject("auto_03_800E69D8_text.c", NonMatching),
    GameProject("auto_03_800F4888_text.c", NonMatching),
    GameProject("auto_03_800F4F88_text.c", NonMatching),
    GameProject("auto_03_800F57EC_text.c", NonMatching),
    GameProject("auto_03_800F60E8_text.c", NonMatching),
    GameProject("auto_03_800F6754_text.c", NonMatching),
    GameProject("auto_03_800F7B30_text.c", NonMatching),
    GameProject("auto_03_800F8C50_text.c", NonMatching),
    GameProject("auto_03_800F8E68_text.c", NonMatching),
    GameProject("auto_03_800F925C_text.c", NonMatching),
    GameProject("auto_03_800FA4B8_text.c", NonMatching),
    GameProject("auto_03_800FB3D0_text.c", NonMatching),
    GameProject("auto_03_800FC300_text.c", NonMatching),
    GameProject("auto_03_800FD204_text.c", NonMatching),
    GameProject("auto_03_800FDDC0_text.c", NonMatching),
    GameProject("auto_03_800FE6E0_text.c", NonMatching),
    GameProject("auto_03_800FF648_text.c", NonMatching),
    GameProject("auto_03_80101648_text.c", NonMatching),
    GameProject("auto_03_801048E0_text.c", NonMatching),
    GameProject("auto_03_801051D8_text.c", NonMatching),
    GameProject("auto_03_80107F08_text.c", NonMatching),
    GameProject("auto_03_80108644_text.c", NonMatching),
    GameProject("auto_03_80108C7C_text.c", NonMatching),
    GameProject("auto_03_8010915C_text.c", NonMatching),
    GameProject("auto_03_8010AA88_text.c", NonMatching),
    GameProject("auto_03_8010AF5C_text.c", NonMatching),
    GameProject("auto_03_8010D788_text.c", NonMatching),
    GameProject("auto_03_8010E52C_text.c", NonMatching),
    GameProject("auto_03_8010F480_text.c", NonMatching),
    GameProject("auto_03_8010FC30_text.c", NonMatching),
    GameProject("auto_03_80110364_text.c", NonMatching),
    GameProject("auto_03_80110C0C_text.c", NonMatching),
    GameProject("auto_03_80111CD4_text.c", NonMatching),
    GameProject("auto_03_80112FC8_text.c", NonMatching),
    GameProject("auto_03_80123FFC_text.c", NonMatching),
    GameProject("auto_03_80124438_text.c", NonMatching),
    GameProject("auto_03_80125E94_text.c", NonMatching),
    GameProject("auto_03_8012C1C4_text.c", NonMatching),
    GameProject("auto_03_8012C99C_text.c", NonMatching),
    GameProject("auto_03_8012F0E4_text.c", NonMatching),
    GameProject("auto_03_80133AF8_text.c", NonMatching),
    GameProject("auto_03_80134954_text.c", NonMatching),
    GameProject("auto_03_80138C2C_text.c", NonMatching),
    GameProject("auto_03_8013BD58_text.c", NonMatching),
    GameProject("auto_03_801414FC_text.c", NonMatching),
    GameProject("auto_03_80143E54_text.c", NonMatching),
    GameProject("auto_03_80145A6C_text.c", NonMatching),
    GameProject("auto_03_80146A84_text.c", NonMatching),
    GameProject("auto_03_801481CC_text.c", NonMatching),
    GameProject("auto_03_80149E70_text.c", NonMatching),
    GameProject("auto_03_8014AB70_text.c", NonMatching),
    GameProject("auto_03_8014B58C_text.c", NonMatching),
    GameProject("auto_03_8014C5C0_text.c", NonMatching),
    GameProject("auto_03_8014DB14_text.c", NonMatching),
    GameProject("auto_03_8014E3E4_text.c", NonMatching),
    GameProject("auto_03_801502B0_text.c", NonMatching),
    GameProject("auto_03_80150B1C_text.c", NonMatching),
    GameProject("auto_03_80151410_text.c", NonMatching),
    GameProject("auto_03_80151A68_text.c", NonMatching),
    GameProject("auto_03_80153B50_text.c", NonMatching),
    GameProject("auto_03_80154E28_text.c", NonMatching),
    GameProject("auto_03_80156EA4_text.c", NonMatching),
    GameProject("auto_03_801576D0_text.c", NonMatching),
    GameProject("auto_03_80157F88_text.c", NonMatching),
    GameProject("auto_03_80158B68_text.c", NonMatching),
    GameProject("auto_03_801591FC_text.c", NonMatching),
    GameProject("auto_03_80159B44_text.c", NonMatching),
    GameProject("auto_03_8015A174_text.c", NonMatching),
    GameProject("auto_03_8015A54C_text.c", NonMatching),
    GameProject("auto_03_8015A624_text.c", NonMatching),
    GameProject("auto_03_8015B3F0_text.c", NonMatching),
    GameProject("auto_03_8015DD7C_text.c", NonMatching),
    GameProject("auto_03_8015EDF0_text.c", NonMatching),
    GameProject("auto_03_801612E8_text.c", NonMatching),
    GameProject("auto_03_80168004_text.c", NonMatching),
    GameProject("auto_03_8016CF7C_text.c", NonMatching),
    GameProject("auto_03_8016D69C_text.c", NonMatching),
    GameProject("auto_03_8016F170_text.c", NonMatching),
    GameProject("auto_03_80170328_text.c", NonMatching),
    GameProject("auto_03_80177D5C_text.c", NonMatching),
    GameProject("auto_03_80178B10_text.c", NonMatching),
    GameProject("auto_03_8017B720_text.c", NonMatching),
    GameProject("auto_03_8017C9B0_text.c", NonMatching),
    GameProject("auto_03_8017D414_text.c", NonMatching),
    GameProject("auto_03_8017DF84_text.c", NonMatching),
    GameProject("auto_03_8017F370_text.c", NonMatching),
    GameProject("auto_03_8018107C_text.c", NonMatching),
    GameProject("auto_03_8018230C_text.c", NonMatching),
    GameProject("auto_03_8018331C_text.c", NonMatching),
    GameProject("auto_03_80183B2C_text.c", NonMatching),
    GameProject("auto_03_80184BC4_text.c", NonMatching),
    GameProject("auto_03_80186724_text.c", NonMatching),
    GameProject("auto_03_8018DF40_text.c", NonMatching),
    GameProject("auto_03_801B12CC_text.c", NonMatching),
    GameProject("auto_03_801B35C4_text.c", NonMatching),
    GameProject("auto_03_801BB264_text.c", NonMatching),
    GameProject("auto_03_801CB834_text.c", NonMatching),
    GameProject("auto_03_801CC244_text.c", NonMatching),
    GameProject("auto_03_801CC600_text.c", NonMatching),
    GameProject("auto_03_801CCE8C_text.c", NonMatching),
    GameProject("auto_03_801CD6F8_text.c", NonMatching),
    GameProject("auto_03_801CF9A0_text.c", NonMatching),
    GameProject("auto_03_801D2E8C_text.c", NonMatching),
    GameProject("auto_03_801F508C_text.c", NonMatching),
    GameProject("auto_03_801F51C8_text.c", NonMatching),
    GameProject("auto_03_801F524C_text.c", NonMatching),
    GameProject("auto_03_801F560C_text.c", NonMatching),
    GameProject("auto_03_801F58D0_text.c", NonMatching),
    GameProject("auto_03_801F5C54_text.c", NonMatching),
    GameProject("auto_03_801F69E8_text.c", NonMatching),
    GameProject("auto_03_801F6FC8_text.c", NonMatching),
    GameProject("auto_03_801F7768_text.c", NonMatching),
    GameProject("auto_03_801FB680_text.c", NonMatching),

#    GameSource("PSystem", [
#        (NonMatching, "initthread.cpp"),
#        (NonMatching, "memory.cpp"),
#        (NonMatching, "dvd.cpp"),
#    ]),
    GameSource("Sequence", [
        (Matching, "boot.cpp"),
#        (NonMatching, "sequence.cpp"),
#        (NonMatching, "rolling.cpp"),
    ]),
#    GameSource("Iwamoto", [
#        (NonMatching, ""),
#    ]),
#    GameSource("sotoike", [
#        (NonMatching, "aiTurara.cpp"),
#    ]),
#    GameSource("Kawamoto", [
#        (NonMatching, ""),
#    ]),
#    GameSource("Koga", [
#        (Matching, "CharacterEventObserver.cpp"),
#        (Matching, "IncludeStrategy.cpp"),
#        (NonMatching, "EnStrategy.cpp"),
#        (NonMatching, "EnemyStrategy.cpp"),
#        (NonMatching, "EnemyTypicalStrategy.cpp"),
#    ]),
#    GameSource("Ajioka", [
#        (NonMatching, ""),
#    ]),
#    GameSource("Sato", [
#        (NonMatching, ""),
#    ]),
#    GameSource("Kohno", [
#        (NonMatching, ""),
#    ]),
#    GameSource("unsorted", [
#        (NonMatching, ""),
#    ]),
    # Kept for reference
            ##Object(NonMatching, "Unsorted/MoveObj.cpp"),
            ##Object(NonMatching, "Unsorted/Character.cpp"), (Sotoike/character.cpp?)
            #Object(NonMatching, "Unsorted/assignPlayerRank.cpp"),
            #Object(NonMatching, "Unsorted/getPlayerRank.cpp"),
            #Object(NonMatching, "Unsorted/checkTimeRange.cpp"),
            ##Object(NonMatching, "Unsorted/checkEventTimeBounds.cpp"),
            ##Object(NonMatching, "Unsorted/setAndExecCurrentEvent.cpp"),

    # JSystem Libraries

    JSystemLib("JKernel", "System/JKernel", [
        (Matching, "JKRHeap.cpp"),
        (NonMatching, "JKRExpHeap.cpp"),
        (NonMatching, "JKRSolidHeap.cpp"),
        (Matching, "JKRDisposer.cpp"),
        (NonMatching, "JKRThread.cpp"),
    ]),

    JSystemLib("JSupport", "System/JSupport", [
        (Matching, "JSUList.cpp"),
    ]),

    JSystemLib("JUtility", "System/JUtility", [
        (NonMatching, "JUTDirectPrint.cpp"),
        (NonMatching, "JUTFontData_Sjsfont.s"),
    ]),

    # SDK

    DolphinLib("base", [
        (Matching, "PPCArch.c"),
    ]),

    DolphinLib("os", [
        (Matching, "OS.c"),
        (Matching, "OSAlarm.c"),
        (Matching, "OSAlloc.c"),
        (Matching, "OSArena.c"),
        (Matching, "OSAudioSystem.c"),
        (Matching, "OSCache.c"),
        (Matching, "OSContext.c"),
        (Matching, "OSError.c"),
        (Matching, "OSExi.c"),
        (Matching, "OSFont.c"),
        (Matching, "OSInterrupt.c"),
        (Matching, "OSLink.c"),
        (Matching, "OSMessage.c"),
        (Matching, "OSMutex.c"),
        (Matching, "OSReboot.c"),
        (Matching, "OSReset.c"),
        (Matching, "OSResetSW.c"),
        (Matching, "OSRtc.c"),
        (Matching, "OSSerial.c"),
        (Matching, "OSSync.c"),
        (Equivalent, "OSThread.c"),
        (Matching, "OSTime.c"),
        (Matching, "OSUartExi.c"),
        (Matching, "init/__start.c"),
    ]),

    DolphinLib("os", [
        (Matching, "init/__ppc_eabi_init.cpp"),
    ],{
        "cflags": cflags_sdk_cpp
    }),

    DolphinLib("db", [
        (Matching, "db.c"), 
    ]),

    DolphinLib("mtx", [
        (Matching, "mtx.c"),
        (Matching, "mtx44.c"),
        (Matching, "vec.c"),
        (Matching, "mtxvec.c"), 
    ]),

    DolphinLib("dvd", [
        (Matching, "dvdlow.c"),
        (Matching, "dvdfs.c"),
        (Matching, "dvd.c"),
        (Matching, "dvdqueue.c"),
        (Matching, "dvderror.c"),
        (Matching, "emu_level2/fstload.c"),
    ]),

    DolphinLib("vi", [
        (Matching, "vi.c"),
    ]),

    DolphinLib("pad", [
        (Matching, "Padclamp.c"),
        (Matching, "Pad.c"),
    ]),

    DolphinLib("ai", [
        (Matching, "ai.c"),
    ]),

    DolphinLib("dsp", [
        (Matching, "dsp.c"),
    ]),

    DolphinLib("ar", [
        (Matching, "ar.c"),
        (Matching, "arq.c"), 
    ]),

    DolphinLib("card", [
        (Matching, "CARDBios.c"),
        (Matching, "CARDRdwr.c"),
        (Matching, "CARDBlock.c"),
        (Matching, "CARDDir.c"),
        (Matching, "CARDCheck.c"),
        (Matching, "CARDMount.c"),
        (Matching, "CARDFormat.c"),
        (Matching, "CARDOpen.c"),
        (Matching, "CARDCreate.c"),
        (Matching, "CARDRead.c"),
        (Matching, "CARDWrite.c"),
        (Matching, "CARDStat.c"),
    ]),

    DolphinLib("gx", [
        (Matching, "GXInit.c"),
        (Matching, "GXFifo.c"),
        (Matching, "GXAttr.c"),
        (Matching, "GXMisc.c"),
        (Matching, "GXGeometry.c"),
        (Matching, "GXFrameBuf.c"),
        (Matching, "GXLight.c"),
        (Matching, "GXTexture.c"),
        (Matching, "GXBump.c"),
        (Matching, "GXTev.c"),
        (Matching, "GXPixel.c"),
        (Matching, "GXDraw.c"),
        (Matching, "GXStubs.c"),
        (Matching, "GXDisplayList.c"),
        (Matching, "GXTransform.c"),
    ]),

    # CodeWarrior

#    CWLib("Runtime.PPCEABI.H", "Runtime/Src", [
#        (NonMatching, ""),
#    ]),
#    CWLib("MSL_C.PPCEABI.bare.H", "MSL/MSL_C/MSL_Common/Src", [
#        (NonMatching, ""),
#    ]),
#    CWLib("MSL_C.PPCEABI.bare.H", "MSL/MSL_C/MSL_Common_Embedded/Src", [
#        (NonMatching, ""),
#    ]),
#    CWLib("MSL_C.PPCEABI.bare.H", "MSL/MSL_C/MSL_Common_Embedded/Math", [
#        (NonMatching, ""),
#    ]),
#    CWLib("MSL_C.PPCEABI.bare.H", "MSL/MSL_C/PPC_EABI/SRC", [
#        (NonMatching, ""),
#    ]),
#    CWLib("MSL_C.PPCEABI.bare.H", "MetroTRK/src", [
#        (NonMatching, ""),
#    ],{
#        "cflags": cflags_cw_trk
#    }),
    DolphinLib("amcstubs", [
        (Matching, "AmcExi2Stubs.c"),
    ]),
    SDKLib("OdemuExi2", [
        (Matching, "DebuggerDriver.c")
    ],"OdemuExi2",{
        "cflags": cflags_odemu
    }),
    DolphinLib("odenotstub", [
        (Matching, "odenotstub.c"),
    ]),
]

# Optional extra categories for progress tracking
# Adjust as desired for your project
config.progress_categories = [
    ProgressCategory("game", "Main Game"),
    ProgressCategory("jsys", "JSystem Framework"),
    ProgressCategory("sdk", "Dolphin SDK"),
    ProgressCategory("cw", "CodeWarrior Runtime"),
]
config.progress_each_module = args.verbose
if args.mode == "configure":
    # Write build.ninja and objdiff.json
    generate_build(config)
elif args.mode == "progress":
    # Print progress and write progress.json
    calculate_progress(config)
else:
    sys.exit("Unknown mode: " + args.mode)
