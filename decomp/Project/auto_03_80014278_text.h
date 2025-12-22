#ifndef AUTO_03_80014278_TEXT_H
#define AUTO_03_80014278_TEXT_H

#include "lib/types.h"


typedef struct GXTexObj GXTexObj;
typedef void (*FnPtrVoid)(void);
typedef struct UnkLbl_803C2138 UnkLbl_803C2138;
typedef void (*DtorFn)(void*);
typedef struct Unk_8001F020_Obj Unk_8001F020_Obj;
typedef void (*Unk_8001F020_Method)(Unk_8001F020_Obj* self);
typedef struct Unk_8001F390_Obj Unk_8001F390_Obj;
typedef void (*Unk_8001F390_Method)(Unk_8001F390_Obj* self);
typedef struct Unk_8001F3E8_Obj Unk_8001F3E8_Obj;
typedef void (*Unk_8001F3E8_Method)(Unk_8001F3E8_Obj* self);
typedef void* (*CtorFnRtl)(void*);
typedef void (*FnVoid0)(void);
typedef struct Unk_804A0DB8_Obj Unk_804A0DB8_Obj;


typedef struct Unk_8001FAD8_Arg0 {
    u8  pad0[0x04];
    s32 unk4;   /* +0x04 */
    u8  pad8[0x0C - 0x08];
    s32 unkC;   /* +0x0C */
} Unk_8001FAD8_Arg0;

struct Unk_8001F3E8_Obj {
    u8  pad0[0x02];          /* +0x00..0x01 */
    u8  unk2;                /* +0x02 */
    u8  pad3[0x04 - 0x03];   /* +0x03 */
    Unk_8001F3E8_Method unk4;/* +0x04 */
    s32 unk8;                /* +0x08 */
};

typedef struct Unk_80014278 {
    u16 unk0;      /* +0x00 */
    u8  unk2;      /* +0x02 */
    u8  pad03[0x08 - 0x03];

    u32 unk8;      /* +0x08 */
    u32 unkC;      /* +0x0C */
    u32 unk10;     /* +0x10 */
    u32 unk14;     /* +0x14 */
    u8  pad18[0x1C - 0x18];

    u32 unk1C;     /* +0x1C */
    u32 unk20;     /* +0x20 */
    u32 unk24;     /* +0x24 */
    u32 unk28;     /* +0x28 */
    u32 unk2C;     /* +0x2C */
    u32 unk30;     /* +0x30 */
    u32 unk34;     /* +0x34 */
    u32 unk38;     /* +0x38 */

    u8  unk3C;     /* +0x3C */
    u8  unk3D;     /* +0x3D */
    u8  pad3E[0x40 - 0x3E];
} Unk_80014278;

typedef struct Unk_8001431C {
    u8  pad0[0x06]; /* +0x00 */
    u8  unk6;       /* +0x06 */
    u8  pad7;       /* +0x07 */
    u32 unk8;       /* +0x08 */
    u8  unkC;       /* +0x0C */

} Unk_8001431C;

typedef struct UnkTexInitArg_80014554 {
    void* image; /* +0x00 */
    u16   w;     /* +0x04 */
    u16   h;     /* +0x06 */
    s32   fmt;   /* +0x08 */
} UnkTexInitArg_80014554;

typedef struct Unk_80398C00 {
    u8  pad0[0x0C];
    u32 unkC; /* +0x0C */
} Unk_80398C00;

