#ifndef AUTO_03_80005C00_TEXT_H
#define AUTO_03_80005C00_TEXT_H

#include "lib/types.h"


/* Types */
typedef struct JKRHeap JKRHeap;
typedef struct JKRMemArchive JKRMemArchive;
typedef u32 JKRMemBreakFlag;
typedef struct OSMessageQueue OSMessageQueue;
typedef struct JUTDirectPrint JUTDirectPrint;


typedef struct {
    u8  pad0[0x04];
    s32 unk4;
} Obj_80391D98;

typedef struct Arg_80006C00 {
    u8 pad0[0x64];
    u32* unk64;              /* 0x64 */
    u8 pad68[0x6C - 0x68];
    JKRMemArchive* unk6C;    /* 0x6C */
    u8 pad70[0x84 - 0x70];
    u32 unk84;               /* 0x84 */
} Arg_80006C00;

typedef struct Obj_80006C58 {
    u8  pad0[0x68];
    s32* unk68;              /* +0x68 */
    JKRMemArchive* unk6C;    /* +0x6C */
    u8  pad70[0x84 - 0x70];
    u32 unk84;               /* +0x84 */
} Obj_80006C58;

typedef struct {
    u8 data[0x440];
} Obj_80393DC0;

typedef struct Obj_80398200 {
    u8 data[0x360];
} Obj_80398200;

typedef struct Global_80394200 {
    u8  pad0[0x4358];
    s32 unk4358;   /* +0x4358 */
} Global_80394200;

typedef struct Obj_80007098 {
    u8  pad0[0x04];
    u32 unk4; /* +0x04 */
} Obj_80007098;

typedef struct Global_80398560 {
    s32 unk0;              /* 0x00 */
    s32 unk4;              /* 0x04 */

    u8  queue[0x20];       /* 0x08 */

    u8  pad28[0x36];       /* 0x28 -> 0x5D */

    s8  unk5E;             /* 0x5E */
    u8  pad5F;             /* 0x5F */
    s8  unk60;             /* 0x60 */
    u8  pad61;             /* 0x61 */
    s8  unk62;             /* 0x62 */
    u8  pad63;             /* 0x63 */
    s8  unk64;             /* 0x64 */
} Global_80398560;


typedef struct Obj_800074C4 {
    u16 unk0;   /* +0 */
    u8  unk2;   /* +2 */
    u8  unk3;   /* +3 */
} Obj_800074C4;

typedef struct Unk_804A0BB8 {
    u8 unk0;
    u8 unk1;
    u8 unk2;   /* +2 */
    u8 unk3;   /* +3 */
} Unk_804A0BB8;

typedef struct RenderModeLike {
    u8  pad0[0x04];
    u16 fbWidth;     /* +0x04 */
    u16 pad6;
    u16 efbHeight;   /* +0x08 */
    u16 padA;
} RenderModeLike;

typedef struct Unk_804A0BF8 {
    u8  pad0[0x18];   /* 0x00 - 0x17 */
    u32 unk18;        /* 0x18 */
    u8  pad1[0x0C];   /* 0x1C - 0x27 */
    u32 unk28;        /* 0x28 */
} Unk_804A0BF8;

typedef struct Unk_80398770 {
    s32 unk0;   /* 0x00 */
    s32 unk4;   /* 0x04 */
    s32 unk8;   /* 0x08 */
    s32 unkC;   /* 0x0C */
} Unk_80398770;


/* extern functions */
extern void changeFrameBuffer__14JUTDirectPrintFPvUsUs(JUTDirectPrint* this_, void* fb, u16 w, u16 h);
extern void* __ct__13JKRMemArchiveFPvUl15JKRMemBreakFlag(JKRMemArchive* this_, void* buf,u32 size, JKRMemBreakFlag flag);
extern void free__7JKRHeapFPvP7JKRHeap(JKRHeap* this_, void* ptr, JKRHeap* heap);
extern void changeGroupID__10JKRExpHeapFUc(JKRHeap* this_, u8 groupID);
extern void becomeCurrentHeap__7JKRHeapFv(JKRHeap* this);
extern s32 OSSendMessage(void* queue, s32 msg, s32 flags);
extern s32 OSReceiveMessage(void* queue, s32* msg, s32 flags);
extern void VIFlush(void);
extern void VISetBlack(s32 black);
extern void VISetNextFrameBuffer(void* fb);
extern void GXCopyDisp(void* fb, s32 clear);
extern void GXDrawDone(void);
extern void GXFlush(void);
extern void VIConfigure(RenderModeLike* rm);
extern void VIWaitForRetrace(void);
extern void GXInvalidateTexAll(void);
extern void GXInvalidateVtxCache(void);
extern void GXSetScissor(u32 x, u32 y, u32 w, u32 h);
extern void GXSetAlphaUpdate(u8 enable);
extern void GXSetColorUpdate(u8 enable);
extern s32 VIGetRetraceCount(void);
extern u32 OSGetProgressiveMode(void);
extern void OSSetProgressiveMode(u32 mode);
extern u32 VIGetDTVStatus(void);
extern void fn_80046D70(s32);
extern void fn_800391F0(void*);
extern s32 fn_80039338(void* a0);


