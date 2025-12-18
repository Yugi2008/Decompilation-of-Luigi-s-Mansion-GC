#ifndef AUTO_03_80009418_TEXT_H
#define AUTO_03_80009418_TEXT_H

#include "lib/types.h"

/* types */

typedef struct {
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
} MyStructFlt;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    s32 unk28;
    s32 unk2C;
} MyStructInt;

typedef struct UnkObj_8000ADB0 {
    s32 unk0;   /* +0x00 */
    s32 unk4;   /* +0x04 */
    s32 unk8;   /* +0x08 */
    s32 unkC;   /* +0x0C */
    s32 unk10;  /* +0x10 */
    s32 unk14;  /* +0x14 */
} UnkObj_8000ADB0;


/* externs */
extern s32 fn_801D2CD4(s32, s32, s32, s32);
extern void fn_8000604C(s32);
extern s32 fn_80005F94(s32, s32);



extern s32 lbl_80498B10;
extern s32 lbl_804A0BF8;
extern s32 lbl_80498AF8;
extern f32 lbl_804A2478;
extern MyStructInt lbl_803989E0;

/* functions */
void fn_80009418(s32 arg0);
void fn_80009458(void);
void fn_80009504(void);
s32  fn_80009510(void);
void fn_8000A1D0(void* arg0);
void fn_8000AC20(void);
void fn_8000AC78(void);
void fn_8000ACA4(void);
s32 fn_8000ACD4(void) ;
void fn_8000ACDC(s32 arg0);
void fn_8000ADB0(UnkObj_8000ADB0* arg0, s32 arg1);


#endif /* AUTO_03_80009418_TEXT_H */