typedef struct Unk_804A0D3C {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Unk_804A0D3C;

typedef struct UnkEntry_14C {
    u8 pad0[0x2C];
    u8 unk2C;
    u8 unk2D;
    u8 unk2E;
} UnkEntry_14C;

typedef struct UnkSrc_800181C8 {
    u8 unk0;   /* +0x00 */
    u8 unk1;   /* +0x01 */
    u8 unk2;   /* +0x02 */
} UnkSrc_800181C8;

typedef struct UnkDst_800181C8 {
    u8  unk0;  /* +0x00 */
    u8  unk1;  /* +0x01 */
    u8  unk2;  /* +0x02 */
    u8  pad3;  /* +0x03 */
    s16 unk4;  /* +0x04 */
} UnkDst_800181C8;

typedef struct UnkObj_80018A18 {
    u8 pad0[0x06];
    u8 unk6;      /* +0x06 */
} UnkObj_80018A18;

typedef struct UnkIn_80018A90 {
    u8  unk0;      /* +0x00 */
    u8  unk1;      /* +0x01 */
    u8  unk2;      /* +0x02 */
    u8  pad3;      /* +0x03 */
    u16 unk4;      /* +0x04 */
    u8  unk6;      /* +0x06 */
} UnkIn_80018A90;

typedef struct UnkOut_80018A90 {
    u8 unk0;       /* +0x00 */
    u8 unk1;       /* +0x01 */
    u8 unk2;       /* +0x02 */
} UnkOut_80018A90;

typedef struct UnkObj_80018AC8 {
    u8  pad0[0x10];
    s32 unk10; /* +0x10 */
} UnkObj_80018AC8;

typedef struct UnkObj_80018AF4 {
    u8  pad0[0x10];
    s32 unk10; /* +0x10 */
} UnkObj_80018AF4;

typedef struct UnkInner_80018B20 {
    u8  pad0[0x04];
    s32 unk4;      /* +0x04 */
} UnkInner_80018B20;

typedef struct UnkObj_80018B20 {
    u8  pad0[0x18];
    UnkInner_80018B20* unk18; /* +0x18 */
} UnkObj_80018B20;

typedef struct UnkObj_80018B50 {
    u8  pad0[0x10];
    s32 unk10; /* +0x10 */
} UnkObj_80018B50;

typedef struct UnkObj_80018B94 {
    u8  pad0[0x10];
    s32 unk10; /* +0x10 */
    s32 unk14; /* +0x14 */
} UnkObj_80018B94;

typedef struct UnkObj_80018BD0 {
    u8  pad0[0x10];
    s32 unk10; /* +0x10 */
    s32 unk14; /* +0x14 */
} UnkObj_80018BD0;

typedef struct UnkTblEntry_8001A8F4 {
    u8  pad0[0x12];
    u16 unk12; /* +0x12 */
} UnkTblEntry_8001A8F4;

typedef struct Unk64Obj_8001A8F4 {
    u8  pad0[0x11C];
    s32 unk11C; /* +0x11C */
} Unk64Obj_8001A8F4;

typedef struct UnkElem_8001A8F4 {
    u8  pad0[0x01];
    u8  unk1;   /* +0x01 */
    u8  pad2[0x5C - 0x02];
    u16 unk5C;  /* +0x5C */
    f32 unk60;  /* +0x60 */
    Unk64Obj_8001A8F4* unk64; /* +0x64 */
} UnkElem_8001A8F4;

typedef struct UnkEntry_8001AB6C {
    u8  pad0[0x0C];
    s32 unkC;              /* +0x0C */
} UnkEntry_8001AB6C;

typedef struct UnkEntry_8001ABE0 {
    u8  pad0[0x0C];
    s32 unkC;              /* +0x0C */
} UnkEntry_8001ABE0;

typedef struct UnkD7C_Entry {
    u8  unk0;          /* +0x00 */
    u8  unk1;          /* +0x01 */
    u8  pad2[0x0A];    /* +0x02..0x0B */
    s32 unkC;          /* +0x0C */
    u8  pad10[0x68 - 0x10];
} UnkD7C_Entry;

typedef struct Unk_80399710 {
    u8 pad0[0x58];
    u8 unk58;
} Unk_80399710;

typedef struct UnkOut_8001AFC0 {
    s32 unk0;
    s32 unk4;
} UnkOut_8001AFC0;

typedef struct UnkSp8_8001B194 {
    u8 pad[0x20];
} UnkSp8_8001B194;

typedef struct Frame_8001B194 {
    UnkSp8_8001B194 sp8;      /* 0x00..0x1F */
    u8 pad_to_sp58[0x50 - 0x20]; /* 0x30 */

    volatile s32 sp58;
    u8 pad_big[0x118 - 0x08 /*ABI*/ - 0x20 - 0x30 - 0x04];
} Frame_8001B194;

typedef struct Unk_8001CBC0 {
    u8 unk0; /* +0x00 */
    u8 unk1; /* +0x01 */
} Unk_8001CBC0;

typedef struct Unk_8001CC04 {
    u8  pad0[0x0C];
    u16 unkC;       /* +0x0C */
} Unk_8001CC04;

typedef struct Unk_8001D4F0_Arg0 {
    u8  pad0[0x38];
    u8* unk38;              /* +0x38 */
} Unk_8001D4F0_Arg0;

typedef struct Unk_8001D588_Arg0 {
    u8  pad0[0x38];
    u8* unk38;              /* +0x38 */
} Unk_8001D588_Arg0;

typedef struct Unk_8001D588_Entry18 {
    u8  pad0[0x02];
    u16 unk2;               /* +0x02 */
    u8  pad4[0x0C - 0x04];
    s32 unkC;               /* +0x0C */
} Unk_8001D588_Entry18;

typedef struct Unk_8001D7A8_Out4 {
    u8 unk0, unk1, unk2, unk3;
} Unk_8001D7A8_Out4;

typedef struct Unk_8001D7A8_Arg0 {
    u8  pad0[0x01];
    u8  unk1;
    u8  pad2[0x34 - 0x02];
    s32 unk34;
    u8  pad38[0x48 - 0x38];
    u8  unk48, unk49, unk4A, unk4B;
} Unk_8001D7A8_Arg0;

typedef struct Unk_8001D824_In4 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
} Unk_8001D824_In4;

