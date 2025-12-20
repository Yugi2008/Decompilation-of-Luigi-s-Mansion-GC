#ifndef AUTO_03_8000C650_TEXT_H
#define AUTO_03_8000C650_TEXT_H

#include "lib/types.h"

typedef struct JKRHeap JKRHeap;
typedef struct JKRMemArchive JKRMemArchive;
typedef s32 JKRMemBreakFlag;
typedef struct StaticData StaticData;


typedef struct UnkArg_8000E338 {
    u8    pad0[0x64];
    void* unk64; /* +0x64 */
} UnkArg_8000E338;

typedef struct UnkObj_804A0BF8 {
    u8  pad[0x18];
    u32 unk18; /* +0x18 */
} UnkObj_804A0BF8;

typedef struct Obj_80398AA0 {
    void* unk0;            /* +0x00 */
    u8    pad04[0x1C-0x04];

    void* unk1C;           /* +0x1C */
    u8    pad20[0x38-0x20];

    void* unk38;           /* +0x38 */
    u8    pad3C[0x54-0x3C];

    void* unk54;           /* +0x54 */
    u8    pad58[0x70-0x58];

    void* unk70;           /* +0x70 */
    u8    pad74[0x8C-0x74];

    void* unk8C;           /* +0x8C */
    u8    pad90[0xA8-0x90];

    void* unkA8;           /* +0xA8 */
} Obj_80398AA0;

typedef struct UnkObj_8000F960 {
    f32 unk0;  /* +0x00 */
    f32 unk4;  /* +0x04 */
    f32 unk8;  /* +0x08 */
} UnkObj_8000F960;

typedef struct UnkObj_8000FAFC {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
    f32 unk14;
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    f32 unk24;
    f32 unk28;
    f32 unk2C;
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
} UnkObj_8000FAFC;

typedef struct UnkMat_800100CC {
    f32 unk0;   /* 0x00 */
    f32 unk4;   /* 0x04 */
    f32 unk8;   /* 0x08 */
    f32 unkC;   /* 0x0C */

    f32 unk10;  /* 0x10 */
    f32 unk14;  /* 0x14 */
    f32 unk18;  /* 0x18 */
    f32 unk1C;  /* 0x1C */

    f32 unk20;  /* 0x20 */
    f32 unk24;  /* 0x24 */
    f32 unk28;  /* 0x28 */
    f32 unk2C;  /* 0x2C */
} UnkMat_800100CC;

typedef struct UnkVec3_800100CC {
    f32 unk0;   /* x */
    f32 unk4;   /* y */
    f32 unk8;   /* z */
} UnkVec3_800100CC;

typedef struct UnkOut3_800100CC {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} UnkOut3_800100CC;

typedef struct UnkMat_80010178 {
    f32 unk0;   /* 0x00 */
    f32 unk4;   /* 0x04 */
    f32 unk8;   /* 0x08 */
    f32 unkC;   /* 0x0C */

    f32 unk10;  /* 0x10 */
    f32 unk14;  /* 0x14 */
    f32 unk18;  /* 0x18 */
    f32 unk1C;  /* 0x1C */

    f32 unk20;  /* 0x20 */
    f32 unk24;  /* 0x24 */
    f32 unk28;  /* 0x28 */
    f32 unk2C;  /* 0x2C */
} UnkMat_80010178;

typedef struct UnkVec3_80010178 {
    f32 unk0;   /* x */
    f32 unk4;   /* y */
    f32 unk8;   /* z */
} UnkVec3_80010178;

typedef struct UnkOut3_80010178 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} UnkOut3_80010178;

typedef struct {
    u8   pad0[0x08];
    s32* unk8;
} Unk804A0D00;



