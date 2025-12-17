#ifndef MAIN_H
#define MAIN_H

#include "../lib/types.h"

extern void init_main(void);
extern void fn_8000B6C0(void);
extern void PADSetSpec(s32 spec);
extern s32 __nw__FUl(u32 size);
extern void fn_800060CC(s32 arg0);
extern void fn_80009418(s32 arg0);
extern void fn_801D1E9C(s32 self, s32 arg1);
extern void fn_801D2060(void);

extern s32 lbl_804A0BF8;

void main(void);
void init_pad(void);

#endif /* MAIN_H */
