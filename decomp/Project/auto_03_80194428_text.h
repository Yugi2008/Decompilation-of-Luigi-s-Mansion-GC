#ifndef AUTO_03_80194428_TEXT_H
#define AUTO_03_80194428_TEXT_H

#include "lib/types.h"

/* ============================================================
 * Types
 * ============================================================ */

typedef struct Arg1 Arg1;

typedef struct Arg3 {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
} Arg3;

struct Arg1 {
    u8  _0[2];        /* 0x00–0x01 padding */
    u8  unk2;         /* 0x02 */
    s8  unk3;         /* 0x03 */
    s8  unk4;         /* 0x04 */
    u8  _5[3];        /* 0x05–0x07 padding */

    s32 unk8;         /* 0x08 */
    s32 unkC;         /* 0x0C */
    s32 unk10;        /* 0x10 */
    u32 unk14;        /* 0x14 */
    s32 unk18;        /* 0x18 */
    u32 unk1C;        /* 0x1C */
    u32 unk20;        /* 0x20 */
    u32 unk24;        /* 0x24 */
    s32 unk28;        /* 0x28 */
    s32 unk2C;        /* 0x2C */

    Arg1** unk30;     /* 0x30 */
    s32  unk34;       /* 0x34 */
    s32  unk38;       /* 0x38 */
    s32  unk3C;       /* 0x3C */
};

typedef struct Arg0 {
    u8    pad0[0x08];   /* 0x00..0x07 */
    u32   unk8;         /* 0x08 */
    u8    padC[0x28];   /* 0x0C..0x33 */
    u8*** unk34;        /* 0x34 */
} Arg0;

typedef struct Arg4 {
    u8  pad0[0x08];     /* 0x00..0x07 */
    u32 unk8;           /* 0x08 */
    u32 unkC;           /* 0x0C */
    s32 unk10;          /* 0x10 */
} Arg4;

typedef struct Arg0_94C8C {
    u8   pad0[0x08];    /* 0x00..0x07 */
    s32  unk8;          /* 0x08 */
    u8   padC[0x28];    /* 0x0C..0x33 */
    s32* unk34;         /* 0x34 */
} Arg0_94C8C;

typedef struct ArgBC0 {
    u8  pad0[0x01];     /* 0x00 */
    u8  unk1;           /* 0x01 */
    u8  unk2;           /* 0x02 */
    u8  pad3[0x19];     /* 0x03..0x1B */
    u32 unk1C;          /* 0x1C */
    u8  pad20[0x18];    /* 0x20..0x37 */
    u32 unk38;          /* 0x38 */
} ArgBC0;

typedef struct Arg0Like {
    u8   pad0[0x34];
    s32* unk34;
    u8   pad38[0x04];
    s32  unk3C;
} Arg0Like;

typedef struct Arg0_94F2C {
    char pad0[0x34];
    s32* unk34;
} Arg0_94F2C;

typedef struct {
    u8  gap[8];
    s32 sp24, sp28, sp2C, sp30;
} Frame;

typedef struct Entry {
    u32 unk0;
    u32 unk4;
    u32 unk8;
} Entry;


/* ============================================================
 * Local helpers
 * ============================================================ */

static u32 load_u32_off(const u32* base, u32 offBytes)
{
    return *(const u32*)((const u8*)base + offBytes);
}

/* ============================================================
 * Externs (data + functions)
 * ============================================================ */

/* extern functions */
extern void fn_8018CC20(s32 a, s32 b, s32* c);
extern u32  DSPCheckMailFromDSP(void);
extern s32  DSPReadMailFromDSP(void);
extern void fn_8018C9EC(s32 a0, void** a1, s32 a2);
extern s32  fn_8018D9A8(s32, s32);
extern u32  OSGetTick(void);
extern void srand(u32 seed);
extern u32  rand(void);
extern void fn_8018C6A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4);

/* extern data */


extern s32 lbl_804A1E60;
extern s16 lbl_804A0498;
extern f32 lbl_804A5DF0;
extern s16 lbl_804A0490;
extern f32 lbl_804A5DE8;
extern u8 lbl_803841E8[0x20];
extern f32 lbl_804A5D28;

/* ============================================================
 * Declarations
 * ============================================================ */

u32  fn_80194428(u32 param_1, u32* param_2);
void fn_8019446C(void* heap, Arg1* header, Arg1** link, Arg3* cfg, s32 arg4, s32 arg5, s8 arg6, s32 arg7);
void fn_80194BC0(ArgBC0* arg0);
void fn_80194C8C(void* arg0);
s32  fn_80194CB8(void* arg0);
void fn_80194EEC(Arg4* arg0, s32 arg1);
void fn_80195210(Arg4* self, s32 arg0);
void fn_80194ED8(Arg1* arg0);
void Channel_SetMixerLevel(f32 farg0);
void DSPInit(void);
void DsetMixerLevel(f32 farg0);
void DsetupTable(u16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void DSPSendCommands(s32* cmds, u32 count);
void DSPWaitFinish(void);
void DwaitFrame(void);
u32 GetInitVal(void);
s32 fn_80194DE4(Arg0Like* arg0, s32 arg1);
void fn_80194F2C(Arg0_94F2C* arg0, s32 arg1);
void fn_8019766C(void);
s32 fn_8019837C(void* arg0);
s32 fn_80198384(void* arg0);
s32 fn_8019838C(void* arg0);
void fn_801983D0(void* arg0);
void fn_801985A4(void* a0, s32 a1, s32 arg2, s32 arg3, s32 arg4);
void fn_801985DC(void* a0, s32 a1, s32* a2, s32 a3);
void fn_80198BAC(void* unused_r3, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void fn_80198D24(void* arg0);
void fn_80198D84(void);
u8 fn_80198D88(u8 arg0);
void fn_80198DA0(void);
void fn_80198DC0(void);
void fn_80195720(Arg0* arg0, s32 arg2, s32 arg1);
void fn_801965BC(Arg0* arg0, s32 arg2, s32 arg1, s32 arg3);
void fn_80197730(Arg0* arg0, s32 arg2, s32 arg1);
void fn_80195908(Arg0* arg0, s32 arg2, s32 arg1);
void fn_80197824(Arg0* arg0, s32 arg2, s32 arg1);
void fn_80196BDC(Arg0* arg0, s32 arg2, s32 arg1, f32 fp1, f32 fp2);
void fn_801959FC(Arg0* a0, s32 a1, s32 a2);
void fn_801968CC(Arg0* a0, s32 a1, s32 a2, s32 a3);

#endif /* AUTO_03_80194428_TEXT_H */
