#ifndef AUTO_03_801356FC_TEXT_H
#define AUTO_03_801356FC_TEXT_H

#include "lib/types.h"


typedef struct ObjA ObjA;
typedef struct ObjB ObjB;
typedef struct ObjC ObjC;

struct ObjA {
    u8   pad0[4];
    ObjB* unk4;                 /* 0x04 */
    u8   pad8[0x268 - 0x08];
    f32  unk268;                /* 0x268 */
};

struct ObjB {
    u8   pad0[0x808];
    ObjC* unk808;               /* 0x808 */
};

struct ObjC {
    u8   pad0[0x40];
    u32  unk40;                 /* 0x40 */
    u8   pad44[0xE7 - 0x44];
    u8   unkE7;                 /* 0xE7 */
};


typedef struct {
    u8  pad0[4];
    s32 unk4; /* 0x04 */
} Obj_801362A0;

typedef struct {
    u8  pad0[0x10];
    u32 unk10; /* 0x10 */
} Obj_80136158;

typedef struct {
    u8  pad0[0x10];
    u32 unk10;          /* 0x10 */
} Obj_801361D0;

typedef struct {
    u8  pad0[0x10];
    u32 unk10;          /* 0x10 */
} Obj_80135FD8;

typedef struct {
    u8  pad0[0x10];
    u32 unk10;          /* 0x10 */
} Obj_80136AE8;

typedef struct {
    u8  pad0[0x2C4];
    u8  unk2C4;        /* 0x2C4 */
    u8  pad2C5[0x2D0 - 0x2C5];
    u32 unk2D0;        /* 0x2D0 */
} Obj_80136B20;

typedef struct Obj_80136E5C {
    u8 pad[0x2C8];
    u8 unk2C8;          /* 0x2C8*/
} Obj_80136E5C;

typedef struct Obj_801383B8 {
    u8 pad0[0x23C];
    u8 unk23C; /* 0x23C */
} Obj_801383B8;

typedef union Global_80399C20 {
    s32 word[1];
    struct {
        u8 pad0[0x08];
        u8 unk8;          /* +0x08 */
    } b;
} Global_80399C20;

typedef struct StateInner {
    u8  pad0[0x808];
    u8* base;              /* 0x808 */
} StateInner;

typedef struct State {
    u8          pad0[0x04];
    StateInner* inner;     /* 0x04 */

    u8   pad8[0x230 - 0x08];
    f32  value;            /* 0x230 */
    s32  step;             /* 0x234 */
    s32  mode;             /* 0x238 */
    u8   counter;          /* 0x23C */
} State;

typedef struct BeamState {
    u8  _pad0[0x90];
    f32 val_x;   /* 0x90 */
    f32 val_y;   /* 0x94 */
    f32 val_z;   /* 0x98 */
} BeamState;

typedef struct BeamOwner {
    u8        _pad0[0x808];
    BeamState* state;  /* 0x808 */
} BeamOwner;

typedef struct ControllerCtx {
    u8        _pad0[0x04];
    BeamOwner* owner;  /* 0x04 */
    u8        _pad8[0x1FC - 0x08];
    f32       saved_a; /* 0x1FC */
    f32       saved_b; /* 0x200 */
} ControllerCtx;


extern void fn_800C0A28(void* a0, s32 a1);
extern void fn_800669C4(void* a0, void* a1);
extern void fn_800BE2A0(void* a0, void* a1, s32 a2);
extern void fn_801881B0(s32 a0, s32 a1, s32 a2);
extern void fn_8018B138(s32, s32, void*);
extern void fn_800205D8(s32 a0, s32* a1, void* a2);


extern u8 lbl_8049E900;
extern u8   lbl_8049E8FC;
extern u8   lbl_8049E90C;
extern u8 lbl_8049E901;
extern s16 lbl_8049E8E8;
extern u8 lbl_80212D20[];
extern u8 lbl_8036DFF4[];
extern Global_80399C20 lbl_80399C20;
extern f32 lbl_804A4EE0;
extern f32 lbl_804A4EE4;
extern f32 lbl_804A4EF0;
extern f32 lbl_804A4F04;
extern f32 lbl_804A4F24;
extern f32 lbl_804A4F28;
extern f32 lbl_804A4F34;
extern f32 lbl_8049E88C;


s32 fn_80136298(void);
s32 fn_80135DE4(void);
s32 fn_801362A0(void* arg0);
s32 fn_80136158(void* arg0);
s32 fn_801361D0(void* arg0);
s32 fn_80136158(void* arg0);
s32 fn_80135FD8(void* arg0);
s32 fn_8013630C(void* arg0);
s32 fn_80136AE8(void* arg0);
s32 fn_80136C64(void* arg0);
f32  fn_80137E8C(void* a0, void* a1, s32 a2, void* a3);
s32 fn_80136B20(void* arg0);
s32 fn_801362D0(void* arg0);
void fn_80137548(void*);
void fn_8013836C(void*);
s32 fn_80136E5C(void* arg0);
void fn_8013701C(void* a0, s32 a1);
s32 fn_80136F94(void* arg0);
u8 fn_8013733C(void);
s32 fn_80136FD8(void* arg0);
void fn_80137F6C(void);
void fn_80138644(void);
void fn_801383B8(void* arg0);
s32 fn_80136204(ControllerCtx* ctx);



#endif /* AUTO_03_801356FC_TEXT_H */