typedef struct Unk_8001D824_Arg0 {
    u8  pad0[0x01];
    u8  unk1;        /* +0x01 */
    u8  pad2[0x48 - 0x02];
    u8  unk48;       /* +0x48 */
    u8  unk49;       /* +0x49 */
    u8  unk4A;       /* +0x4A */
    u8  unk4B;       /* +0x4B */
} Unk_8001D824_Arg0;

typedef struct Unk_8001DA1C_Arg1 {
    f32 unk0;              /* +0x00 */
    f32 unk4;              /* +0x04 */
    f32 unk8;              /* +0x08 */
    u8  padC[0x10 - 0x0C];
    f32 unk10;             /* +0x10 */
    f32 unk14;             /* +0x14 */
    f32 unk18;             /* +0x18 */
    u8  pad1C[0x20 - 0x1C];
    f32 unk20;             /* +0x20 */
    f32 unk24;             /* +0x24 */
    f32 unk28;             /* +0x28 */
} Unk_8001DA1C_Arg1;

typedef struct Unk_8001DA1C_Arg0 {
    u8  pad0[0x4C];
    f32 unk4C; /* +0x4C */
    f32 unk50; /* +0x50 */
    f32 unk54; /* +0x54 */
    f32 unk58; /* +0x58 */
    f32 unk5C; /* +0x5C */
    f32 unk60; /* +0x60 */
    f32 unk64; /* +0x64 */
    f32 unk68; /* +0x68 */
    f32 unk6C; /* +0x6C */
    f32 unk70; /* +0x70 */
    f32 unk74; /* +0x74 */
    f32 unk78; /* +0x78 */
} Unk_8001DA1C_Arg0;

typedef struct Unk_8001DA78_Arg0 {
    u8  unk0;              /* +0x00 (stb) */
    u8  pad1[0x04 - 0x01]; /* +0x01..0x03 */
    u32 unk4;              /* +0x04 (stw) */
} Unk_8001DA78_Arg0;

typedef struct Unk_8001E3F8_Arg0 {
    u32 unk0;                 /* +0x00 */

    u8  pad04[0x11C - 0x04];  /* +0x04 .. +0x11B */
    u32 unk11C;               /* +0x11C */
    u32 unk120;               /* +0x120 */
    u32 unk124;               /* +0x124 */

    u8  pad128[0x310 - 0x128];/* +0x128 .. +0x30F */
    f32 unk310;               /* +0x310 */
} Unk_8001E3F8_Arg0;

typedef struct Unk_8001E4B8_Arg0 {
    u32 unk0;                   /* +0x00 flags */
    u8  pad04[0x128 - 0x04];    /* +0x04 .. +0x127 */
    void* unk128;               /* +0x128 */
} Unk_8001E4B8_Arg0;

typedef struct Unk_8001E564_Arg0 {
    u8  pad0[0x124];
    s32 unk124; /* +0x124 */
} Unk_8001E564_Arg0;

typedef struct Unk_8001E564_Entry {
    u8  pad0[0x44];
    s32 at44;                          /* +0x44 */
    u8  pad48[0x6C - 0x48];
    s32 at6C;                          /* +0x6C */
} Unk_8001E564_Entry;

