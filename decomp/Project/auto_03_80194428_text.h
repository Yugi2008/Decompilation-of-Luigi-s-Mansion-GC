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

typedef struct LinkNode {
    u8    pad0[0x08];
    void** unk8;
    u8    padC[0x18];
    void* unk24;
} LinkNode;

typedef struct Obj_19CE00 {
    u8  pad0[0x04];  /* 0x00..0x03 */
    u32 unk4;        /* 0x04 */
    u8  pad8[0x18];  /* 0x08..0x1F */
    u32 unk20;       /* 0x20 */
    u32 unk24;       /* 0x24 */
} Obj_19CE00;

typedef struct Obj_19D860 {
    u8  pad0[0x0C];
    u8  unkC;
    u8  padD[3];
    u32 unk10;
} Obj_19D860;

typedef struct {
    u32 unk0;  /* 0x00 */
    u32 unk4;  /* 0x04 */
} Fn801A1260_Obj;

typedef struct {
    u32 unk0;   /* 0x00 */
    u32 unk4;   /* 0x04 */
    u16 unk8;   /* 0x08 */
    u16 unkA;   /* 0x0A */
} Fn801A37E0_Obj;

typedef struct Fn801A3800_Arg1 {
    u8  pad0[0x04];
    s32 unk4;          /* 0x04 */
} Fn801A3800_Arg1;

typedef struct Fn801A3800_Arg0 {
    u8 pad0[0x2A8];
    Fn801A3800_Arg1* unk2A8;  /* 0x2A8 */
} Fn801A3800_Arg0;

typedef struct Obj_804A1FB0 {
    u8  pad0[0x3A0];  /* 0x000..0x39F */
    u8  unk3A0;       /* 0x3A0 */
} Obj_804A1FB0;

typedef struct Obj_801A7100 {
    u8 pad0[0x36C];
    u8 unk36C; /* 0x36C */
    u8 unk36D; /* 0x36D */
} Obj_801A7100;

typedef struct Obj_801A77A0 {
    u8 pad0[0x02];
    s8 unk2;   /* 0x02 */
} Obj_801A77A0;

typedef struct Obj801AE35C {
    u8   pad_00[0x54];   /* 0x00..0x53 */
    void* unk54;         /* 0x54 */
} Obj801AE35C;

typedef struct Obj801B0AFC {
    u8   pad_00[0x108];
    u8*  unk108;          /* +0x108 */
} Obj801B0AFC;

typedef struct InnerC {
    u8  pad0[0x4];
    u16 unk4;          /* +0x4 */
} InnerC;

typedef struct ObjE0 {
    u8     pad0[0xC];
    InnerC* unkC;      /* +0xC */
} ObjE0;

typedef struct Obj0 {
    u8   pad0[0xCE];
    s8   unkCE;        /* +0xCE */
    u8   padD0[0xE0 - 0xCF];  /* fill to +0xE0 */
    ObjE0* unkE0;       /* +0xE0 */
} Obj0;

typedef struct Obj801B0A78 {
    u8  pad_00[0x104];
    u8* unk104;
} Obj801B0A78;

typedef struct Obj801B0968 {
    u8  pad00[0x34];
    u32 unk34;          /* 0x34 */

    u32 unk38;          /* 0x38 */
    u8  pad3C[0x40 - 0x3C];
    u32 unk40;          /* 0x40 */
    u32 unk44;          /* 0x44 */
    u32 unk48;          /* 0x48 */
    u32 unk4C;          /* 0x4C */
    u32 unk50;          /* 0x50 */
    u32 unk54;          /* 0x54 */

    u8  pad58[0x100 - 0x58];
    u32 unk100;         /* 0x100 */
    u32 unk104;         /* 0x104 */
    u32 unk108;         /* 0x108 */
    u32 unk10C;         /* 0x10C */
    u32 unk110;         /* 0x110 */
    u32 unk114;         /* 0x114 */
    u32 unk118;         /* 0x118 */
} Obj801B0968;

typedef struct Obj {
    void* vptr;
} Obj;

typedef struct {
    u8 pad0[2];  /* 0x00-0x01 */
    s8 unk2;     /* 0x02 */
    u8 unk3;     /* 0x03 */
} Obj801A8880;

typedef struct {
    u8  pad0[1];   /* 0x00 */
    u8  unk1;      /* 0x01 */
    u8  pad2[6];   /* 0x02..0x07 */
    u32 unk8;      /* 0x08 */
} Obj80197984;




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
extern void OSWakeupThread(void* thread);
extern void __dl__FPv(void* p);
extern void fn_801D0398(void* p, int arg1);
extern void GXLoadNrmMtxImm(s32 mtx, s32 id);
extern void GXLoadNrmMtxImm3x3(const void* mtx, s32 id);
extern void GXLoadPosMtxImm(const void* mtx, s32 id);
extern void fn_801BA53C(void);
extern void fn_801BA994(void);
extern void fn_801BA73C(void);
extern void fn_801BA860(void);
extern void PSMTXIdentity(void* mtx);



/* extern data */


