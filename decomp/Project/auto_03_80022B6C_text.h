#ifndef AUTO_03_80014278_TEXT_H
#define AUTO_03_80014278_TEXT_H

#include "lib/types.h"

#define LBL_80399BE0_HANDLE (lbl_80399BE0[0])

typedef void (*FnVoid)(void);
typedef void (*CtorFnRtl)(void* self);
typedef void (*CtorVoid)(void* self);
typedef void* (*DtorFn)(void* obj, s16 doFree);
typedef struct Unk_80498C68 { u8 _; } Unk_80498C68;
typedef struct Unk_802F54B8 Unk_802F54B8;
typedef struct Unk_803C236C Unk_803C236C;


typedef struct Unk_804A0DB8 {
    u8  pad0[0xAC];                 /* 0x00..0xAB */
    f32 unkAC;                      /* +0xAC */
    u8  padB0[0xB4 - 0xB0];         /* 0xB0..0xB3 */
    f32 unkB4;                      /* +0xB4 */
    u8  padB8[0xE0 - 0xB8];         /* 0xB8..0xDF */
    s32 unkE0;                      /* +0xE0 */
    f32 unkE4;                      /* +0xE4 */
} Unk_804A0DB8;

typedef struct Unk_80399C20 {
    u8  pad0[0x18];
    f32 unk18; /* +0x18 */
    f32 unk1C; /* +0x1C */
    f32 unk20; /* +0x20 */
} Unk_80399C20;

typedef struct Unk_Arg0_3F32 {
    f32 unk0;
    f32 unk4;
    f32 unk8;
} Unk_Arg0_3F32;

typedef struct Unk_804A0E30 {
    u8  pad0[0x12A4];
    f32 unk12A4;   /* +0x12A4 */
    f32 unk12A8;   /* +0x12A8 */
    f32 unk12AC;   /* +0x12AC */
    u8  pad12B0[0x12BC - 0x12B0];
    s32 unk12BC;   /* +0x12BC */
    s32 unk12C0;   /* +0x12C0 */
    s32 unk12C4;   /* +0x12C4 */
} Unk_804A0E30;

typedef struct Unk_Entry_0x24C {
    u8  pad0[0x3C];
    u32 unk3C;                 /* +0x3C */
    u8  pad40[0x208 - 0x40];
    u8  unk208;                /* +0x208 */
    u8  pad209[0x24C - 0x209];
} Unk_Entry_0x24C;

typedef struct Unk_80026310_Arg0 {
    u8  pad0[0x38];
    u8  unk38; /* +0x38 */
    u8  pad39[0x68 - 0x39];
    f32 unk68; /* +0x68 */
    u8  pad6C[0x70 - 0x6C];
    s32 unk70; /* +0x70 */
} Unk_80026310_Arg0;

typedef struct Unk_EntryBase {
    u8  pad0[0x6C];
    s32 unk6C; /* +0x6C */
} Unk_EntryBase;

typedef struct Unk_800266FC_Obj {
    u8  pad0[0x44];
    f32 unk44;  /* +0x44 */
    f32 unk48;  /* +0x48 */
    f32 unk4C;  /* +0x4C */
    u8  pad50[0x5C - 0x50];
    u32 unk5C;  /* +0x5C */
    u32 unk60;  /* +0x60 */
    u32 unk64;  /* +0x64 */
    u8  pad68[0x70 - 0x68];
    u32 unk70;  /* +0x70 */
} Unk_800266FC_Obj;

typedef struct Unk_804A0E50 {
    u8  pad0[0x79C];
    s32 unk79C;   /* +0x79C */
} Unk_804A0E50;

typedef struct Unk_80028EDC_Arg0 {
    f32 unk0; /* +0x00 */
    f32 unk4; /* +0x04 */
    f32 unk8; /* +0x08 */
} Unk_80028EDC_Arg0;

typedef struct Unk_lbl_803C1C88 {
    f32 unk0; /* +0x00 */
    f32 unk4; /* +0x04 */
    f32 unk8; /* +0x08 */
} Unk_lbl_803C1C88;