typedef struct Unk_ObjC {
    u8  pad0[0x0C];
    u16 unkC;              /* +0x0C */
} Unk_ObjC;

typedef struct Unk_Entry4_ObjC {
    u8        pad0[0x04];
    Unk_ObjC* unk4;        /* +0x04 */
} Unk_Entry4_ObjC;

typedef struct Unk_8001E594 {
    s32   unk0;             /* +0x00 */
    u8    pad04[0x11C - 0x04];
    s32   unk11C;           /* +0x11C */
    u8    pad120[0x128 - 0x120];
    void* unk128;           /* +0x128 */
    u8    pad12C[0x30C - 0x12C];
    s32   unk30C;           /* +0x30C */
} Unk_8001E594;

typedef struct Unk_8001ECF4 {
    s32  unk0;             /* +0x00 */
    u8   pad04[0x11C - 0x04];
    s32  unk11C;           /* +0x11C */
    u8   pad120[0x128 - 0x120];
    s32  unk128;           /* +0x128 */
} Unk_8001ECF4;

typedef struct Unk_Entry4_s32 {
    u8  pad0[0x04];
    s32 unk4;              /* +0x04 */
} Unk_Entry4_s32;

typedef struct Unk_8001ED94_Arg0 {
    s32 unk0;              /* +0x00 */
    u8  pad04[0x11C - 0x04];
    s32 unk11C;            /* +0x11C */
    u8  pad120[0x128 - 0x120];
    s32 unk128;            /* +0x128 */
} Unk_8001ED94_Arg0;

typedef struct Unk_8001EE28_Arg0 {
    s32 unk0;              /* +0x00 */
    u8  pad04[0x128 - 0x04];
    s32 unk128;            /* +0x128 */
} Unk_8001EE28_Arg0;

struct Unk_8001F020_Obj {
    u8 pad0[0x02];
    u8 unk2;                  /* +0x02 */
    u8 pad3[0x01];
    Unk_8001F020_Method unk4; /* +0x04 */
    s32 unk8;                 /* +0x08 */
};

struct Unk_8001F390_Obj {
    u16 unk0;                 /* +0x00 */
    u8  unk2;                 /* +0x02 */
    u8  pad03;                /* +0x03 */
    Unk_8001F390_Method unk4; /* +0x04 */
    s32 unk8;                 /* +0x08 */
};

typedef struct Unk_8001F440_Arg0 {
    u8    pad0[0x0C];
    void* unkC;            /* +0x0C */
} Unk_8001F440_Arg0;

typedef struct Unk_8001F62C_Arg0 {
    u8    pad0[0x10];
    void* unk10; /* +0x10 */
    void* unk14; /* +0x14 */
} Unk_8001F62C_Arg0;

typedef struct Unk_8001F928_Obj {
    u16 unk0;        /* +0x00 */
    u8  pad2;        /* +0x02 */
    u8  unk2;        /* +0x03 */

    s32 unk4;        /* +0x04 */
    s32 unk8;        /* +0x08 */
    s32 unkC;        /* +0x0C */
    s32 unk10;       /* +0x10 */
    s32 unk14;       /* +0x14 */
    s32 unk18;       /* +0x18 */
    s32 unk1C;       /* +0x1C */
    s32 unk20;       /* +0x20 */
    s32 unk24;       /* +0x24 */
    s32 unk28;       /* +0x28 */
    s32 unk2C;       /* +0x2C */
    s32 unk30;       /* +0x30 */
    s32 unk34;       /* +0x34 */
    s32 unk38;       /* +0x38 */
    u8  unk3C;       /* +0x3C */
    u8  unk3D;       /* +0x3D */
    u8  pad3E[2];    /* +0x3E..0x3F */
} Unk_8001F928_Obj;

typedef struct UnkHeader_0C {
    u8  pad0[0x0C];
    s32 unkC; /* +0x0C */
} UnkHeader_0C;

typedef struct Unk_8001FC60_Arg0 {
    u8 pad0[0x10];
    s8 unk10;      /* +0x10 */
} Unk_8001FC60_Arg0;

typedef struct Unk_80020030_Arg0 {
    u8  pad0[0xA8];
    f32 unkA8;     /* +0xA8 */
} Unk_80020030_Arg0;