/* Globals */
extern u8  lbl_8038F860[0x338];
extern s32 lbl_804A0B70;
extern JKRHeap* lbl_804A0B94;
extern JKRHeap* lbl_804A0B98;
extern JKRHeap* lbl_804A0B98;
extern u8 lbl_80498AE8;
extern u8 lbl_80498AE8;
extern u8 lbl_8038FB98[0x10];
extern s32 lbl_80391D98[];
extern s32 lbl_804A0BA8;
extern Obj_80393DC0 lbl_80393DC0;
extern Obj_80398200 lbl_80398200;
extern Global_80394200 lbl_80394200;
extern Global_80398560 lbl_80398560;
extern void* lbl_804A0BC4;
extern void* lbl_804A0BCC[2];
extern Unk_804A0BB8 lbl_804A0BB8;
extern RenderModeLike* lbl_804A0BD4;
extern JUTDirectPrint* lbl_804A2088;
extern s32 lbl_804A0BC8;
extern Unk_804A0BF8* lbl_804A0BF8;
extern s32 lbl_804A0BD8;
extern s32 lbl_804A0BDC;
extern s32 lbl_804A0BE0;
extern s32 lbl_804A0BE4;
extern u8 lbl_804A0BE8;
extern u8 lbl_804A0BB4;
extern u8 lbl_803985D4[0x19C];
extern Unk_80398770 lbl_80398770;




/* Functions */
void fn_80005C00(void);
void fn_80005C8C(void*);
void fn_8000604C(JKRHeap* arg0, void* unused, JKRHeap* arg2);
void fn_800060CC(u8 arg0);
u8 fn_80006110(void);
void fn_80006118(void);
void fn_8000613C(void);
u8* fn_8000615C(void);
s32 fn_80006A3C(void* arg0);
s32 fn_80006A44(void* arg0);
s32 fn_80006A4C(void* arg0);
s32 fn_80006A54(void* arg0);
u8 fn_80006A5C(void);
s32 fn_80006A78(void);
void fn_80006A88(void);
void fn_80006C00(void* unused, Arg_80006C00* a);
void fn_80006C58(void* arg0, Obj_80006C58* arg1);
void fn_80006CC8(void);
void fn_80006E7C(Obj_80393DC0* arg0);
void fn_80006B5C(void);
void fn_80006168(void*);
void fn_80005F94(void);
void fn_80006CF0(s32 arg0);
void fn_80006EF0(void) ;
void fn_8000701C(Obj_80398200*);
void fn_80006F18(s32 arg0);
void fn_80006F68(void);
s32 fn_80007098(void* arg0);
void fn_800074C4(void* arg0);
void fn_80007660(void);
void fn_80007544(void);
void fn_80007270(Unk_804A0BB8* arg0);
void fn_800076D8(void);
void fn_800076B4(void);
void fn_80007478(s32 arg0);
void fn_80007714(void);
void fn_800077E8(void);
void fn_80007D28(s32 arg0);
s32 fn_80007DC0(void);
void fn_80007D38(s32 arg0);
s32 fn_80007DC8(void) ;
s32 fn_80007DD0(void);
void fn_80007DE0(s8 arg0);
void fn_80007E00(void);
void fn_80007EDC(void);
void fn_80007E68(void);
void fn_80007F4C(void);
void fn_80007FB4(u32* arg0) ;
void fn_80007D48(s8);
void fn_80008004(s32* arg0);
void fn_8000827C(s32 arg0);
void fn_8000828C(s32 arg0);


#endif /* AUTO_03_80005C00_TEXT_H */
