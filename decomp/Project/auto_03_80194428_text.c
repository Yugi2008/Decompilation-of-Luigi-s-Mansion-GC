#include "auto_03_80194428_text.h"

/* ==== AUTO-GENERATED ASM ANNOTATIONS (do not edit by hand) ====
 * Source ASM: auto_03_80194428_text.s
 * Functions in ASM: 925
 * Implemented in C: 2
 * Missing in C:     923
 */
/* ==== END AUTO-GENERATED ASM ANNOTATIONS ==== */

void Channel_SetMixerLevel(f32 farg0) {
    lbl_804A0498 = (s16) (lbl_804A5DF0 * farg0);
}

void DSPInit(void) {}

// DSPInit2 @ 0x8019BA40 size 0x98
// DSPReleaseHalt @ 0x8019BB80 size 0x48
// DSPSendCommands @ 0x8019BAE0 size 0x88
void DSPWaitFinish(void) {
    do {
        loop_1:
        if (DSPCheckMailFromDSP() == 0U) {
            goto loop_1;
        }
    } while ((u32) (DSPReadMailFromDSP() + 0x77780000) == 0x1357U);
}

// DiplSec @ 0x8019BD60 size 0x3C
// DoneCallback @ 0x8019C480 size 0x1E0
// DsetMixerLevel @ 0x8019BC80 size 0x24
// DsetupTable @ 0x8019BC20 size 0x48
// DspBoot @ 0x8019B720 size 0x74
// DsyncFrame @ 0x8019BCC0 size 0x48
// DummyLen @ 0x8019C120 size 0x8C
// DwaitFrame @ 0x8019BD20 size 0x34
// GetInitVal @ 0x8019C0C0 size 0x44
// ReadArrayUnlock @ 0x8019BF40 size 0x17C
// __CARDUnlock @ 0x8019C1C0 size 0x2B0
// __DSPCheckMXICBoot2 @ 0x8019B7A0 size 0x280
// bitrev @ 0x8019BEC0 size 0x7C
// exnor @ 0x8019BE80 size 0x38
// exnor_1st @ 0x8019BE40 size 0x38


u32 fn_80194428(u32 param_1, u32* param_2){
    u32 uVar1;
    uVar1 = 0;
    if ((param_2 != (u32*)0) && (*param_2 != 0U)) {
        fn_80194F2C((void*)*param_2, 0);
        uVar1 = 1;
    }
    return uVar1;
}


void fn_8019446C(void* heap, Arg1* header, Arg1** link, Arg3* cfg, s32 arg4, s32 arg5, s8  arg6, s32 arg7){
    header->unk8 = arg4;

    if (cfg != NULL) {
        header->unk1C = cfg->unk0;
        if (cfg->unk0 != 0U) {
            header->unk20 = cfg->unk4;
            header->unk24 = cfg->unk8;
            header->unk14 = cfg->unkC;
        }
        else {
            header->unk20 = 0;
            header->unk24 = 0;
            header->unk14 = 0;
        }
    }
    else {
        header->unk1C = 0;
        header->unk20 = 0;
        header->unk24 = 0;
        header->unk14 = 0;
    }

    header->unk30 = link;

    header->unk10 = arg5;
    header->unk4  = arg6;
    header->unk3C = arg7;
    header->unk2  = 0xA;

    if (link != NULL) {
        *link = header;
    }
}


void fn_80194C8C(void* arg0){
    Arg0_94C8C* a0 = (Arg0_94C8C*)arg0;
    s32* p = a0->unk34;
    fn_8018CC20(*p, a0->unk8, p);
}


// fn_801944F8 @ 0x801944F8 size 0x2C4
// fn_801947BC @ 0x801947BC size 0x320
// fn_80194ADC @ 0x80194ADC size 0xE4
void fn_80194BC0(ArgBC0* arg0){
    arg0->unk38 = 0;
    arg0->unk1  = 0;
    arg0->unk2  = 0xA;
    arg0->unk1C = 0;
}

// fn_80194BDC @ 0x80194BDC size 0xB0


s32 fn_80194CB8(void* arg0){
    Arg0* a0 = (Arg0*)arg0;
    u32 uVar1 = a0->unk8 & 0xC0000000;

    switch (uVar1) {

        case 0x00000000:
            lbl_804A1E60 = (s32)((u8*)(**a0->unk34) + 0x88);
            break;

        case 0x80000000:
            lbl_804A1E60 = (s32)((u8*)(**a0->unk34) + 0x0C);
            break;

        case 0xC0000000:
            lbl_804A1E60 = (s32)((u8*)(**a0->unk34) + 0x104);
            break;

        default:
            break;
    }

    return lbl_804A1E60;
}

// fn_80194D3C @ 0x80194D3C size 0xA8
// fn_80194DE4 @ 0x80194DE4 size 0x4C
// fn_80194E30 @ 0x80194E30 size 0xA8
void fn_80194ED8(Arg1* arg0){
    *arg0->unk30 = 0;
    arg0->unk30 = 0;
}


void fn_80194EEC(Arg4* arg0, s32 arg1){
    fn_80195210(arg0, 0);
    arg0->unk10 = arg1;
}