typedef struct Unk_80399BE0 {
    void* unk0;  /* +0x00 */
    void* unk4;  /* +0x04 */
    void* unk8;  /* +0x08 */
} Unk_80399BE0;

typedef struct UnkPairF32 {
    f32 unk0; /* +0x00 */
    f32 unk4; /* +0x04 */
} UnkPairF32;

typedef struct Unk_802F4E18 {
    u8  pad0[0x38];
    f32 unk38; /* +0x38 */
    f32 unk3C; /* +0x3C */
    f32 unk40; /* +0x40 */
    f32 unk44; /* +0x44 */
} Unk_802F4E18;

typedef struct Unk_80399C20 {
    u8 pad0[0x08];
    u8 unk8;              /* +0x08 */
    u8 pad9[0x03];
} Unk_80399C20;

typedef struct Unk_804A0DB8_Obj {
    u8  pad0[0xE0];
    s32 unkE0;            /* +0xE0 */
    u8  padE4[0xE8 - 0xE4];
    s32 unkE8;            /* +0xE8 */
} Unk_804A0DB8_Obj;







extern void fn_8002418C(void);
extern void GXCallDisplayList(void* list, s32 nbytes, s32 arg2);
extern void fn_8002D4F0(void* a0, s32 a1);
extern void GXSetNumChans(s32 numChans);
extern void GXSetChanCtrl(s32 chan, s32 enable, s32 ambSrc, s32 matSrc, s32 lightMask, s32 diffFn, s32 attnFn);
extern void GXInitTexObj(GXTexObj* obj, void* image, u16 w, u16 h, s32 fmt, s32 wrapS, s32 wrapT, s32 mipmap);
extern void GXInitTexObjLOD(GXTexObj* obj, s32 minFilt, s32 magFilt, s32 biasClamp, s32 doEdgeLOD, s32 maxAniso, f32 minLOD, f32 maxLOD, f32 lodBias);
extern void GXSetZCompLoc(u8 enable);
extern void fn_800154A0(s32 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4);
extern void GXInitLightAttn(void* lt, f32 a0, f32 a1, f32 a2, f32 k0, f32 k1, f32 k2);
extern void GXInitLightColor(void* lt, s32* col);
extern void GXLoadLightObjImm(void* lt, s32 light_id);
extern void fn_80017040(void);
extern void fn_80017048(void);
extern void fn_800168F4(s8 arg0, void* arg1, s32* arg2, u16 arg3, u8 arg4);
extern s32 fn_8003745C();
extern void fn_8002D484(void* a0, s32 a1);
extern s8 fn_80037234(void);
extern void fn_8001F534(s32 a0, s32 a1, void* a2);
extern void fn_8001F76C(s32 a0, s32 a1, void* a2);
extern void fn_8001E594(void* a0);
extern void fn_8001E890(void* a0, void* a1, u16 a2, f32 a3);
extern void fn_8001F880(s32 a0, void* a1);
extern void fn_8001A988(s32 a0, void* a1, u8 a2, s32 a3, s8 a4);
extern u8  fn_80065320(u8);
extern void fn_800ABD40(UnkSp8_8001B194*);
extern void fn_800ABECC(s32, s32, UnkSp8_8001B194*);
extern void fn_800B8758(void);
extern void fn_8001F1F8(s32 a0, s32 a1);
extern void fn_8000604C(s32 a0);
extern void __destroy_new_array(s32 a0, DtorFn dtor);
extern void fn_8001E4E8(void*);
extern void GXSetCullMode(u8 mode);
extern void fn_8018AFA0(void* a0, s32 a1, s32 a2, s32 a3, void* a4);
extern void __dla__FPv(void* p);
extern void* __nwa__FUl(u32 arg0);
extern void GXSetZMode(u8 enable, u8 func, u8 update);
extern void fn_80015950(s32 a0, s32 a1, s32 a2, u8 a3);
extern s32  __nw__FUl(u32 size);
extern void  fn_8001F928(void* p);
extern Unk_8001F020_Obj* fn_80006A3C(s32);
extern s32 fn_80006A54(s32);
extern s32 fn_8006624C(s32);
extern void* __construct_new_array(void* mem, CtorFnRtl ctor, CtorFnRtl dtor, s32 elemSize, s32 count);
extern void fn_8001DA88(void* elem);
extern void fn_8001E548(s32 a0, s32 a1);
extern void __dl__FPv(void* p);
extern void fn_80021724(void*);



