#ifndef AUTO_03_8000AEEC_TEXT_H
#define AUTO_03_8000AEEC_TEXT_H

#include "lib/types.h"

/* -------------------------------------------------------------------------- */
/* External functions                                                          */
/* -------------------------------------------------------------------------- */

extern void fn_80006EF0(void);
extern void fn_80009504(void);
extern void fn_8000AC20(void);
extern void fn_8000AC78(void);
extern void fn_8000B4E8(void);

extern void fn_800060CC(s32 arg0);
extern void fn_80006F18(s32 arg0);
extern void fn_8000828C(s32 arg0);

extern void fn_80006070(s32 arg0, void** arg1);

extern s32 OSSendMessage(void* queue, s32 msg, s32 flags);

/* -------------------------------------------------------------------------- */
/* Globals                                                                     */
/* -------------------------------------------------------------------------- */

extern s32 lbl_804A0C08;
extern s32 lbl_804A0C18;
extern s32 lbl_804A0C1C;
extern s32 lbl_804A0C20;

/* pointer table */
extern void* lbl_80212E00[];

typedef struct UnkLbl_80398A40 {
    u8 pad[0x30];
} UnkLbl_80398A40;

extern UnkLbl_80398A40 lbl_80398A40;



typedef struct Unk_80498B18 {
    u8  pad0[0x10];
    u16 unk10;        /* +0x10 */
    u16 pad12;

    s32 unk14;        /* +0x14 */

    u8  pad18[0x20 - 0x18];

    void (*unk20)(struct Unk_80498B18* self); /* +0x20 */
} Unk_80498B18;

extern Unk_80498B18* lbl_80498B18;

/* -------------------------------------------------------------------------- */
/* Local functions                                                             */
/* -------------------------------------------------------------------------- */

u16  fn_8000B200(void);
void fn_8000B20C(s32 arg0);
void fn_8000B6C0(void);

#endif /* AUTO_03_8000AEEC_TEXT_H */