typedef struct Unk_lbl_804A0E5C {
    u8  pad0[0x74];
    s32 unk74; /* +0x74 */
    u8  pad78[0x7C - 0x78];
    s32 unk7C; /* +0x7C */
    u8  pad80[0x94 - 0x80];
    s32 unk94; /* +0x94 */
} Unk_lbl_804A0E5C;

typedef struct Unk_80028F18_Arg0 {
    f32 unk0; /* +0x00 */
    f32 unk4; /* +0x04 */
    f32 unk8; /* +0x08 */
} Unk_80028F18_Arg0;

typedef struct Unk_80028F48_Arg0 {
    u8  pad0[0x3C];
    s32 unk3C; /* +0x3C */
} Unk_80028F48_Arg0;

typedef struct Unk_lbl_804A0E80 {
    u8 pad0[0x02];
    u8 unk2;       /* +0x02 */
} Unk_lbl_804A0E80;

typedef struct Unk_lbl_803C1C98 {
    u8  pad0[0x418];   /* 0x000–0x417 */
    f32 unk418;        /* 0x418 */
    f32 unk41C;        /* 0x41C */
    f32 unk420;        /* 0x420 */
    u8  pad424[0x430 - 0x424];
} Unk_lbl_803C1C98;

typedef struct Unk_8002B138_Arg0 {
    s32 unk0;               /* +0x00 */
    u8  pad04[0x2C - 0x04];
    s32 unk2C;              /* +0x2C */
} Unk_8002B138_Arg0;

typedef struct Unk_804A0EF0 {
    u8  pad0[0x2C];          /* 0x00..0x2B */
    s32 unk2C;               /* 0x2C */
    u8  pad30[0x38 - 0x30];  /* 0x30..0x37 */
    s16 unk38;               /* 0x38 */
    u8  pad3A[0x3C - 0x3A];  /* 0x3A..0x3B */
    s32 unk3C;               /* 0x3C */
    u8  pad40[0x54 - 0x40];  /* 0x40..0x53 */
    s32 unk54;               /* 0x54 */
} Unk_804A0EF0;

typedef struct Unk_8002C5CC_Arg0 {
    u8  pad0[0x40];
    u32 unk40; /* +0x40 */
} Unk_8002C5CC_Arg0;

typedef struct Unk_804A1240 {
    u8   pad0[0x24];
    void* unk24;   /* +0x24 */
} Unk_804A1240;

typedef struct Unk_800E7E7C_Ret {
    u8  pad0[0x40];
    u32 unk40; /* +0x40 */
} Unk_800E7E7C_Ret;








extern void fn_8002E8D0(void* arg0, s32 arg1, void* arg2);
extern void __dla__FPv(void* p);
extern void fn_8001FC60(void* arg0, s8 arg1);
extern void fn_80023D88(s32, void*, f32);
extern void fn_8001FB18(s32 a0, s32 a1, FnVoid a2, FnVoid a3);
extern void fn_8002BB94(void* a0);
extern s32  fn_8002BBC4(void);
extern s32  fn_800F1CBC(s32 a0, s32 a1);
extern void fn_80023FBC(void);
extern void fn_80024010(void);
extern void fn_8001FBC0(s32 a0, s32 a1);
extern void fn_80022238(void* arg0, s32 arg1, f32 arg2);
extern void fn_80025A20(void);
extern void fn_8018AFA0(void* a0, s32 a1, s32 a2, s32 a3, void* a4);
extern void* fn_8001E448(void* self);
extern void* __nwa__FUl(u32 size);
extern void* __construct_new_array(void* mem, CtorFnRtl ctor, CtorFnRtl dtor, s32 elemSize, s32 count);
extern void fn_80026108(void);
extern void __dl__FPv(void* p);
extern void fn_8001E4E8(void* p, s16 arg1);
extern void fn_80015838(void* arg0, s32* arg1);
extern void fn_8001ED94(void* arg0, u8 arg1);
extern void fn_80029C30(void);
extern void  __destroy_new_array(void* mem, DtorFn dtor);
extern void  fn_8001F1F8(void* self, s32 arg1);
extern void* fn_800291EC(void* obj, s16 doFree);
extern s32* fn_80006A3C(s32);
extern void fn_80120294(void);
extern void fn_8012032C(void);
extern void fn_80120CB0(void);
extern s32 fn_8001CA78(u8 arg0, s32 arg1);
extern s32 fn_8002BB5C(void);
extern void* __nw__FUl(u32 size);
extern void  fn_8005F57C(void*);
extern void  fn_8005F868(void);
extern void fn_80028528(void*);
extern void fn_80058A8C(void* a0, void* a1);
extern void fn_8005F5D0(Unk_804A1240* self, s32 arg1);
extern void fn_8005F8B0(void);
extern void fn_8003726C(void);
extern void fn_80037404(void);
extern s32 fn_801202E0(void);
extern void fn_80120CDC(void);
extern void fn_800E7F08(void*);
extern void* fn_80096CAC(void);
extern void fn_800C0A28(void* arg0, int arg1);
extern void fn_8003738C(void);
extern void fn_800E7F08(void*);
extern void* fn_80096CAC(void);
extern void fn_8002418C(void);
extern void fn_80043824(void);
extern void fn_80065120(void);
extern void fn_80065398(s32);
extern u32 fn_800660F0(void);
extern void* fn_800E7E7C(s32);
extern void fn_800F2458(void);
extern void fn_8005F8E0(void);
extern void fn_8005FEE8(void);
extern void fn_8002DA8C(Unk_803C236C*);