extern Unk_80399BE0 lbl_80399BE0;
extern s32 lbl_80399B60[];
extern u8 lbl_804A0DA8;
extern s8  lbl_804A0D8A;
extern s32 lbl_804A0D8C;
extern s8  lbl_804A0D90;
extern s32 lbl_804A0D78;
extern u16 lbl_804A0D88;
extern u8 lbl_802F4B64[];
extern UnkLbl_803C2138 lbl_803C2138;
extern u8 lbl_802F47A8[];
extern u8 lbl_802F47B4[];
extern s32 lbl_80498BDC;
extern FnPtrVoid lbl_802F47C0[];
extern Unk_80398C00 lbl_80398C00;
extern u8  lbl_803990F8[];
extern u8  lbl_802F45C0[];
extern f32 lbl_804A25F8;
extern f32 lbl_804A25FC;
extern f32 lbl_804A2620;
extern s32 lbl_80498BC0;
extern s32 lbl_80498BC4;
extern u8  lbl_804A0D2D;
extern f32 lbl_804A25E0;
extern s8 lbl_804A0D24;
extern s32 lbl_804A0D28;
extern s32 lbl_804A0C48;
extern s32 lbl_804A0CF0;
extern s32 lbl_804A0D30;
extern Unk_804A0D3C lbl_804A0D3C;
extern s8  lbl_804A0D40;
extern FnPtrVoid lbl_804A0D44;
extern s16 lbl_804A0D48;
extern s32 lbl_804A0D68;
extern u8  lbl_803C2E10[];
extern s32 lbl_804A0C48;
extern u8  lbl_803C2E10[];
extern s32 lbl_804A0C48;
extern s8 lbl_804A0D73;
extern s8 lbl_804A0D74;
extern u8 lbl_802F4A70[];
extern u8 lbl_802F4B4C[];
extern s32 lbl_804A0D7C;
extern Unk_80399710 lbl_80399710;
extern u8 lbl_80399510[];
extern s32 lbl_804A0D80;
extern s32 lbl_804A0D84;
extern u8 lbl_80399910[];
extern u8 lbl_804A0CD0;
extern s8 lbl_804A0D98;
extern s32 lbl_80399B10[];
extern s8 lbl_804A0DA0;
extern s8 lbl_804A0DA1;
extern u32 lbl_804A0DA4;
extern f32 lbl_804A2700;
extern f32 lbl_804A2750;
extern s32 lbl_804A0DB0;
extern f32 lbl_804A27B8;
extern Unk_802F4E18 lbl_802F4E18;
extern f32 lbl_804A0DC0;
extern f32 lbl_804A0DC4;
extern f32 lbl_804A0DC8;
extern f32 lbl_804A0DCC;
extern s8  lbl_804A0DD8;
extern UnkPairF32 lbl_804A0DDC;
extern UnkPairF32 lbl_804A0DE4;
extern f32 lbl_804A0DEC;
extern f32 lbl_804A0DF0;
extern s32 lbl_804A0DFC;
extern Unk_80399C20 lbl_80399C20;
extern s32 lbl_804A0DF8;
extern s32 lbl_804A0DFC;
extern f32 lbl_804A27D0;
extern s32 lbl_804A0DFC;
extern Unk_804A0DB8_Obj* lbl_804A0DB8;
extern s32 lbl_804A0CF8;