extern void fn_800263D0(s32 a0, s32 a1, void (*cb0)(void), void (*cb1)(void), s32 a4, s32 a5, s32 a6, f32 f0, f32 f1, f32 f2);
extern void* __ct__13JKRMemArchiveFPvUl15JKRMemBreakFlag(JKRMemArchive* this_, void* buffer, u32 size, JKRMemBreakFlag flag);
extern JKRMemArchive* __nw__FUl(u32 size);
extern void* alloc__7JKRHeapFUliP7JKRHeap( JKRHeap* this_, u32 size, s32 align );
extern JKRHeap* fn_80007098(void* arg0);
extern void fn_800070A8(void* arg0, void* arg1);
extern void fn_80066328(JKRMemArchive* arg0);
extern void fn_8011325C(void);
extern s32  fn_801132CC(void);
extern void fn_801872F0(s32 arg0);
extern void fn_8005CE40(void);
extern u8   fn_80065320(s32 arg0);
extern void fn_80113094(s32 arg0);
extern void fn_801138C0(void);
extern void fn_801870EC(u32 arg0);
extern u8   fn_80187190(void);
extern void fn_801853A4(void);
extern void fn_801853A8(void);
extern void fn_80054750(void);
extern void fn_801868B8(s32 arg0, void* arg1);
extern void fn_800546AC();
extern void fn_8005D300();
extern void fn_8005452C(s32 arg0);
extern void fn_80070F84(void);
extern void fn_80188318(s32 arg0);
extern void fn_80038F94(void);
extern void fn_801886F0(s32 arg0);
extern void fn_80007D38(s32 arg0);
extern void fn_80038EF0(void);
extern s32 fn_80054688();
extern s32  fn_80050C48(void);
extern void fn_80050D10(void);
extern void fn_80113474(void);
extern void fn_80113838(void);
extern void fn_80186E48(s32 arg0);
extern void fn_8000F418(void);
extern u8 fn_80006A5C();
extern s32* fn_80006A3C(s32);
extern s32  fn_80006A44(s32);
extern void fn_8000604C(void* arg0);
extern void fn_80056E08(void);
extern void fn_80005C00(void);
extern void fn_800060CC(s32 arg0);
extern void fn_8003A9A8(s32 arg0);
extern void fn_80061B4C(s32 arg0);
extern void fn_80007E68(void);
extern void fn_8003AA44(void);
extern void fn_8003AA68(void);
extern u32 fn_80009510();
extern void fn_800123DC(void);
extern void fn_80012450(void);
extern void fn_8001A354(void);
extern void fn_8001F970(void);
extern void fn_80026690(void);
extern void fn_8002E62C(void);
extern void fn_8002F508(void);
extern void fn_800286E0(void);
extern void fn_80028C70(void);
extern void fn_80028F48(void);
extern void fn_80028F58(void);
extern void fn_80012674(void);
extern void fn_8001A8F4(void);
extern void fn_80020110(void);
extern void fn_80020040();
extern void  fn_80011174(void);
extern void  fn_80016378(void);
extern void  fn_80017578(void);
extern void GXSetCopyClear(const void* clearColor, u32 clearZ);
extern void GXSetZMode(u8 enable, u8 func, u8 updateEnable);
extern void fn_800258B8(void);
extern void fn_80014074(void);
extern void fn_80015838(void* p, s32* out_or_inout);
extern void fn_8001594C(void);
extern void fn_8001C558(void);
extern void fn_800269A0(void);
extern void fn_8005CE78(void);
extern void fn_800141AC(void);
extern void fn_8001C654(void);
extern void fn_8001F9C0(void);
extern void fn_80020538(void);
extern void fn_80025C5C(void);
extern void fn_80026A80(void);
extern void fn_80028610(void);
extern void fn_8002E8CC(void);
extern void fn_8002F9A4(void);
extern void fn_8001275C(void);