// fn_80194F2C @ 0x80194F2C size 0x40
// fn_80194F6C @ 0x80194F6C size 0x88
// fn_80194FF4 @ 0x80194FF4 size 0x78
// fn_8019506C @ 0x8019506C size 0x88
// fn_801950F4 @ 0x801950F4 size 0x78
// fn_8019516C @ 0x8019516C size 0x58
// fn_801951C4 @ 0x801951C4 size 0x4C
// fn_80195210 @ 0x80195210 size 0x50
// fn_80195260 @ 0x80195260 size 0x160
// fn_801953C0 @ 0x801953C0 size 0x160
// fn_80195520 @ 0x80195520 size 0x200
// fn_80195720 @ 0x80195720 size 0xF4
// fn_80195814 @ 0x80195814 size 0xF4
// fn_80195908 @ 0x80195908 size 0xF4
// fn_801959FC @ 0x801959FC size 0xF4
// fn_80195AF0 @ 0x80195AF0 size 0xB0
// fn_80195BA0 @ 0x80195BA0 size 0x158
// fn_80195CF8 @ 0x80195CF8 size 0x100
// fn_80195DF8 @ 0x80195DF8 size 0xC4
// fn_80195EBC @ 0x80195EBC size 0x100
// fn_80195FBC @ 0x80195FBC size 0xA4
// fn_80196060 @ 0x80196060 size 0x100
// fn_80196160 @ 0x80196160 size 0x100
// fn_80196260 @ 0x80196260 size 0x100
// fn_80196360 @ 0x80196360 size 0x140
// fn_801964A0 @ 0x801964A0 size 0x11C
// fn_801965BC @ 0x801965BC size 0x188
// fn_80196744 @ 0x80196744 size 0x188
// fn_801968CC @ 0x801968CC size 0x188
// fn_80196A54 @ 0x80196A54 size 0x188
// fn_80196BDC @ 0x80196BDC size 0x17C
// fn_80196D58 @ 0x80196D58 size 0x180
// fn_80196ED8 @ 0x80196ED8 size 0x1D8
// fn_801970B0 @ 0x801970B0 size 0x104
// fn_801971B4 @ 0x801971B4 size 0xBC
// fn_80197270 @ 0x80197270 size 0x1F4
// fn_80197464 @ 0x80197464 size 0x104
// fn_80197568 @ 0x80197568 size 0x104
// fn_8019766C @ 0x8019766C size 0x4
// fn_80197670 @ 0x80197670 size 0xC0
// fn_80197730 @ 0x80197730 size 0xF4
// fn_80197824 @ 0x80197824 size 0xF4
// fn_80197918 @ 0x80197918 size 0x6C
// fn_80197984 @ 0x80197984 size 0x70
// fn_801979F4 @ 0x801979F4 size 0x38C
// fn_80197D80 @ 0x80197D80 size 0x68
// fn_80197DE8 @ 0x80197DE8 size 0x88
// fn_80197E70 @ 0x80197E70 size 0x78
// fn_80197EE8 @ 0x80197EE8 size 0x54
// fn_80197F3C @ 0x80197F3C size 0x40
// fn_80197F7C @ 0x80197F7C size 0xF4
// fn_80198070 @ 0x80198070 size 0xE8
// fn_80198158 @ 0x80198158 size 0x84
// fn_801981DC @ 0x801981DC size 0x110
// fn_801982EC @ 0x801982EC size 0x90
// fn_8019837C @ 0x8019837C size 0x8
// fn_80198384 @ 0x80198384 size 0x8
// fn_8019838C @ 0x8019838C size 0x8
// fn_80198394 @ 0x80198394 size 0x3C
// fn_801983D0 @ 0x801983D0 size 0x5C
// fn_8019842C @ 0x8019842C size 0x178
// fn_801985A4 @ 0x801985A4 size 0x38
// fn_801985DC @ 0x801985DC size 0x3CC
// fn_801989A8 @ 0x801989A8 size 0x204
// fn_80198BAC @ 0x80198BAC size 0x34
// fn_80198BE0 @ 0x80198BE0 size 0x144
// fn_80198D24 @ 0x80198D24 size 0x60
// fn_80198D84 @ 0x80198D84 size 0x4
// fn_80198D88 @ 0x80198D88 size 0x10
// fn_80198DA0 @ 0x80198DA0 size 0x4
// fn_80198DC0 @ 0x80198DC0 size 0x4
// fn_80198DE0 @ 0x80198DE0 size 0x4C
// fn_80198E40 @ 0x80198E40 size 0x80
// fn_80198EC0 @ 0x80198EC0 size 0xAC
// fn_80198F80 @ 0x80198F80 size 0xDC
// fn_80199060 @ 0x80199060 size 0xDC
// fn_80199140 @ 0x80199140 size 0xF8
// fn_80199240 @ 0x80199240 size 0x8C
// fn_801992E0 @ 0x801992E0 size 0xC
// fn_80199300 @ 0x80199300 size 0x188
// fn_801994A0 @ 0x801994A0 size 0xA8
// fn_80199560 @ 0x80199560 size 0x8
// fn_80199580 @ 0x80199580 size 0x34
// fn_801995C0 @ 0x801995C0 size 0x30
// fn_80199600 @ 0x80199600 size 0x3C
// fn_80199640 @ 0x80199640 size 0xFC
// fn_80199740 @ 0x80199740 size 0x2C
// fn_80199780 @ 0x80199780 size 0xE0
// fn_80199860 @ 0x80199860 size 0x8
// fn_80199880 @ 0x80199880 size 0x38
// fn_801998C0 @ 0x801998C0 size 0x60
// fn_80199920 @ 0x80199920 size 0xA8
// fn_801999E0 @ 0x801999E0 size 0x8
// fn_80199A00 @ 0x80199A00 size 0x8
// fn_80199A20 @ 0x80199A20 size 0x44
// fn_80199A80 @ 0x80199A80 size 0x80
// fn_80199B00 @ 0x80199B00 size 0x68
// fn_80199B80 @ 0x80199B80 size 0x44
// fn_80199BE0 @ 0x80199BE0 size 0x12C
// fn_80199D20 @ 0x80199D20 size 0x24
// fn_80199D60 @ 0x80199D60 size 0xF4
// fn_80199E60 @ 0x80199E60 size 0x39C
// fn_8019A200 @ 0x8019A200 size 0x250
// fn_8019A460 @ 0x8019A460 size 0x48
// fn_8019A4C0 @ 0x8019A4C0 size 0x40
// fn_8019A500 @ 0x8019A500 size 0x24
// fn_8019A540 @ 0x8019A540 size 0x1F8
// fn_8019A740 @ 0x8019A740 size 0x24
// fn_8019A780 @ 0x8019A780 size 0x2C
// fn_8019A7C0 @ 0x8019A7C0 size 0x50
// fn_8019A820 @ 0x8019A820 size 0x48
// fn_8019A880 @ 0x8019A880 size 0xA4
// fn_8019A940 @ 0x8019A940 size 0x7C
// fn_8019A9C0 @ 0x8019A9C0 size 0x7C
// fn_8019AA40 @ 0x8019AA40 size 0x8C
// fn_8019AAE0 @ 0x8019AAE0 size 0x80
// fn_8019AB60 @ 0x8019AB60 size 0xC4
// fn_8019AC40 @ 0x8019AC40 size 0x3C
// fn_8019AC80 @ 0x8019AC80 size 0x88
// fn_8019AD20 @ 0x8019AD20 size 0x48
// fn_8019AD80 @ 0x8019AD80 size 0x44
// fn_8019ADE0 @ 0x8019ADE0 size 0x24
// fn_8019AE20 @ 0x8019AE20 size 0xC0
// fn_8019AEE0 @ 0x8019AEE0 size 0x84
// fn_8019AF80 @ 0x8019AF80 size 0x38
// fn_8019AFC0 @ 0x8019AFC0 size 0x30
// fn_8019B000 @ 0x8019B000 size 0x40
// fn_8019B040 @ 0x8019B040 size 0x10
// fn_8019B060 @ 0x8019B060 size 0x214
// fn_8019B280 @ 0x8019B280 size 0x84
// fn_8019B320 @ 0x8019B320 size 0x70
// fn_8019B3A0 @ 0x8019B3A0 size 0x70
// fn_8019B420 @ 0x8019B420 size 0x40
// fn_8019B460 @ 0x8019B460 size 0x64
// fn_8019B4E0 @ 0x8019B4E0 size 0xB4
// fn_8019B5A0 @ 0x8019B5A0 size 0xC
// fn_8019B5C0 @ 0x8019B5C0 size 0x38
// fn_8019B600 @ 0x8019B600 size 0x9C
// fn_8019B6A0 @ 0x8019B6A0 size 0x80
// fn_8019C6A0 @ 0x8019C6A0 size 0x20
// fn_8019C6C0 @ 0x8019C6C0 size 0x4C
// fn_8019C720 @ 0x8019C720 size 0x70
// fn_8019C7A0 @ 0x8019C7A0 size 0x30
// fn_8019C7E0 @ 0x8019C7E0 size 0x44
// fn_8019C824 @ 0x8019C824 size 0x4
// fn_8019C840 @ 0x8019C840 size 0x14
// fn_8019C860 @ 0x8019C860 size 0x90
// fn_8019C900 @ 0x8019C900 size 0x60
// fn_8019C960 @ 0x8019C960 size 0xF0
// fn_8019CA60 @ 0x8019CA60 size 0xD8
// fn_8019CB40 @ 0x8019CB40 size 0x70
// fn_8019CBC0 @ 0x8019CBC0 size 0xFC
// fn_8019CCC0 @ 0x8019CCC0 size 0x138
// fn_8019CE00 @ 0x8019CE00 size 0x30
// fn_8019CE40 @ 0x8019CE40 size 0x7C
// fn_8019CEC0 @ 0x8019CEC0 size 0xD8
// fn_8019CFA0 @ 0x8019CFA0 size 0xD8
// fn_8019D080 @ 0x8019D080 size 0x38
// fn_8019D0C0 @ 0x8019D0C0 size 0x348
// fn_8019D420 @ 0x8019D420 size 0x68
// fn_8019D4A0 @ 0x8019D4A0 size 0x334
// fn_8019D7E0 @ 0x8019D7E0 size 0x78
// fn_8019D860 @ 0x8019D860 size 0x28
// fn_8019D8A0 @ 0x8019D8A0 size 0x144
// fn_8019DA00 @ 0x8019DA00 size 0x74
// fn_8019DA80 @ 0x8019DA80 size 0xB0
// fn_8019DB40 @ 0x8019DB40 size 0x64
// fn_8019DBC0 @ 0x8019DBC0 size 0xFC
// fn_8019DCC0 @ 0x8019DCC0 size 0xC4
// fn_8019DDA0 @ 0x8019DDA0 size 0x4C
// fn_8019DE00 @ 0x8019DE00 size 0x38
// fn_8019DE40 @ 0x8019DE40 size 0x60
// fn_8019DEA0 @ 0x8019DEA0 size 0x114
// fn_8019DFC0 @ 0x8019DFC0 size 0xDC
// fn_8019E0A0 @ 0x8019E0A0 size 0x104
// fn_8019E1C0 @ 0x8019E1C0 size 0xD8
// fn_8019E2A0 @ 0x8019E2A0 size 0x7C
// fn_8019E320 @ 0x8019E320 size 0xA0
// fn_8019E3C0 @ 0x8019E3C0 size 0xA0
// fn_8019E460 @ 0x8019E460 size 0x254
// fn_8019E6C0 @ 0x8019E6C0 size 0x18
// fn_8019E6E0 @ 0x8019E6E0 size 0x14
// fn_8019E700 @ 0x8019E700 size 0x2C
// fn_8019E740 @ 0x8019E740 size 0x20
// fn_8019E760 @ 0x8019E760 size 0x38
// fn_8019E7A0 @ 0x8019E7A0 size 0x44
// fn_8019E800 @ 0x8019E800 size 0x2C
// fn_8019E840 @ 0x8019E840 size 0x20
// fn_8019E860 @ 0x8019E860 size 0xB0
// fn_8019E920 @ 0x8019E920 size 0x38
// fn_8019E960 @ 0x8019E960 size 0x20
// fn_8019E980 @ 0x8019E980 size 0x48
// fn_8019E9E0 @ 0x8019E9E0 size 0x7C
// fn_8019EA60 @ 0x8019EA60 size 0x1C
// fn_8019EA80 @ 0x8019EA80 size 0x24
// fn_8019EAC0 @ 0x8019EAC0 size 0x3C
// fn_8019EB00 @ 0x8019EB00 size 0x3C
// fn_8019EB40 @ 0x8019EB40 size 0x54
// fn_8019EBA0 @ 0x8019EBA0 size 0x3C
// fn_8019EBE0 @ 0x8019EBE0 size 0x38
// fn_8019EC20 @ 0x8019EC20 size 0x2C
// fn_8019EC60 @ 0x8019EC60 size 0x50
// fn_8019ECC0 @ 0x8019ECC0 size 0x44
// fn_8019ED20 @ 0x8019ED20 size 0x58
// fn_8019ED80 @ 0x8019ED80 size 0x128
// fn_8019EEC0 @ 0x8019EEC0 size 0x24
// fn_8019EF00 @ 0x8019EF00 size 0x270
// fn_8019F180 @ 0x8019F180 size 0x68
// fn_8019F200 @ 0x8019F200 size 0x24
// fn_8019F240 @ 0x8019F240 size 0x2C
// fn_8019F280 @ 0x8019F280 size 0x28
// fn_8019F2C0 @ 0x8019F2C0 size 0x38
// fn_8019F300 @ 0x8019F300 size 0x2A0
// fn_8019F5A0 @ 0x8019F5A0 size 0x84
// fn_8019F640 @ 0x8019F640 size 0x2C
// fn_8019F680 @ 0x8019F680 size 0x64
// fn_8019F700 @ 0x8019F700 size 0x70
// fn_8019F780 @ 0x8019F780 size 0xA0
// fn_8019F820 @ 0x8019F820 size 0x174
// fn_8019F9A0 @ 0x8019F9A0 size 0x19C
// fn_8019FB40 @ 0x8019FB40 size 0x44
// fn_8019FBA0 @ 0x8019FBA0 size 0x10C
// fn_8019FCC0 @ 0x8019FCC0 size 0x74
// fn_8019FD40 @ 0x8019FD40 size 0x18
// fn_8019FD60 @ 0x8019FD60 size 0x18
// fn_8019FD80 @ 0x8019FD80 size 0x50
// fn_8019FDE0 @ 0x8019FDE0 size 0x50
// fn_8019FE40 @ 0x8019FE40 size 0x3C
// fn_8019FE80 @ 0x8019FE80 size 0x30
// fn_8019FEC0 @ 0x8019FEC0 size 0x30
// fn_8019FF00 @ 0x8019FF00 size 0x5C
// fn_8019FF60 @ 0x8019FF60 size 0x90
// fn_801A0000 @ 0x801A0000 size 0x68
// fn_801A0080 @ 0x801A0080 size 0x104
// fn_801A01A0 @ 0x801A01A0 size 0x48
// fn_801A0200 @ 0x801A0200 size 0x3D4
// fn_801A05E0 @ 0x801A05E0 size 0x1C0
// fn_801A07A0 @ 0x801A07A0 size 0x24
// fn_801A07E0 @ 0x801A07E0 size 0x54
// fn_801A0840 @ 0x801A0840 size 0x64
// fn_801A08C0 @ 0x801A08C0 size 0x68
// fn_801A0940 @ 0x801A0940 size 0x30
// fn_801A0980 @ 0x801A0980 size 0x12C
// fn_801A0AC0 @ 0x801A0AC0 size 0x38
// fn_801A0B00 @ 0x801A0B00 size 0x28
// fn_801A0B40 @ 0x801A0B40 size 0x20
// fn_801A0B60 @ 0x801A0B60 size 0x88
// fn_801A0C00 @ 0x801A0C00 size 0x34
// fn_801A0C40 @ 0x801A0C40 size 0xD4
// fn_801A0D20 @ 0x801A0D20 size 0x198
// fn_801A0EC0 @ 0x801A0EC0 size 0x48
// fn_801A0F20 @ 0x801A0F20 size 0x34
// fn_801A0F60 @ 0x801A0F60 size 0xE0
// fn_801A1040 @ 0x801A1040 size 0x28
// fn_801A1080 @ 0x801A1080 size 0x18
// fn_801A10A0 @ 0x801A10A0 size 0x78
// fn_801A1120 @ 0x801A1120 size 0x40
// fn_801A1160 @ 0x801A1160 size 0x50
// fn_801A11C0 @ 0x801A11C0 size 0x4C
// fn_801A1220 @ 0x801A1220 size 0x30
// fn_801A1260 @ 0x801A1260 size 0x10
// fn_801A1280 @ 0x801A1280 size 0x3C
// fn_801A12C0 @ 0x801A12C0 size 0x28
// fn_801A1300 @ 0x801A1300 size 0x138
// fn_801A1440 @ 0x801A1440 size 0x7C
// fn_801A14C0 @ 0x801A14C0 size 0x80
// fn_801A1540 @ 0x801A1540 size 0x34
// fn_801A1580 @ 0x801A1580 size 0xD0
// fn_801A1660 @ 0x801A1660 size 0xE0
// fn_801A1740 @ 0x801A1740 size 0x44
// fn_801A17A0 @ 0x801A17A0 size 0x38
// fn_801A17E0 @ 0x801A17E0 size 0x100
// fn_801A18E0 @ 0x801A18E0 size 0x38
// fn_801A1920 @ 0x801A1920 size 0x5C
// fn_801A1980 @ 0x801A1980 size 0x1B4
// fn_801A1B40 @ 0x801A1B40 size 0x54
// fn_801A1BA0 @ 0x801A1BA0 size 0x54
// fn_801A1C00 @ 0x801A1C00 size 0x50
// fn_801A1C60 @ 0x801A1C60 size 0x68
// fn_801A1CE0 @ 0x801A1CE0 size 0x50
// fn_801A1D40 @ 0x801A1D40 size 0x70
// fn_801A1DC0 @ 0x801A1DC0 size 0x48
// fn_801A1E20 @ 0x801A1E20 size 0x5C
// fn_801A1E80 @ 0x801A1E80 size 0xD0
// fn_801A1F60 @ 0x801A1F60 size 0x90
// fn_801A2000 @ 0x801A2000 size 0x864
// fn_801A2880 @ 0x801A2880 size 0xA8
// fn_801A2940 @ 0x801A2940 size 0x20
// fn_801A2960 @ 0x801A2960 size 0x1A8
// fn_801A2B20 @ 0x801A2B20 size 0xAC
// fn_801A2BE0 @ 0x801A2BE0 size 0x98
// fn_801A2C80 @ 0x801A2C80 size 0x484
// fn_801A3120 @ 0x801A3120 size 0x16C
// fn_801A32A0 @ 0x801A32A0 size 0x48
// fn_801A3300 @ 0x801A3300 size 0x5C
// fn_801A3360 @ 0x801A3360 size 0x48
// fn_801A33C0 @ 0x801A33C0 size 0x3C
// fn_801A3400 @ 0x801A3400 size 0x4C
// fn_801A3460 @ 0x801A3460 size 0x4C
// fn_801A34C0 @ 0x801A34C0 size 0xA0
// fn_801A3560 @ 0x801A3560 size 0x58
// fn_801A35C0 @ 0x801A35C0 size 0x78
// fn_801A3640 @ 0x801A3640 size 0x30
// fn_801A3680 @ 0x801A3680 size 0xA8
// fn_801A3740 @ 0x801A3740 size 0x8C
// fn_801A37E0 @ 0x801A37E0 size 0x18
// fn_801A3800 @ 0x801A3800 size 0x38
// fn_801A3840 @ 0x801A3840 size 0x44
// fn_801A38A0 @ 0x801A38A0 size 0xA4
// fn_801A3960 @ 0x801A3960 size 0x24
// fn_801A39A0 @ 0x801A39A0 size 0x2C
// fn_801A39E0 @ 0x801A39E0 size 0x2C
// fn_801A3A20 @ 0x801A3A20 size 0xC
// fn_801A3A40 @ 0x801A3A40 size 0x4C
// fn_801A3AA0 @ 0x801A3AA0 size 0x31C
// fn_801A3DC0 @ 0x801A3DC0 size 0x410
// fn_801A41E0 @ 0x801A41E0 size 0x104
// fn_801A4300 @ 0x801A4300 size 0xCC
// fn_801A43E0 @ 0x801A43E0 size 0x13C
// fn_801A4520 @ 0x801A4520 size 0xEC
// fn_801A4620 @ 0x801A4620 size 0x28
// fn_801A4660 @ 0x801A4660 size 0x90
// fn_801A4700 @ 0x801A4700 size 0x38
// fn_801A4740 @ 0x801A4740 size 0x50
// fn_801A47A0 @ 0x801A47A0 size 0x3C
// fn_801A47E0 @ 0x801A47E0 size 0x100
// fn_801A48E0 @ 0x801A48E0 size 0x28
// fn_801A4920 @ 0x801A4920 size 0x60
// fn_801A4980 @ 0x801A4980 size 0x1C
// fn_801A49A0 @ 0x801A49A0 size 0x20
// fn_801A49C0 @ 0x801A49C0 size 0x48
// fn_801A4A20 @ 0x801A4A20 size 0x78
// fn_801A4AA0 @ 0x801A4AA0 size 0x54
// fn_801A4B00 @ 0x801A4B00 size 0x40
// fn_801A4B40 @ 0x801A4B40 size 0x44
// fn_801A4BA0 @ 0x801A4BA0 size 0x44
// fn_801A4C00 @ 0x801A4C00 size 0x2C
// fn_801A4C40 @ 0x801A4C40 size 0x28
// fn_801A4C80 @ 0x801A4C80 size 0x40
// fn_801A4CC0 @ 0x801A4CC0 size 0x48
// fn_801A4D20 @ 0x801A4D20 size 0x30
// fn_801A4D60 @ 0x801A4D60 size 0x1C
// fn_801A4D80 @ 0x801A4D80 size 0x34
// fn_801A4DC0 @ 0x801A4DC0 size 0x38
// fn_801A4E00 @ 0x801A4E00 size 0x64
// fn_801A4E80 @ 0x801A4E80 size 0x48
// fn_801A4EE0 @ 0x801A4EE0 size 0x68
// fn_801A4F60 @ 0x801A4F60 size 0x38
// fn_801A4FA0 @ 0x801A4FA0 size 0x34
// fn_801A4FE0 @ 0x801A4FE0 size 0x2C
// fn_801A5020 @ 0x801A5020 size 0x1C
// fn_801A5040 @ 0x801A5040 size 0x44
// fn_801A50A0 @ 0x801A50A0 size 0x30
// fn_801A50E0 @ 0x801A50E0 size 0x14
// fn_801A5100 @ 0x801A5100 size 0x14
// fn_801A5120 @ 0x801A5120 size 0x2C
// fn_801A5160 @ 0x801A5160 size 0x34
// fn_801A51A0 @ 0x801A51A0 size 0x2C
// fn_801A51E0 @ 0x801A51E0 size 0x28
// fn_801A5220 @ 0x801A5220 size 0x60
// fn_801A5280 @ 0x801A5280 size 0x38
// fn_801A52C0 @ 0x801A52C0 size 0x2C
// fn_801A5300 @ 0x801A5300 size 0x2C
// fn_801A5340 @ 0x801A5340 size 0x50
// fn_801A53A0 @ 0x801A53A0 size 0x50
// fn_801A5400 @ 0x801A5400 size 0xCC
// fn_801A54E0 @ 0x801A54E0 size 0x8
// fn_801A5500 @ 0x801A5500 size 0xAC
// fn_801A55C0 @ 0x801A55C0 size 0x94
// fn_801A5660 @ 0x801A5660 size 0x44
// fn_801A56C0 @ 0x801A56C0 size 0x50
// fn_801A5720 @ 0x801A5720 size 0xC4
// fn_801A5800 @ 0x801A5800 size 0x28
// fn_801A5840 @ 0x801A5840 size 0xA0
// fn_801A58E0 @ 0x801A58E0 size 0x40
// fn_801A5920 @ 0x801A5920 size 0x1EC
// fn_801A5B20 @ 0x801A5B20 size 0x158
// fn_801A5C80 @ 0x801A5C80 size 0xA8
// fn_801A5D40 @ 0x801A5D40 size 0x380
// fn_801A60C0 @ 0x801A60C0 size 0x90
// fn_801A6160 @ 0x801A6160 size 0x24
// fn_801A61A0 @ 0x801A61A0 size 0x58
// fn_801A6200 @ 0x801A6200 size 0x64
// fn_801A6280 @ 0x801A6280 size 0xB0
// fn_801A6340 @ 0x801A6340 size 0x60
// fn_801A63A0 @ 0x801A63A0 size 0x48
// fn_801A6400 @ 0x801A6400 size 0x4C
// fn_801A6460 @ 0x801A6460 size 0x18
// fn_801A6480 @ 0x801A6480 size 0x35C
// fn_801A67E0 @ 0x801A67E0 size 0x94
// fn_801A6880 @ 0x801A6880 size 0x54
// fn_801A68E0 @ 0x801A68E0 size 0x140
// fn_801A6A20 @ 0x801A6A20 size 0xB4
// fn_801A6AE0 @ 0x801A6AE0 size 0x138
// fn_801A6C20 @ 0x801A6C20 size 0x68
// fn_801A6CA0 @ 0x801A6CA0 size 0xF0
// fn_801A6DA0 @ 0x801A6DA0 size 0xE8
// fn_801A6EA0 @ 0x801A6EA0 size 0xD4
// fn_801A6F80 @ 0x801A6F80 size 0x90
// fn_801A7020 @ 0x801A7020 size 0x3C
// fn_801A7060 @ 0x801A7060 size 0x3C
// fn_801A70A0 @ 0x801A70A0 size 0x4C
// fn_801A7100 @ 0x801A7100 size 0x10
// fn_801A7120 @ 0x801A7120 size 0x4C
// fn_801A7180 @ 0x801A7180 size 0x94
// fn_801A7220 @ 0x801A7220 size 0xB0
// fn_801A72E0 @ 0x801A72E0 size 0x10C
// fn_801A7400 @ 0x801A7400 size 0x54
// fn_801A7460 @ 0x801A7460 size 0x3C
// fn_801A74A0 @ 0x801A74A0 size 0x40
// fn_801A74E0 @ 0x801A74E0 size 0x70
// fn_801A7560 @ 0x801A7560 size 0x6C
// fn_801A75E0 @ 0x801A75E0 size 0x30
// fn_801A7620 @ 0x801A7620 size 0x90
// fn_801A76C0 @ 0x801A76C0 size 0xC8
// fn_801A77A0 @ 0x801A77A0 size 0x8
// fn_801A77C0 @ 0x801A77C0 size 0x30
// fn_801A7800 @ 0x801A7800 size 0xB0
// fn_801A78C0 @ 0x801A78C0 size 0x1D8
// fn_801A7AA0 @ 0x801A7AA0 size 0x27C
// fn_801A7D20 @ 0x801A7D20 size 0x20C
// fn_801A7F40 @ 0x801A7F40 size 0x128
// fn_801A8080 @ 0x801A8080 size 0x34
// fn_801A80C0 @ 0x801A80C0 size 0x28
// fn_801A8100 @ 0x801A8100 size 0x54
// fn_801A8160 @ 0x801A8160 size 0x68
// fn_801A81E0 @ 0x801A81E0 size 0x138
// fn_801A8320 @ 0x801A8320 size 0xD0
// fn_801A8400 @ 0x801A8400 size 0x7C
// fn_801A8480 @ 0x801A8480 size 0x6C
// fn_801A8500 @ 0x801A8500 size 0x10C
// fn_801A8620 @ 0x801A8620 size 0x148
// fn_801A8780 @ 0x801A8780 size 0x44
// fn_801A87E0 @ 0x801A87E0 size 0x44
// fn_801A8840 @ 0x801A8840 size 0x2C
// fn_801A8880 @ 0x801A8880 size 0x10
// fn_801A88A0 @ 0x801A88A0 size 0x14C
// fn_801A8A00 @ 0x801A8A00 size 0xE8
// fn_801A8AE8 @ 0x801A8AE8 size 0xD4
// fn_801A8BBC @ 0x801A8BBC size 0xCC
// fn_801A8C88 @ 0x801A8C88 size 0x174
// fn_801A8DFC @ 0x801A8DFC size 0xA0
// fn_801A8E9C @ 0x801A8E9C size 0x24
// fn_801A8EC0 @ 0x801A8EC0 size 0x44
// fn_801A8F04 @ 0x801A8F04 size 0xBC
// fn_801A8FC0 @ 0x801A8FC0 size 0x2C
// fn_801A8FEC @ 0x801A8FEC size 0xDC
// fn_801A90C8 @ 0x801A90C8 size 0x4C
// fn_801A9114 @ 0x801A9114 size 0x50
// fn_801A9164 @ 0x801A9164 size 0x4
// fn_801A9168 @ 0x801A9168 size 0xD4
// fn_801A923C @ 0x801A923C size 0xE0
// fn_801A931C @ 0x801A931C size 0x34
// fn_801A9350 @ 0x801A9350 size 0x3C
// fn_801A938C @ 0x801A938C size 0x25C
// fn_801A95E8 @ 0x801A95E8 size 0x64
// fn_801A964C @ 0x801A964C size 0xE0
// fn_801A972C @ 0x801A972C size 0xC0
// fn_801A97EC @ 0x801A97EC size 0x74
// fn_801A9860 @ 0x801A9860 size 0x70
// fn_801A98D0 @ 0x801A98D0 size 0x70
// fn_801A9940 @ 0x801A9940 size 0x4C
// fn_801A998C @ 0x801A998C size 0x158
// fn_801A9AE4 @ 0x801A9AE4 size 0x6C
// fn_801A9B50 @ 0x801A9B50 size 0x60
// fn_801A9BB0 @ 0x801A9BB0 size 0x54
// fn_801A9C04 @ 0x801A9C04 size 0xD4
// fn_801A9CD8 @ 0x801A9CD8 size 0x10C
// fn_801A9DE4 @ 0x801A9DE4 size 0x10C
// fn_801A9EF0 @ 0x801A9EF0 size 0x244
// fn_801AA134 @ 0x801AA134 size 0x830
// fn_801AA964 @ 0x801AA964 size 0x174
// fn_801AAAD8 @ 0x801AAAD8 size 0x56C
// fn_801AB044 @ 0x801AB044 size 0x44
// fn_801AB088 @ 0x801AB088 size 0x108
// fn_801AB190 @ 0x801AB190 size 0x12C
// fn_801AB2BC @ 0x801AB2BC size 0x158
// fn_801AB414 @ 0x801AB414 size 0x3C0
// fn_801AB7D4 @ 0x801AB7D4 size 0xE0
// fn_801AB8B4 @ 0x801AB8B4 size 0x3E4
// fn_801ABC98 @ 0x801ABC98 size 0x4C
// fn_801ABCE4 @ 0x801ABCE4 size 0x94
// fn_801ABD78 @ 0x801ABD78 size 0x17C
// fn_801ABEF4 @ 0x801ABEF4 size 0xC8
// fn_801ABFBC @ 0x801ABFBC size 0x4
// fn_801ABFC0 @ 0x801ABFC0 size 0x4
// fn_801ABFC4 @ 0x801ABFC4 size 0x64
// fn_801AC028 @ 0x801AC028 size 0x38
// fn_801AC060 @ 0x801AC060 size 0x5E0
// fn_801AC640 @ 0x801AC640 size 0x3C
// fn_801AC67C @ 0x801AC67C size 0x8
// fn_801AC684 @ 0x801AC684 size 0x3C
// fn_801AC6C0 @ 0x801AC6C0 size 0x2A8
// fn_801AC968 @ 0x801AC968 size 0x30
// fn_801AC998 @ 0x801AC998 size 0xB8
// fn_801ACA50 @ 0x801ACA50 size 0x74
// fn_801ACAC4 @ 0x801ACAC4 size 0x708
// fn_801AD1CC @ 0x801AD1CC size 0x128
// fn_801AD2F4 @ 0x801AD2F4 size 0x494
// fn_801AD788 @ 0x801AD788 size 0xE0
// fn_801AD868 @ 0x801AD868 size 0x68
// fn_801AD8D0 @ 0x801AD8D0 size 0x98
// fn_801AD968 @ 0x801AD968 size 0x2D8
// fn_801ADC40 @ 0x801ADC40 size 0x10C
// fn_801ADD4C @ 0x801ADD4C size 0xD0
// fn_801ADE1C @ 0x801ADE1C size 0x1E8
// fn_801AE004 @ 0x801AE004 size 0x358
// fn_801AE35C @ 0x801AE35C size 0x64
// fn_801AE3C0 @ 0x801AE3C0 size 0x94
// fn_801AE454 @ 0x801AE454 size 0x3EC
// fn_801AE840 @ 0x801AE840 size 0xC4
// fn_801AE904 @ 0x801AE904 size 0x104
// fn_801AEA08 @ 0x801AEA08 size 0xC8
// fn_801AEAD0 @ 0x801AEAD0 size 0x17C
// fn_801AEC4C @ 0x801AEC4C size 0x68
// fn_801AECB4 @ 0x801AECB4 size 0x78
// fn_801AED2C @ 0x801AED2C size 0x6BC
// fn_801AF3E8 @ 0x801AF3E8 size 0x400
// fn_801AF7E8 @ 0x801AF7E8 size 0x200
// fn_801AF9E8 @ 0x801AF9E8 size 0x444
// fn_801AFE2C @ 0x801AFE2C size 0x14
// fn_801AFE40 @ 0x801AFE40 size 0x144
// fn_801AFF84 @ 0x801AFF84 size 0x144
// fn_801B00C8 @ 0x801B00C8 size 0x404
// fn_801B04CC @ 0x801B04CC size 0xA4
// fn_801B0570 @ 0x801B0570 size 0x70
// fn_801B05E0 @ 0x801B05E0 size 0xD0
// fn_801B06B0 @ 0x801B06B0 size 0x38
// fn_801B06E8 @ 0x801B06E8 size 0x68
// fn_801B0750 @ 0x801B0750 size 0x11C
// fn_801B086C @ 0x801B086C size 0xB0
// fn_801B091C @ 0x801B091C size 0x4C
// fn_801B0968 @ 0x801B0968 size 0x90
// fn_801B09F8 @ 0x801B09F8 size 0x58
// fn_801B0A50 @ 0x801B0A50 size 0x28
// fn_801B0A78 @ 0x801B0A78 size 0x34
// fn_801B0AAC @ 0x801B0AAC size 0x28
// fn_801B0AD4 @ 0x801B0AD4 size 0x28
// fn_801B0AFC @ 0x801B0AFC size 0x34
// fn_801B0B30 @ 0x801B0B30 size 0x774
// gap_03_80198D98_text @ 0x80198D98 size 0x8
// gap_03_80198DA4_text @ 0x80198DA4 size 0x1C
// gap_03_80198DC4_text @ 0x80198DC4 size 0x1C
// gap_03_80198E2C_text @ 0x80198E2C size 0x14
// gap_03_80198F6C_text @ 0x80198F6C size 0x14
// gap_03_8019905C_text @ 0x8019905C size 0x4
// gap_03_8019913C_text @ 0x8019913C size 0x4
// gap_03_80199238_text @ 0x80199238 size 0x8
// gap_03_801992CC_text @ 0x801992CC size 0x14
// gap_03_801992EC_text @ 0x801992EC size 0x14
// gap_03_80199488_text @ 0x80199488 size 0x18
// gap_03_80199548_text @ 0x80199548 size 0x18
// gap_03_80199568_text @ 0x80199568 size 0x18
// gap_03_801995B4_text @ 0x801995B4 size 0xC
// gap_03_801995F0_text @ 0x801995F0 size 0x10
// gap_03_8019963C_text @ 0x8019963C size 0x4
// gap_03_8019973C_text @ 0x8019973C size 0x4
// gap_03_8019976C_text @ 0x8019976C size 0x14
// gap_03_80199868_text @ 0x80199868 size 0x18
// gap_03_801998B8_text @ 0x801998B8 size 0x8
// gap_03_801999C8_text @ 0x801999C8 size 0x18
// gap_03_801999E8_text @ 0x801999E8 size 0x18
// gap_03_80199A08_text @ 0x80199A08 size 0x18
// gap_03_80199A64_text @ 0x80199A64 size 0x1C
// gap_03_80199B68_text @ 0x80199B68 size 0x18
// gap_03_80199BC4_text @ 0x80199BC4 size 0x1C
// gap_03_80199D0C_text @ 0x80199D0C size 0x14
// gap_03_80199D44_text @ 0x80199D44 size 0x1C
// gap_03_80199E54_text @ 0x80199E54 size 0xC
// gap_03_8019A1FC_text @ 0x8019A1FC size 0x4
// gap_03_8019A450_text @ 0x8019A450 size 0x10
// gap_03_8019A4A8_text @ 0x8019A4A8 size 0x18
// gap_03_8019A524_text @ 0x8019A524 size 0x1C
// gap_03_8019A738_text @ 0x8019A738 size 0x8
// gap_03_8019A764_text @ 0x8019A764 size 0x1C
// gap_03_8019A7AC_text @ 0x8019A7AC size 0x14
// gap_03_8019A810_text @ 0x8019A810 size 0x10
// gap_03_8019A868_text @ 0x8019A868 size 0x18
// gap_03_8019A924_text @ 0x8019A924 size 0x1C
// gap_03_8019A9BC_text @ 0x8019A9BC size 0x4
// gap_03_8019AA3C_text @ 0x8019AA3C size 0x4
// gap_03_8019AACC_text @ 0x8019AACC size 0x14
// gap_03_8019AC24_text @ 0x8019AC24 size 0x1C
// gap_03_8019AC7C_text @ 0x8019AC7C size 0x4
// gap_03_8019AD08_text @ 0x8019AD08 size 0x18
// gap_03_8019AD68_text @ 0x8019AD68 size 0x18
// gap_03_8019ADC4_text @ 0x8019ADC4 size 0x1C
// gap_03_8019AE04_text @ 0x8019AE04 size 0x1C
// gap_03_8019AF64_text @ 0x8019AF64 size 0x1C
// gap_03_8019AFB8_text @ 0x8019AFB8 size 0x8
// gap_03_8019AFF0_text @ 0x8019AFF0 size 0x10
// gap_03_8019B050_text @ 0x8019B050 size 0x10
// gap_03_8019B274_text @ 0x8019B274 size 0xC
// gap_03_8019B304_text @ 0x8019B304 size 0x1C
// gap_03_8019B390_text @ 0x8019B390 size 0x10
// gap_03_8019B410_text @ 0x8019B410 size 0x10
// gap_03_8019B4C4_text @ 0x8019B4C4 size 0x1C
// gap_03_8019B594_text @ 0x8019B594 size 0xC
// gap_03_8019B5AC_text @ 0x8019B5AC size 0x14
// gap_03_8019B5F8_text @ 0x8019B5F8 size 0x8
// gap_03_8019B69C_text @ 0x8019B69C size 0x4
// gap_03_8019B794_text @ 0x8019B794 size 0xC
// gap_03_8019BA24_text @ 0x8019BA24 size 0x1C
// gap_03_8019BAD8_text @ 0x8019BAD8 size 0x8
// gap_03_8019BB68_text @ 0x8019BB68 size 0x18
// gap_03_8019BBC8_text @ 0x8019BBC8 size 0x18
// gap_03_8019BC18_text @ 0x8019BC18 size 0x8
// gap_03_8019BC68_text @ 0x8019BC68 size 0x18
// gap_03_8019BCA4_text @ 0x8019BCA4 size 0x1C
// gap_03_8019BD08_text @ 0x8019BD08 size 0x18
// gap_03_8019BD54_text @ 0x8019BD54 size 0xC
// gap_03_8019BD9C_text @ 0x8019BD9C size 0x4
// gap_03_8019BE0C_text @ 0x8019BE0C size 0x14
// gap_03_8019BE30_text @ 0x8019BE30 size 0x10
// gap_03_8019BE78_text @ 0x8019BE78 size 0x8
// gap_03_8019BEB8_text @ 0x8019BEB8 size 0x8
// gap_03_8019BF3C_text @ 0x8019BF3C size 0x4
// gap_03_8019C0BC_text @ 0x8019C0BC size 0x4
// gap_03_8019C104_text @ 0x8019C104 size 0x1C
// gap_03_8019C1AC_text @ 0x8019C1AC size 0x14
// gap_03_8019C470_text @ 0x8019C470 size 0x10
// gap_03_8019C684_text @ 0x8019C684 size 0x1C
// gap_03_8019C70C_text @ 0x8019C70C size 0x14
// gap_03_8019C790_text @ 0x8019C790 size 0x10
// gap_03_8019C7D0_text @ 0x8019C7D0 size 0x10
// gap_03_8019C828_text @ 0x8019C828 size 0x18
// gap_03_8019C854_text @ 0x8019C854 size 0xC
// gap_03_8019C8F0_text @ 0x8019C8F0 size 0x10
// gap_03_8019CA50_text @ 0x8019CA50 size 0x10
// gap_03_8019CB38_text @ 0x8019CB38 size 0x8
// gap_03_8019CBB0_text @ 0x8019CBB0 size 0x10
// gap_03_8019CCBC_text @ 0x8019CCBC size 0x4
// gap_03_8019CDF8_text @ 0x8019CDF8 size 0x8
// gap_03_8019CE30_text @ 0x8019CE30 size 0x10
// gap_03_8019CEBC_text @ 0x8019CEBC size 0x4
// gap_03_8019CF98_text @ 0x8019CF98 size 0x8
// gap_03_8019D078_text @ 0x8019D078 size 0x8
// gap_03_8019D0B8_text @ 0x8019D0B8 size 0x8
// gap_03_8019D408_text @ 0x8019D408 size 0x18
// gap_03_8019D488_text @ 0x8019D488 size 0x18
// gap_03_8019D7D4_text @ 0x8019D7D4 size 0xC
// gap_03_8019D858_text @ 0x8019D858 size 0x8
// gap_03_8019D888_text @ 0x8019D888 size 0x18
// gap_03_8019D9E4_text @ 0x8019D9E4 size 0x1C
// gap_03_8019DA74_text @ 0x8019DA74 size 0xC
// gap_03_8019DB30_text @ 0x8019DB30 size 0x10
// gap_03_8019DBA4_text @ 0x8019DBA4 size 0x1C
// gap_03_8019DCBC_text @ 0x8019DCBC size 0x4
// gap_03_8019DD84_text @ 0x8019DD84 size 0x1C
// gap_03_8019DDEC_text @ 0x8019DDEC size 0x14
// gap_03_8019DE38_text @ 0x8019DE38 size 0x8
// gap_03_8019DFB4_text @ 0x8019DFB4 size 0xC
// gap_03_8019E09C_text @ 0x8019E09C size 0x4
// gap_03_8019E1A4_text @ 0x8019E1A4 size 0x1C
// gap_03_8019E298_text @ 0x8019E298 size 0x8
// gap_03_8019E31C_text @ 0x8019E31C size 0x4
// gap_03_8019E6B4_text @ 0x8019E6B4 size 0xC
// gap_03_8019E6D8_text @ 0x8019E6D8 size 0x8
// gap_03_8019E6F4_text @ 0x8019E6F4 size 0xC
// gap_03_8019E72C_text @ 0x8019E72C size 0x14
// gap_03_8019E798_text @ 0x8019E798 size 0x8
// gap_03_8019E7E4_text @ 0x8019E7E4 size 0x1C
// gap_03_8019E82C_text @ 0x8019E82C size 0x14
// gap_03_8019E910_text @ 0x8019E910 size 0x10
// gap_03_8019E958_text @ 0x8019E958 size 0x8
// gap_03_8019E9C8_text @ 0x8019E9C8 size 0x18
// gap_03_8019EA5C_text @ 0x8019EA5C size 0x4
// gap_03_8019EA7C_text @ 0x8019EA7C size 0x4
// gap_03_8019EAA4_text @ 0x8019EAA4 size 0x1C
// gap_03_8019EAFC_text @ 0x8019EAFC size 0x4
// gap_03_8019EB3C_text @ 0x8019EB3C size 0x4
// gap_03_8019EB94_text @ 0x8019EB94 size 0xC
// gap_03_8019EBDC_text @ 0x8019EBDC size 0x4
// gap_03_8019EC18_text @ 0x8019EC18 size 0x8
// gap_03_8019EC4C_text @ 0x8019EC4C size 0x14
// gap_03_8019ECB0_text @ 0x8019ECB0 size 0x10
// gap_03_8019ED04_text @ 0x8019ED04 size 0x1C
// gap_03_8019ED78_text @ 0x8019ED78 size 0x8
// gap_03_8019EEA8_text @ 0x8019EEA8 size 0x18
// gap_03_8019EEE4_text @ 0x8019EEE4 size 0x1C
// gap_03_8019F170_text @ 0x8019F170 size 0x10
// gap_03_8019F1E8_text @ 0x8019F1E8 size 0x18
// gap_03_8019F224_text @ 0x8019F224 size 0x1C
// gap_03_8019F26C_text @ 0x8019F26C size 0x14
// gap_03_8019F2A8_text @ 0x8019F2A8 size 0x18
// gap_03_8019F2F8_text @ 0x8019F2F8 size 0x8
// gap_03_8019F624_text @ 0x8019F624 size 0x1C
// gap_03_8019F66C_text @ 0x8019F66C size 0x14
// gap_03_8019F6E4_text @ 0x8019F6E4 size 0x1C
// gap_03_8019F770_text @ 0x8019F770 size 0x10
// gap_03_8019F994_text @ 0x8019F994 size 0xC
// gap_03_8019FB3C_text @ 0x8019FB3C size 0x4
// gap_03_8019FB84_text @ 0x8019FB84 size 0x1C
// gap_03_8019FCAC_text @ 0x8019FCAC size 0x14
// gap_03_8019FD34_text @ 0x8019FD34 size 0xC
// gap_03_8019FD58_text @ 0x8019FD58 size 0x8
// gap_03_8019FD78_text @ 0x8019FD78 size 0x8
// gap_03_8019FDD0_text @ 0x8019FDD0 size 0x10
// gap_03_8019FE30_text @ 0x8019FE30 size 0x10
// gap_03_8019FE7C_text @ 0x8019FE7C size 0x4
// gap_03_8019FEB0_text @ 0x8019FEB0 size 0x10
// gap_03_8019FEF0_text @ 0x8019FEF0 size 0x10
// gap_03_8019FF5C_text @ 0x8019FF5C size 0x4
// gap_03_8019FFF0_text @ 0x8019FFF0 size 0x10
// gap_03_801A0068_text @ 0x801A0068 size 0x18
// gap_03_801A0184_text @ 0x801A0184 size 0x1C
// gap_03_801A01E8_text @ 0x801A01E8 size 0x18
// gap_03_801A05D4_text @ 0x801A05D4 size 0xC
// gap_03_801A07C4_text @ 0x801A07C4 size 0x1C
// gap_03_801A0834_text @ 0x801A0834 size 0xC
// gap_03_801A08A4_text @ 0x801A08A4 size 0x1C
// gap_03_801A0928_text @ 0x801A0928 size 0x18
// gap_03_801A0970_text @ 0x801A0970 size 0x10
// gap_03_801A0AAC_text @ 0x801A0AAC size 0x14
// gap_03_801A0AF8_text @ 0x801A0AF8 size 0x8
// gap_03_801A0B28_text @ 0x801A0B28 size 0x18
// gap_03_801A0BE8_text @ 0x801A0BE8 size 0x18
// gap_03_801A0C34_text @ 0x801A0C34 size 0xC
// gap_03_801A0D14_text @ 0x801A0D14 size 0xC
// gap_03_801A0EB8_text @ 0x801A0EB8 size 0x8
// gap_03_801A0F08_text @ 0x801A0F08 size 0x18
// gap_03_801A0F54_text @ 0x801A0F54 size 0xC
// gap_03_801A1068_text @ 0x801A1068 size 0x18
// gap_03_801A1098_text @ 0x801A1098 size 0x8
// gap_03_801A1118_text @ 0x801A1118 size 0x8
// gap_03_801A11B0_text @ 0x801A11B0 size 0x10
// gap_03_801A120C_text @ 0x801A120C size 0x14
// gap_03_801A1250_text @ 0x801A1250 size 0x10
// gap_03_801A1270_text @ 0x801A1270 size 0x10
// gap_03_801A12BC_text @ 0x801A12BC size 0x4
// gap_03_801A12E8_text @ 0x801A12E8 size 0x18
// gap_03_801A1438_text @ 0x801A1438 size 0x8
// gap_03_801A14BC_text @ 0x801A14BC size 0x4
// gap_03_801A1574_text @ 0x801A1574 size 0xC
// gap_03_801A1650_text @ 0x801A1650 size 0x10
// gap_03_801A1784_text @ 0x801A1784 size 0x1C
// gap_03_801A17D8_text @ 0x801A17D8 size 0x8
// gap_03_801A1918_text @ 0x801A1918 size 0x8
// gap_03_801A197C_text @ 0x801A197C size 0x4
// gap_03_801A1B34_text @ 0x801A1B34 size 0xC
// gap_03_801A1B94_text @ 0x801A1B94 size 0xC
// gap_03_801A1BF4_text @ 0x801A1BF4 size 0xC
// gap_03_801A1C50_text @ 0x801A1C50 size 0x10
// gap_03_801A1CC8_text @ 0x801A1CC8 size 0x18
// gap_03_801A1D30_text @ 0x801A1D30 size 0x10
// gap_03_801A1DB0_text @ 0x801A1DB0 size 0x10
// gap_03_801A1E08_text @ 0x801A1E08 size 0x18
// gap_03_801A1E7C_text @ 0x801A1E7C size 0x4
// gap_03_801A1F50_text @ 0x801A1F50 size 0x10
// gap_03_801A1FF0_text @ 0x801A1FF0 size 0x10
// gap_03_801A2864_text @ 0x801A2864 size 0x1C
// gap_03_801A2928_text @ 0x801A2928 size 0x18
// gap_03_801A2B08_text @ 0x801A2B08 size 0x18
// gap_03_801A2BCC_text @ 0x801A2BCC size 0x14
// gap_03_801A2C78_text @ 0x801A2C78 size 0x8
// gap_03_801A3104_text @ 0x801A3104 size 0x1C
// gap_03_801A328C_text @ 0x801A328C size 0x14
// gap_03_801A32E8_text @ 0x801A32E8 size 0x18
// gap_03_801A335C_text @ 0x801A335C size 0x4
// gap_03_801A33A8_text @ 0x801A33A8 size 0x18
// gap_03_801A33FC_text @ 0x801A33FC size 0x4
// gap_03_801A344C_text @ 0x801A344C size 0x14
// gap_03_801A34AC_text @ 0x801A34AC size 0x14
// gap_03_801A35B8_text @ 0x801A35B8 size 0x8
// gap_03_801A3638_text @ 0x801A3638 size 0x8
// gap_03_801A3670_text @ 0x801A3670 size 0x10
// gap_03_801A3728_text @ 0x801A3728 size 0x18
// gap_03_801A37CC_text @ 0x801A37CC size 0x14
// gap_03_801A37F8_text @ 0x801A37F8 size 0x8
// gap_03_801A3838_text @ 0x801A3838 size 0x8
// gap_03_801A3884_text @ 0x801A3884 size 0x1C
// gap_03_801A3944_text @ 0x801A3944 size 0x1C
// gap_03_801A3984_text @ 0x801A3984 size 0x1C
// gap_03_801A39CC_text @ 0x801A39CC size 0x14
// gap_03_801A3A0C_text @ 0x801A3A0C size 0x14
// gap_03_801A3A2C_text @ 0x801A3A2C size 0x14
// gap_03_801A3A8C_text @ 0x801A3A8C size 0x14
// gap_03_801A3DBC_text @ 0x801A3DBC size 0x4
// gap_03_801A41D0_text @ 0x801A41D0 size 0x10
// gap_03_801A42E4_text @ 0x801A42E4 size 0x1C
// gap_03_801A43CC_text @ 0x801A43CC size 0x14
// gap_03_801A451C_text @ 0x801A451C size 0x4
// gap_03_801A460C_text @ 0x801A460C size 0x14
// gap_03_801A4648_text @ 0x801A4648 size 0x18
// gap_03_801A46F0_text @ 0x801A46F0 size 0x10
// gap_03_801A4738_text @ 0x801A4738 size 0x8
// gap_03_801A4790_text @ 0x801A4790 size 0x10
// gap_03_801A47DC_text @ 0x801A47DC size 0x4
// gap_03_801A4908_text @ 0x801A4908 size 0x18
// gap_03_801A499C_text @ 0x801A499C size 0x4
// gap_03_801A4A08_text @ 0x801A4A08 size 0x18
// gap_03_801A4A98_text @ 0x801A4A98 size 0x8
// gap_03_801A4AF4_text @ 0x801A4AF4 size 0xC
// gap_03_801A4B84_text @ 0x801A4B84 size 0x1C
// gap_03_801A4BE4_text @ 0x801A4BE4 size 0x1C
// gap_03_801A4C2C_text @ 0x801A4C2C size 0x14
// gap_03_801A4C68_text @ 0x801A4C68 size 0x18
// gap_03_801A4D08_text @ 0x801A4D08 size 0x18
// gap_03_801A4D50_text @ 0x801A4D50 size 0x10
// gap_03_801A4D7C_text @ 0x801A4D7C size 0x4
// gap_03_801A4DB4_text @ 0x801A4DB4 size 0xC
// gap_03_801A4DF8_text @ 0x801A4DF8 size 0x8
// gap_03_801A4E64_text @ 0x801A4E64 size 0x1C
// gap_03_801A4EC8_text @ 0x801A4EC8 size 0x18
// gap_03_801A4F48_text @ 0x801A4F48 size 0x18
// gap_03_801A4F98_text @ 0x801A4F98 size 0x8
// gap_03_801A4FD4_text @ 0x801A4FD4 size 0xC
// gap_03_801A500C_text @ 0x801A500C size 0x14
// gap_03_801A503C_text @ 0x801A503C size 0x4
// gap_03_801A5084_text @ 0x801A5084 size 0x1C
// gap_03_801A50D0_text @ 0x801A50D0 size 0x10
// gap_03_801A50F4_text @ 0x801A50F4 size 0xC
// gap_03_801A5114_text @ 0x801A5114 size 0xC
// gap_03_801A514C_text @ 0x801A514C size 0x14
// gap_03_801A5194_text @ 0x801A5194 size 0xC
// gap_03_801A51CC_text @ 0x801A51CC size 0x14
// gap_03_801A5208_text @ 0x801A5208 size 0x18
// gap_03_801A52B8_text @ 0x801A52B8 size 0x8
// gap_03_801A52EC_text @ 0x801A52EC size 0x14
// gap_03_801A532C_text @ 0x801A532C size 0x14
// gap_03_801A5390_text @ 0x801A5390 size 0x10
// gap_03_801A53F0_text @ 0x801A53F0 size 0x10
// gap_03_801A54CC_text @ 0x801A54CC size 0x14
// gap_03_801A54E8_text @ 0x801A54E8 size 0x18
// gap_03_801A55AC_text @ 0x801A55AC size 0x14
// gap_03_801A5654_text @ 0x801A5654 size 0xC
// gap_03_801A56A4_text @ 0x801A56A4 size 0x1C
// gap_03_801A5710_text @ 0x801A5710 size 0x10
// gap_03_801A57E4_text @ 0x801A57E4 size 0x1C
// gap_03_801A5828_text @ 0x801A5828 size 0x18
// gap_03_801A5B0C_text @ 0x801A5B0C size 0x14
// gap_03_801A5C78_text @ 0x801A5C78 size 0x8
// gap_03_801A5D28_text @ 0x801A5D28 size 0x18
// gap_03_801A6150_text @ 0x801A6150 size 0x10
// gap_03_801A6184_text @ 0x801A6184 size 0x1C
// gap_03_801A61F8_text @ 0x801A61F8 size 0x8
// gap_03_801A6264_text @ 0x801A6264 size 0x1C
// gap_03_801A6330_text @ 0x801A6330 size 0x10
// gap_03_801A63E8_text @ 0x801A63E8 size 0x18
// gap_03_801A644C_text @ 0x801A644C size 0x14
// gap_03_801A6478_text @ 0x801A6478 size 0x8
// gap_03_801A67DC_text @ 0x801A67DC size 0x4
// gap_03_801A6874_text @ 0x801A6874 size 0xC
// gap_03_801A68D4_text @ 0x801A68D4 size 0xC
// gap_03_801A6AD4_text @ 0x801A6AD4 size 0xC
// gap_03_801A6C18_text @ 0x801A6C18 size 0x8
// gap_03_801A6C88_text @ 0x801A6C88 size 0x18
// gap_03_801A6D90_text @ 0x801A6D90 size 0x10
// gap_03_801A6E88_text @ 0x801A6E88 size 0x18
// gap_03_801A6F74_text @ 0x801A6F74 size 0xC
// gap_03_801A7010_text @ 0x801A7010 size 0x10
// gap_03_801A705C_text @ 0x801A705C size 0x4
// gap_03_801A709C_text @ 0x801A709C size 0x4
// gap_03_801A70EC_text @ 0x801A70EC size 0x14
// gap_03_801A7110_text @ 0x801A7110 size 0x10
// gap_03_801A716C_text @ 0x801A716C size 0x14
// gap_03_801A7214_text @ 0x801A7214 size 0xC
// gap_03_801A72D0_text @ 0x801A72D0 size 0x10
// gap_03_801A73EC_text @ 0x801A73EC size 0x14
// gap_03_801A7454_text @ 0x801A7454 size 0xC
// gap_03_801A749C_text @ 0x801A749C size 0x4
// gap_03_801A7550_text @ 0x801A7550 size 0x10
// gap_03_801A75CC_text @ 0x801A75CC size 0x14
// gap_03_801A7610_text @ 0x801A7610 size 0x10
// gap_03_801A76B0_text @ 0x801A76B0 size 0x10
// gap_03_801A7788_text @ 0x801A7788 size 0x18
// gap_03_801A77A8_text @ 0x801A77A8 size 0x18
// gap_03_801A77F0_text @ 0x801A77F0 size 0x10
// gap_03_801A78B0_text @ 0x801A78B0 size 0x10
// gap_03_801A7A98_text @ 0x801A7A98 size 0x8
// gap_03_801A7D1C_text @ 0x801A7D1C size 0x4
// gap_03_801A7F2C_text @ 0x801A7F2C size 0x14
// gap_03_801A8068_text @ 0x801A8068 size 0x18
// gap_03_801A80B4_text @ 0x801A80B4 size 0xC
// gap_03_801A80E8_text @ 0x801A80E8 size 0x18
// gap_03_801A8154_text @ 0x801A8154 size 0xC
// gap_03_801A81C8_text @ 0x801A81C8 size 0x18
// gap_03_801A8318_text @ 0x801A8318 size 0x8
// gap_03_801A83F0_text @ 0x801A83F0 size 0x10
// gap_03_801A847C_text @ 0x801A847C size 0x4
// gap_03_801A84EC_text @ 0x801A84EC size 0x14
// gap_03_801A860C_text @ 0x801A860C size 0x14
// gap_03_801A8768_text @ 0x801A8768 size 0x18
// gap_03_801A87C4_text @ 0x801A87C4 size 0x1C
// gap_03_801A8824_text @ 0x801A8824 size 0x1C
// gap_03_801A886C_text @ 0x801A886C size 0x14
// gap_03_801A8890_text @ 0x801A8890 size 0x10
// gap_03_801A89EC_text @ 0x801A89EC size 0x14
// securityCallback @ 0x8019BDA0 size 0x6C
// setSecurityCallback @ 0x8019BE20 size 0x10