void fn_80014278(Unk_80014278* arg0);
void fn_8001431C(Unk_8001431C* arg0);
void fn_80014334(void);
void fn_80014338(void);
void fn_8001433C(void);
void fn_80014340(void);
void fn_80014344(void);
void fn_80014348(void);
void fn_8001434C(void);
void fn_80014350(void);
void fn_80014354(void);
void fn_80014358(void);
void fn_8001435C(void);
void fn_80014360(void);
void fn_800144C8(s32 arg0, s32 arg1);
void fn_80014554(GXTexObj* arg0, void* arg1);
void fn_800145C8(void);
void fn_8001594C(void);
void fn_80015B48(s32 arg0, s32 arg1, u8 arg2, s32 arg3);
void fn_80015EB0(s32 arg0, s32* arg1, f32 farg0);
void fn_800162C8(void);
void fn_80017040(void);
void fn_80017044(void);
void fn_80017048(void);
void fn_8001704C(void);
void fn_80017050(void);
void fn_80017240(void);
void fn_80017510(void);
void fn_80017574(void);
void fn_80017578(void);
void fn_8001757C(void);
s32 fn_80018078(u8* arg0);
void fn_800181C8(void* arg0, void* arg1, s16 arg2);
s32 fn_800189D4(void* arg0);
s32 fn_80018A18(void* arg0);
s32 fn_80018A90(void* arg0, void* arg1, u16* arg2, s8* arg3);
s32 fn_80018094(u8* arg0);
void fn_80018AC8(void* arg0);
void fn_80018AF4(void* arg0);
s32 fn_80018B20(void* arg0);
s32 fn_80018B50(void* arg0);
void fn_80018B94(void* arg0);
void fn_80019A64(void);
void fn_80018BD0(void* arg0);
void fn_80019CAC(s32 arg0);
void fn_8001A8F4(void);
s32 fn_8001AB6C(s16 arg0, s32 arg1, s8 arg2);
s32 fn_8001ABE0(s16 arg0, s32 arg1, s8 arg2);
s32 fn_8001ACEC(s16 arg0, u8* arg1, u8* arg2);
s8 fn_8001AE34(s16 arg0, u8 arg1);
s8 fn_8001AED4(u32 arg0);
s32 fn_8001AF78(u8 arg0, u8* arg1, u8* arg2);
s32 fn_8001AFC0(s32 arg0, UnkOut_8001AFC0* arg1);
void fn_8001B194(void);
void fn_8001B1E0(void);
s32 fn_8001B1F8(u8 arg0);
void fn_8001C654(void);
u8 fn_8001CA24(void** arg0);
u8 fn_8001CA54(void** arg0, u8 arg1);
s32 fn_8001CA78(u8 arg0, s32 arg1);
u8 fn_8001CAD8(u8 arg0);
void fn_8001CB80(void);
void fn_8001CB90(void);
void fn_8001CB9C(u32 arg0);
void* fn_8001CBC0(void* arg0);
void fn_8001CC04(void* arg0);
void fn_8001CF08(s32 unused, s32 arg1);
s32 fn_80006A44(s32);
void fn_8001D050(s32, s32, void*);
void fn_8001D4F0(void* arg0, s16 arg1);
void fn_8001D588(void* arg0, s16 arg1);
void fn_8001D7A8(void* arg0, s16 arg1, void* arg2);
void fn_8001D824(void* arg0, void* arg1);
void fn_8001DA1C(void* arg0, void* arg1);
void fn_8001DA78(void* arg0);
void fn_8001E3F8(void* arg0);
void fn_8001E4B8(void* arg0);
void fn_8001E564(void* arg0, s32 arg1, s32 arg2);
void fn_8001E594(void* arg0);
void fn_8001ECF4(Unk_8001ECF4* arg0);
void fn_8001ED94(void* arg0, u8 arg1);
void fn_8001EE28(void* arg0, s32 arg1);
s32 fn_8001EF50(s32 arg0, s32 arg1);
s32 fn_8001EFB8(s32 arg0, s32 arg1);
void fn_8001F020(void* unused_r3, s32 arg1);
void fn_8001F390(Unk_8001F390_Obj* arg0, s32 arg1, Unk_8001F390_Method arg2);
void fn_8001F3E8(void* arg0, s32 arg1, Unk_8001F3E8_Method arg2);
void fn_8001F440(void* arg0, s16 arg1);
void fn_8001F62C(void* arg0, s16 arg1);
void fn_8001F928(void* arg0);
void fn_8001F970(void);
void fn_8001F97C(s32 arg0, s32 arg1, s32 arg2);
void fn_8001FAD8(void* arg0, s32 arg1, FnVoid0 arg2);
void fn_8001FC60(void* arg0, s8 arg1);
void fn_80020030(void* arg0, f32 farg0);
void fn_800202A8(s32 arg0);
void fn_80020538(void);
void fn_8002057C(void);
void fn_800205D8(s32 arg0);
void fn_8002063C(void);
void fn_8002162C(void);
void fn_80021714(void);
void fn_800219FC(void);
void fn_80021A38(void);
void fn_80021EB0(void);






#endif