extern s32 lbl_804A1F18;
extern s32 lbl_804A1E60;
extern s16 lbl_804A0498;
extern f32 lbl_804A5DF0;
extern s16 lbl_804A0490;
extern f32 lbl_804A5DE8;
extern u8 lbl_803841E8[0x20];
extern f32 lbl_804A5D28;
extern s32 lbl_804A049C;
extern s32 lbl_804A1EBC;
extern s32 lbl_804A1EC4;
extern s32 lbl_804A1EE4;
extern u8  lbl_804A1EE8;
extern s32 lbl_804A1F04;
extern s32 lbl_804A1F08;
extern u32 lbl_804A1F0C;
extern s32 lbl_804A1F34;
extern s32 lbl_804A1F18;
extern u8 lbl_8044B3C0[];
extern u8 lbl_8044C040[];
extern u8 lbl_8044C240[];
extern f32 lbl_804A5F00;
extern f32 lbl_804A5F04;
extern u8 lbl_80386E38[];
extern s32 lbl_804A1F48;
extern s32 lbl_804A1F4C;
extern s32 lbl_804A1F50;
extern s32 lbl_804A1FC8;
extern u8 lbl_804A1FCC;
extern char lbl_80386E90[];
extern s32 lbl_804A1E8C;
extern s8 lbl_804A1E90;


extern Obj_804A1FB0* lbl_804A1FB0;


extern const u32 lbl_8044B440[];

extern __declspec(section ".sdata") unsigned char lbl_804A1F10[];

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
void fn_80199560(s32 arg0);
void DsetMixerLevel(f32 level);
void fn_8019A4C0(void);
void fn_8019A200(s32 arg0);
void fn_8019A500(void);
void fn_8019A740(void);
void fn_8019A540(s32 arg0);
void fn_8019AD80(void* ctx, s32 value);
void fn_8019AFC0(s32 a, u32 flag, s32 b);
void fn_80194F6C(Arg0* arg0, s32 arg1, s32 arg2);
void fn_8019506C(Arg0* arg0, s32 arg1, s32 arg2, f32 fp1);
void fn_801950F4(Arg0* arg0, s32 arg1, s32 arg2);
void fn_80199580(f32 chan_level, f32 mixer_level);
void fn_80199860(s32 arg0);
void fn_801999E0(s32 arg0);
s32 fn_80199A00(void);
void fn_8019ADE0(s32* arg0);
void fn_8019B000(void);
void fn_8019B040(void);
void fn_8019B5A0(void);
void fn_8019C824(void);
void fn_8019C840(void** arg0, LinkNode* arg1);
void fn_8019CCC0(void);
void fn_8019D080(void* arg0);
void fn_8019CFA0(void);
void fn_8019EBE0(u8);
void fn_8019B5C0(void);
void fn_8019CE00(Obj_19CE00* arg0);
s32 fn_8019D860(void* arg0);
void* fn_8019E6E0(s32 arg0);
void fn_8019F200(void* arg0, s32 arg1);
void fn_8019F180(void* a0, s32 a1, s32 a2);
s32 fn_8019F280(u32 arg0);
u16 fn_8019FD40(s32 arg0);
u16 fn_8019FD60(s32 arg0);
s32 fn_801A05E0(void);
s32 fn_801A07A0(void);
void fn_801A1260(void* arg0);
void fn_801A12C0(void* a0);
void fn_801A1300(void* a0, s32 a1, s32 a2);
void fn_801A37E0(void* arg0);
s32 fn_801A3800(Fn801A3800_Arg0* arg0, Fn801A3800_Arg1* arg1);
void fn_801A49A0(void);
void fn_801A47E0(void);
s32 fn_801A50E0(void);
s32 fn_801A5100(void);
s32 fn_801A54E0(void);
void fn_801A60C0(void* a0, s32 a1, s32 a2);
void fn_801A6160(void* a0, s32 a1);
void fn_801A7100(void* arg0);
void fn_801A77A0(void* arg0, s8 arg1);
f32 fn_801A80C0(f32 farg0) ;
void fn_801A9164(void);
void fn_801ABFBC(void);
void fn_801ABFC0(void);
s32 fn_801AC67C(void);
s32 fn_801ABCE4(void);
s32 fn_801AC968(void* unused, u32 arg1);
void* fn_801AE35C(void* arg0, s16 arg1);
void fn_801AFE2C(void* unused, f32* arg1, f32* arg2);
void fn_801B0AAC(void* unused, s32 arg1, s32 arg2);
void fn_801B0AD4(void* unused, s32 arg1, const void* arg2);
void fn_801B0AFC(void* arg0, s32 arg1, u16 arg2);
void setSecurityCallback(s32 arg0, s32 arg1, s32 arg2);
s8 fn_801B06B0(void* arg0, s8 arg1);
void fn_801B0A78(void* arg0, s32 arg1, u16 arg2);
s32 fn_801B09F8(void);
void fn_801B0A50(void* unused, s32 arg1, const void* arg2);
void fn_801A8880(void* arg0, s8 arg1);
Obj* fn_801B091C(Obj* self, s16 freeFlag);
void* fn_801B0968(void* arg0);
extern u32 fn_801917E4(void);
void fn_801992E0(s32 arg0, s8 arg1);
u8 fn_80197984(void* arg0);


#endif /* AUTO_03_80194428_TEXT_H */
