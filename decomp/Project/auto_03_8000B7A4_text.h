#ifndef AUTO_03_8000B7A4_TEXT_H
#define AUTO_03_8000B7A4_TEXT_H

#include "lib/types.h"

/* ============================================================================
 * Basic / SDK types
 * ========================================================================= */

typedef struct OSMessageQueue OSMessageQueue;
typedef s32 GXBool;
typedef struct JKRExpHeap JKRExpHeap;

/* ============================================================================
 * Small placeholder structs
 * ========================================================================= */

typedef struct Unk_8007271C {
    u8 pad[0x16A];
    u8 unk16A; /* +0x16A */
} Unk_8007271C;

typedef struct UnkLbl_80398A70 {
    s32 unk0;         /* +0x00 */
    u8  pad[0x20];
} UnkLbl_80398A70;

/* ============================================================================
 * SDK / GX externs
 * ========================================================================= */

extern void OSInitMessageQueue(OSMessageQueue* mq, void* msgArray, s32 msgCount);
extern s32  OSSendMessage(void* queue, s32 msg, s32 flags);

extern void GXSetAlphaUpdate(u8 enable);
extern void GXSetDstAlpha(GXBool enable, u8 alpha);

/* ============================================================================
 * Game extern functions
 * ========================================================================= */


extern void  fn_800060CC(s32 arg0);
extern void  fn_80007D38(s32 arg0);
extern void  fn_80007EDC(void);
extern void  fn_8000852C(void* arg0);
extern void  fn_80010A94(void);
extern void  fn_80010B5C(void);
extern u8    fn_8002981C(void);
extern void fn_80061A2C();
extern void  fn_80029E08(void);
extern void  fn_800375BC(void* arg0);
extern void  fn_8004C69C(void);
extern void  fn_8004C784(void);
extern void  fn_8004C7DC(void);
extern s32   fn_8004C734(void);
extern void  fn_80057698(s32 arg0);
extern void  fn_800576A8(s32 arg0);
extern void  fn_8005CE78(void);
extern void  fn_8005D300(void);
extern void  fn_8005D44C(void);
extern void  fn_8005E814(void);
extern void  fn_8005E894(void);
extern void  fn_800601EC(s32 arg0);
extern void  fn_800615F8(void);
extern void  fn_80065358(s32 arg0);
extern void  fn_80065F18(void);
extern void  fn_80072374(void);
extern void* fn_8007271C(s32 arg0);
extern void  fn_800B8424(s32 arg0);
extern void  fn_800B853C(void);
extern void  fn_80011630(void);
extern void  fn_8011DE7C(void);
extern void  fn_80160BE0(void);
extern void  fn_8015DD98(void* arg0, u32 arg1, u32 arg2, u32 arg3);
extern void fn_80037B3C(void);



extern void  destroy__10JKRExpHeapFv(JKRExpHeap* heap);
extern void  fn_80120020(void);
extern void  fn_8015E07C(void* arg0, s32* arg1);
extern void  fn_801868B8(u8 arg0, s32 arg1);
extern void  fn_80188318(s32 arg0);
extern void  fn_801886F0(s32 arg0);

/* ============================================================================
 * Globals
 * ========================================================================= */

extern UnkLbl_80398A70 lbl_80398A70;

extern u8  lbl_80398780[];
extern u8  lbl_803C2E10[];
extern u8  lbl_803CD4FC[];

extern s32 lbl_80498B2C;
extern s32 lbl_804A0B88;
extern JKRExpHeap* lbl_804A0B9C;

extern s32 lbl_804A0BE0;
extern s32 lbl_804A0C20;
extern s32 lbl_804A0C40;
extern s32 lbl_804A0C44;
extern s32 lbl_804A0C48;
extern s32 lbl_804A0C50;
extern s32 lbl_804A0C54;
extern s32 lbl_804A0FB0;

/* ============================================================================
 * Local functions in this C file
 * ========================================================================= */

void fn_8000B7A4(s32* arg0);
void fn_8000B7DC(void);
void fn_8000B844(void);
s32  fn_8000B8A0(void);
void fn_8000B8D4(void);
void fn_8000B8F8(void);

void fn_8000BEBC(void);
void fn_8000C19C(void);
void fn_8000C238(s32 arg0, s32 arg1);
s32  fn_8000C284(void);
void fn_8000C574(void);

#endif /* AUTO_03_8000B7A4_TEXT_H */