extern u8  lbl_80398780[];
extern s32 lbl_804A0D3C;
extern s8  lbl_804A0CD1;
extern s32 lbl_804A25B4;
extern s32 lbl_804A0FB0;
extern s32 lbl_804A0C58;
extern s32 lbl_804A0C08;
extern s32 lbl_804A0C44;
extern u32 lbl_80398770[4];
extern s32 lbl_804A0C08;
extern s32 lbl_804A0C68;
extern s32 lbl_804A0C6C;
extern s32 lbl_804A0B88;
extern UnkObj_804A0BF8* lbl_804A0BF8;
extern s32 lbl_804A0C70;
extern u8  lbl_804A0C74;
extern s32 lbl_804A0C78;
extern u8  lbl_804A0C7C;
extern s32 lbl_80498B28;
extern s32 lbl_80498B2C;
extern s32 lbl_804A0C48;
extern s32 lbl_804A1880;
extern s32 lbl_804A0C80;
extern Obj_80398AA0 lbl_80398AA0;
extern StaticData static_data;
extern s32 lbl_804A0BD8;
extern s32 lbl_804A0CB0;
extern s32 lbl_804A0CB4;
extern s32 lbl_804A0CB8;
extern s32 lbl_804A0CBC;
extern s32 lbl_804A0CC0;
extern f32 lbl_804A2548;
extern f32 lbl_804A2558;
extern f32 lbl_804A2570;
extern f32 lbl_804A25A0;
extern f32 lbl_804A25A4;
extern s32 lbl_80498B70;
extern s16 lbl_80498B88;
extern s16 lbl_80498B8A;
extern s16 lbl_804A0CDA;
extern s16 lbl_804A0CDC;
extern Unk804A0D00* lbl_804A0D00;




void fn_8000C700(void);
void fn_8000C72C(void);
void fn_8000C760(void);
s32 fn_8000C7A4(void);
void fn_8000CAE4(void);
void fn_8000CB2C(void);
void fn_8000CBA8(void);
void fn_8000CBD8(void);
void fn_8000CC2C(void);
void fn_8000CCAC(void);
void fn_8000CD24(void);
void fn_8000CE38(void);
s32 fn_8000CDBC(void);
void fn_8000CE64(void);
void fn_8000CE94(void);
s32 fn_8000F564(void);
s32 fn_8000CEB4(void);
void fn_8000F818(void);
void fn_8000CEE8(void);
void fn_8000CF08(void);
void fn_8000CF30(s32 unused, s32 arg1);
s32 fn_8000D090(void);
void fn_8000E2D0(void);
void fn_8000E338(void* unused, UnkArg_8000E338* arg1);
StaticData* fn_8000EB58(void);
void fn_8000EB64(void);
void fn_8000EB84(void);
void fn_8000ED38(void);
void fn_8000ED5C(void);
void fn_8000F0BC(void);
void fn_8000F8F8(f32* arg0, f32 farg0);
void fn_8000F90C(f32* arg0, f32 farg0);
s32 fn_8000F960(UnkObj_8000F960* arg0);
void fn_8000FAFC(UnkObj_8000FAFC* arg0, UnkObj_8000FAFC* arg1);
f32 fn_8000F920(void);
void fn_800100CC(const UnkMat_800100CC* arg0, const UnkVec3_800100CC* arg1, UnkOut3_800100CC* arg2);
void fn_80010178(const UnkMat_80010178* arg0, const UnkVec3_80010178* arg1, UnkOut3_80010178* arg2);
s32 fn_80010414(s32* arg0, s32 arg1, s32 arg2);
s32 fn_80010468(s32 arg0, s32 arg1, s32 arg2);
void fn_80010A94(void);
void fn_80010ACC(void);
void fn_80010B5C(void);
s32 fn_80010B7C(s16 arg0, s16 arg1);
void fn_80011274(s32 arg0);
void fn_80011410(void);
void fn_800115E4(void);
void fn_80011630(void);
void fn_80014128(void);
void fn_80011650(void);
void fn_80012674(void);
s32 fn_80012694(u8 arg0);





#endif