extern Unk_803C236C lbl_803C236C;
extern Unk_802F54B8 lbl_802F54B8;
extern Unk_804A1240* lbl_804A1240;
extern Unk_804A0EF0* lbl_804A0EF0;
extern Unk_lbl_803C1C98 lbl_803C1C98;
extern Unk_lbl_804A0E80* lbl_804A0E80;
extern f32 lbl_804A2A4C;
extern s32 lbl_804A0E34;
extern s32 lbl_80399BE0[];
extern u8 lbl_802F4F88[];
extern u8 lbl_80399C2C[];
extern Unk_804A0DB8* lbl_804A0DB8;
extern u8  lbl_80498BD0;
extern s8  lbl_804A0D2F;
extern s32 lbl_804A0E18;
extern f32 lbl_804A27D0;
extern u8  lbl_80399C38[];
extern s32 lbl_804A0E1C;
extern Unk_80399C20 lbl_80399C20;
extern f32 lbl_80498C1C;
extern f32 lbl_804A2848;
extern s32 lbl_804A0E20;
extern s32 lbl_804A0E24;
extern s32 lbl_804A0E28;
extern Unk_804A0E30* lbl_804A0E30;
extern f32 lbl_804A2980;
extern f32 lbl_804A2A04;
extern f32 lbl_804A2A08;
extern f32 lbl_804A29FC;
extern f64 lbl_804A2A10;
extern f64 lbl_804A2A18;
extern u8 lbl_804A0E39;
extern u8 lbl_804A0E38;
extern f32 lbl_804A2A34;
extern s32 lbl_804A0E48;
extern s32 lbl_804A0E4C;
extern Unk_804A0E50* lbl_804A0E50;
extern Unk_lbl_803C1C88   lbl_803C1C88;
extern Unk_lbl_804A0E5C*  lbl_804A0E5C;
extern u16 lbl_804A0E58;
extern u16 lbl_804A0E5A;
extern u8   lbl_80398780[];
extern s32  lbl_80498C60;
extern s32* lbl_804A0E84;
extern s32  lbl_804A0EA0;
extern void* lbl_804A0EA4;
extern s32 lbl_804A1290;
extern s32 lbl_804A1294;
extern Unk_80498C68 lbl_80498C68;
extern s32 lbl_804A0C08;
extern Unk_804A1240* lbl_804A1244;









void fn_8002C92C(void);
void fn_8002C70C(void);
void fn_8002CE84(void);
void fn_8002CE28(void);
void fn_8002CD58(void);
void fn_8002CEF4(void);
void fn_8002CD7C(void);
void fn_80026204(void);
void fn_800241F4(void);
void fn_80022B6C(void);
void fn_80022D3C(void);
void fn_80023FBC(void);
void fn_80024094(s32 arg0);
void fn_8002410C(s32 arg0);
void fn_8002418C(void);
s32 fn_800241EC(void);
void fn_80024240(void);
void fn_80024270(void);
void fn_80024394(void* arg0, s32 arg1);
void fn_80024094(s32 arg0);
void fn_80024424(void* arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_800242A0(void);
void fn_80024494(void);
void fn_800251B0(s8 arg0);
s32 fn_80025204(void);
f32 fn_800255F0(f32 farg0);
u8 fn_80025804(void);
void fn_80025BE8(void);
void fn_80025CDC(void);
void fn_80026310(void* arg0, u8 arg1);
void fn_80026690(void);
void* fn_800266FC(void* arg0);
void fn_800284F4(s8 arg0);
void fn_80028EDC(void* arg0, u16 arg1, u16 arg2);
void fn_80028F18(void* arg0, u16* arg1, u16* arg2);
void fn_80028F48(void* arg0);
void* fn_800291EC(void* arg0, s16 arg1);
s32 fn_80029250(s32 arg0);
s32 fn_8002981C(void);
void fn_80029D90(void);
void fn_80029E08(void);
void fn_8002A09C(f32 farg0, f32 farg1, f32 farg2);
s32 fn_8002B0F8(s32 arg0, s32 arg1);
void fn_8002B138(void* arg0);
void fn_8002B2B8(s32 unused, s32 arg1);
void fn_8002BB58(void);
s32 fn_8002BB5C(void);
void fn_8002BB68(void);
s16 fn_8002BB7C(void);
s32 fn_8002BB88(void);
s32 fn_8002BBC4(void);
s32 fn_8002C5C4(void);
s32 fn_8002C5CC(void* arg0);
s32 fn_8002C704(void);
void fn_8002C768(void);
void fn_8002C788(void);
void fn_8002C7A8(void);
void fn_8002C7AC(void);
void fn_8002C7B0(void);
void fn_8002C7D0(void);
void fn_8002C7D4(void);
void fn_8002C7F8(void);
void fn_8002C81C(void);
void fn_8002C83C(void);
void fn_8002C840(void);
void fn_8002C860(void);
void fn_8002C864(void);
void fn_8002C868(void);
void fn_8002C86C(void);
void fn_8002C870(void);
void fn_8002C8BC(void);
void fn_8002C8F8(void);
void fn_8002CAE0(void);
void fn_8002CAE4(void);
void fn_8002CAE8(void);
void fn_8002CAEC(void);
void fn_8002CAF0(void);
void fn_8002CAF4(void);
void fn_8002CAF8(void);
void fn_8002CAFC(void);
void fn_8002CB00(void);
void fn_8002CB04(void);
void fn_8002CB08(void);
void fn_8002CB0C(void);
void fn_8002CB10(void);
void fn_8002CB14(void);
void fn_8002CB18(void);
void fn_8002CB1C(void);
void fn_8002CB20(void);
void fn_8002CB24(void);
void fn_8002CB28(void);
void fn_8002CB2C(void);
void fn_8002CB30(void);
void fn_8002CB34(void);
void fn_8002CB38(void);
void fn_8002CB3C(void);
void fn_8002CB40(void);
void fn_8002CB44(void);
void fn_8002CB48(void);
void fn_8002CB4C(void);
void fn_8002CB50(void);
void fn_8002CB54(void);
void fn_8002CB58(void);
void fn_8002CB5C(void);
void fn_8002CB60(void);
void fn_8002CB64(void);
void fn_8002CB68(void);
void fn_8002CB6C(void);
void fn_8002CB70(void);
void fn_8002CB74(void);
void fn_8002CB78(void);
void fn_8002CB7C(void);
void fn_8002CB80(void);
void fn_8002CB84(void);
void fn_8002CB88(void);
void fn_8002CB8C(void);
void fn_8002CB90(void);
void fn_8002CB94(void);
void fn_8002CB98(void);
void fn_8002CB9C(void);
void fn_8002CBA0(void);
void fn_8002CBA4(void);
void fn_8002CBA8(void);
void fn_8002CBAC(void);
void fn_8002CBB0(void);
void fn_8002CBB4(void);
void fn_8002CBD8(void);
void fn_8002CBDC(void);
void fn_8002CBE0(void);
void fn_8002CBE4(void);
void fn_8002CBE8(void);
void fn_8002CBEC(void);
void fn_8002CBF0(void);
void fn_8002CBF4(void);
void fn_8002CBF8(void);
void fn_8002CBFC(void);
void fn_8002CC00(void);
void fn_8002CC04(void);
void fn_8002CC08(void);
void fn_8002CC0C(void);
void fn_8002CC10(void);
void fn_8002CC14(void);
void fn_8002CC18(void);
void fn_8002CC1C(void);
void fn_8002CC20(void);
void fn_8002CC24(void);
void fn_8002CC28(void);
void fn_8002CC2C(void);
void fn_8002CC30(void);
void fn_8002CC34(void);
void fn_8002CC38(void);
void fn_8002CC3C(void);
void fn_8002CC40(void);
void fn_8002CC44(void);
void fn_8002CC48(void);
void fn_8002CC4C(void);
void fn_8002CC70(void);
void fn_8002CC74(void);
void fn_8002CC78(void);
void fn_8002CC7C(void);
void fn_8002CC80(void);
void fn_8002CC84(void);
void fn_8002CC88(void);
void fn_8002CC8C(void);
void fn_8002CC90(void);
void fn_8002CC94(void);
void fn_8002CC98(void);
void fn_8002CC9C(void);
void fn_8002CCA0(void);
void fn_8002CCA4(void);
void fn_8002CCA8(void);
void fn_8002CCAC(void);
void fn_8002CCB0(void);
void fn_8002CCB4(void);
void fn_8002CCB8(void);
void fn_8002CCBC(void);
void fn_8002CCC0(void);
void fn_8002CCC4(void);
void fn_8002CCC8(void);
void fn_8002CCCC(void);
void fn_8002CCD0(void);
void fn_8002CCD4(void);
void fn_8002CCD8(void);
void fn_8002CCDC(void);
void fn_8002CCE0(void);
void fn_8002CCE4(void);
void fn_8002CCE8(void);
void fn_8002CCEC(void);
void fn_8002CCF0(void);
void fn_8002CCF4(void);
void fn_8002CCF8(void);
void fn_8002CCFC(void);
void fn_8002CD00(void);
void fn_8002CD04(void);
void fn_8002CD08(void);
void fn_8002CD0C(void);
void fn_8002CD10(void);
void fn_8002CD14(void);
void fn_8002CD18(void);
void fn_8002CD1C(void);
void fn_8002CD20(void);
void fn_8002CD24(void);
void fn_8002CD28(void);
void fn_8002CD2C(void);
void fn_8002CD30(void);
void fn_8002CD9C(void);
void fn_8002CDA0(void);
void fn_8002CDA4(void);
void fn_8002CDA8(void);
void fn_8002CDAC(void);
void fn_8002CDB0(void);
void fn_8002CDB4(void);
void fn_8002CDB8(void);
void fn_8002CDBC(void);
void fn_8002CDC0(void);
void fn_8002CDC4(void);
void fn_8002CDC8(void);
void fn_8002CDCC(void);
void fn_8002CDD0(void);
void fn_8002CDD4(void);
void fn_8002CDD8(void);
void fn_8002CDDC(void);
void fn_8002CDE0(void);
void fn_8002CDE4(void);
void fn_8002CDE8(void);
void fn_8002CDEC(void);
void fn_8002CDF0(void);
void fn_8002CDF4(void);
void fn_8002CDF8(void);
void fn_8002CDFC(void);
void fn_8002CE00(void);
void fn_8002CE04(void);
void fn_8002CE08(void);
void fn_8002CE0C(void);
void fn_8002CE10(void);
void fn_8002CE14(void);
void fn_8002CE18(void);
void fn_8002CE1C(void);
void fn_8002CE20(void);
void fn_8002CE24(void);
void fn_8002CE58(void);
void fn_8002CE5C(void);
void fn_8002CE60(void);
void fn_8002CE64(void);
void fn_8002CE68(void);
void fn_8002CE6C(void);
void fn_8002CE70(void);
void fn_8002CE74(void);
void fn_8002CE78(void);
void fn_8002CE7C(void);
void fn_8002CE80(void);
void fn_8002CEA4(void);
void fn_8002CEA8(void);
void fn_8002CEAC(void);
void fn_8002CEB0(void);
void fn_8002CEB4(void);
void fn_8002CEB8(void);
void fn_8002CEBC(void);
void fn_8002CEC0(void);
void fn_8002CEC4(void);
void fn_8002CEC8(void);
void fn_8002CECC(void);
void fn_8002CED0(void);
void fn_8002CED4(void);
void fn_8002CED8(void);
void fn_8002CEDC(void);
void fn_8002CEE0(void);
void fn_8002CEE4(void);
void fn_8002CEE8(void);
void fn_8002CEEC(void);
void fn_8002CEF0(void);
void fn_8002CF28(void);
void fn_8002CF2C(void);
void fn_8002CF30(void);
void fn_8002CF34(void);
void fn_8002CF38(void);
void fn_8002CF3C(void);
void fn_8002CF40(void);
void fn_8002CF44(void);
void fn_8002CF48(void);
void fn_8002CF4C(void);
void fn_8002CF50(void);
void fn_8002CF54(void);
void fn_8002CF58(void);
void fn_8002CF5C(void);
void fn_8002CF60(void);
void fn_8002CF64(void);
void fn_8002CF68(void);
void fn_8002CF6C(void);
void fn_8002CF70(void);
void fn_8002CF74(void);
void fn_8002CF78(void);
void fn_8002CF7C(void);
void fn_8002CF80(void);
void fn_8002CF84(void);
void fn_8002CF88(void);
void fn_8002CF8C(void);
void fn_8002CF90(void);
void fn_8002CF94(void);
void fn_8002CF98(void);
void fn_8002CF9C(void);
void fn_8002CFA0(void);
void fn_8002CFA4(void);
void fn_8002CFA8(void);
void fn_8002CFAC(void);
void fn_8002CFB0(void);
void fn_8002CFB4(void);
void fn_8002CFB8(void);
void fn_8002CFBC(void);
void fn_8002CFC0(void);
void fn_8002CFC4(void);
void fn_8002CFC8(void);
void fn_8002CFCC(void);
void fn_8002CFD0(void);
void fn_8002CFD4(void);
void fn_8002CFD8(void);
void fn_8002CFDC(void);
void fn_8002CFE0(void);
void fn_8002CFE4(void);
void fn_8002CFE8(void);
void fn_8002CFEC(void);
void fn_8002CFF0(void);
void fn_8002CFF4(void);
void fn_8002CFF8(void);
void fn_8002CFFC(void);
void fn_8002D000(void);
void fn_8002D004(void);
void fn_8002D008(void);
void fn_8002D00C(void);
void fn_8002D010(void);
void fn_8002D014(void);
void fn_8002D018(void);
void fn_8002D01C(void);
void fn_8002D020(void);
void fn_8002D024(void);
void fn_8002D028(void);
void fn_8002D02C(void);
void fn_8002D030(void);
void fn_8002D034(void);
void fn_8002D038(void);
void fn_8002D03C(void);
void fn_8002D040(void);
void fn_8002D044(void);
void fn_8002D048(void);
void fn_8002D04C(void);
void fn_8002D050(void);
void fn_8002D054(void);
void fn_8002D058(void);
void fn_8002D05C(void);
void fn_8002D060(void);
void fn_8002D064(void);
void fn_8002D068(void);
void fn_8002D06C(void);
void fn_8002D070(void);
void fn_8002D074(void);
void fn_8002D078(void);
void fn_8002D07C(void);
void fn_8002D080(void);
void fn_8002D084(void);
void fn_8002D088(void);
void fn_8002D08C(void);
void fn_8002D090(void);
void fn_8002D094(void);
void fn_8002D098(void);
void fn_8002D09C(void);
void fn_8002D0A0(void);
void fn_8002D0A4(void);
void fn_8002D0A8(void);
void fn_8002D0AC(void);
void fn_8002D0B0(void);
void fn_8002CBB8(void);
void fn_8002CC50(void);
void fn_8002CD34(void);
void fn_8002CA94(void);









#endif
