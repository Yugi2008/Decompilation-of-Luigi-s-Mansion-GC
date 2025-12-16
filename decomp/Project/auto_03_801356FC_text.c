#include "auto_03_801356FC_text.h"

// fn_801356FC @ 0x801356FC size 0x8
// fn_80135704 @ 0x80135704 size 0x8
// fn_8013570C @ 0x8013570C size 0x8
// fn_80135714 @ 0x80135714 size 0x150
// fn_80135864 @ 0x80135864 size 0xE4
// fn_80135948 @ 0x80135948 size 0x1C0
// fn_80135B08 @ 0x80135B08 size 0x64
// fn_80135B6C @ 0x80135B6C size 0x278
s32 fn_80135DE4(void) {
    return 1;
}

// fn_80135DEC @ 0x80135DEC size 0x88
// fn_80135E74 @ 0x80135E74 size 0x64
// fn_80135ED8 @ 0x80135ED8 size 0x100
s32 fn_80135FD8(void* arg0){
    Obj_80135FD8* obj = (Obj_80135FD8*)arg0;
    if (obj->unk10 > (u32)lbl_8049E901) {
        fn_800C0A28(arg0, 0xB);
    }
    return 1;
}

// fn_80136010 @ 0x80136010 size 0x4C
// fn_8013605C @ 0x8013605C size 0x64
// fn_801360C0 @ 0x801360C0 size 0x98
s32 fn_80136158(void* arg0){
    Obj_80136158* obj = (Obj_80136158*)arg0;
    u8 limit = lbl_8049E900;

    if (obj->unk10 > (u32)limit) {
        fn_800C0A28(arg0, 0xA);
    }
    return 1;
}
// fn_80136190 @ 0x80136190 size 0x40
s32 fn_801361D0(void* arg0){
    Obj_801361D0* obj = (Obj_801361D0*)arg0;
    if (obj->unk10 > 0x5AU) {
        fn_800C0A28(arg0, 7);
    }

    return 1;
}


s32 fn_80136204(ControllerCtx* ctx){
    u8 stack_pad[0x20];

    register BeamOwner* own;
    register ControllerCtx* c;
    BeamState* st;
    BeamState* t;
    f32 v;
    (void)stack_pad;

    c   = ctx;
    own = c->owner;
    st  = own->state;
    lbl_80399C20.word[0] = (s32)((u8*)st + 0x44);
    fn_800205D8(3, &lbl_80399C20.word[0], st);
    c->saved_b = lbl_8049E88C;
    c->saved_a = c->saved_b;
    t = own->state;
    v = lbl_8049E88C;
    t->val_z = v;
    t->val_y = v;
    t->val_x = v;

    fn_800669C4(own->state, (void*)lbl_80212D20);
    fn_800C0A28(c, 9);

    return 1;
}


s32 fn_80136298(void) {
    return 1;
}


s32 fn_801362A0(void* arg0){
    Obj_801362A0* obj = (Obj_801362A0*)arg0;
    s32 a0 = obj->unk4;
    u8  a2 = lbl_8049E8FC;

    fn_800BE2A0((void*)a0, (void*)&lbl_8049E90C, a2);
    return 1;
}


s32 fn_801362D0(void* arg0){
    ObjA* a0 = (ObjA*)arg0;

    register ObjB* b = a0->unk4;
    register ObjC* c = b->unk808;

    if (c->unk40 & 0x60000u) {
        fn_800C0A28(arg0, 7);
    }
    return 1;
}



s32 fn_8013630C(void* arg0){
    ObjA* a = (ObjA*)arg0;
    ObjB* temp_r7 = a->unk4;
    ObjC* temp_r6 = temp_r7->unk808;
    temp_r6->unk40 &= 0xFFFF3BFFu;

    {
        ObjC* temp_r4 = temp_r7->unk808;
        temp_r4->unkE7 = 0xFA;
    }

    return 1;
}

// fn_8013633C @ 0x8013633C size 0xAC
// fn_801363E8 @ 0x801363E8 size 0x6C
// fn_80136454 @ 0x80136454 size 0x560
// fn_801369B4 @ 0x801369B4 size 0x134
s32 fn_80136AE8(void* arg0){
    Obj_80136AE8* obj = (Obj_80136AE8*)arg0;
    u32 limit = (u32)(s32)lbl_8049E8E8;

    if (obj->unk10 > limit) {
        fn_800C0A28(arg0, 3);
    }
    return 1;
}

s32 fn_80136B20(void* arg0){
    Obj_80136B20* obj = (Obj_80136B20*)arg0;

    obj->unk2C4 = 0;
    obj->unk2D0 = 0;

    return 1;
}
// fn_80136B34 @ 0x80136B34 size 0x130
s32 fn_80136C64(void* arg0){
    register ObjB* r31;
    register ObjA* r30;

    ObjC* r6;
    ObjC* r4;
    s32   r5;

    volatile u8 pad[0x10];

    r30 = (ObjA*)arg0;
    r31 = r30->unk4;

    fn_800BE2A0((void*)r31, (void*)lbl_8036DFF4, 0);

    r6 = r31->unk808;
    r5 = (s32)r6->unk40;
    r6->unk40 = (u32)(r5 & 0xFFFF3BFFu);

    r4 = r31->unk808;
    r4->unkE7 = 0xFA;

    r30->unk268 = fn_80137E8C((void*)r30, (void*)r4, r5, (void*)r6);

    fn_800669C4((void*)r31->unk808, (void*)lbl_80212D20);
    return 1;
}
// fn_80136CF0 @ 0x80136CF0 size 0x16C
s32 fn_80136E5C(void* arg0){
    Obj_80136E5C* obj = (Obj_80136E5C*)arg0;

    fn_801383B8(arg0);
    fn_80137548(obj);
    obj->unk2C8 = 0;
    fn_8013836C(obj);

    return 1;
}

// fn_80136EA4 @ 0x80136EA4 size 0xF0
s32 fn_80136F94(void* arg0){
    ObjB* temp_r31;
    ObjC* temp_r4;
    s32 ret;

    temp_r31 = ((ObjA*)arg0)->unk4;
    fn_8013701C(arg0, 1);

    temp_r4 = temp_r31->unk808;
    ret = 1;
    temp_r4->unk40 |= 0xC400u;

    return ret;
}

s32 fn_80136FD8(void* arg0){
    if (fn_8013733C() != 0) {
        fn_800C0A28(arg0, 4);
    }
    return 1;
}
// fn_8013701C @ 0x8013701C size 0x130
// fn_8013714C @ 0x8013714C size 0xC4
// fn_80137210 @ 0x80137210 size 0x12C
// fn_8013733C @ 0x8013733C size 0xD0
// fn_8013740C @ 0x8013740C size 0x78
// fn_80137484 @ 0x80137484 size 0xC4
// fn_80137548 @ 0x80137548 size 0x2A4
// fn_801377EC @ 0x801377EC size 0x13C
// fn_80137928 @ 0x80137928 size 0xFC
// fn_80137A24 @ 0x80137A24 size 0x140
// fn_80137B64 @ 0x80137B64 size 0xB8
// fn_80137C1C @ 0x80137C1C size 0xE4
// fn_80137D00 @ 0x80137D00 size 0x18C
f32 fn_80137E8C(void* a0, void* a1, s32 a2, void* a3){
    (void)a1;
    (void)a2;
    (void)a3;

    {
        State* a = (State*)a0;
        u32 r0 = (u32)a->counter;

        if (r0 > 1U) {
            goto L_38;
        }

        a->mode  = 1;
        a->value = lbl_804A4EE4;
        a->step  = 4;
        return lbl_804A4EF0;

        L_38:
        if (r0 <= 1U) {
            goto L_64;
        }

        if (r0 > 4U) {
            goto L_64;
        }

        a->mode  = 1;
        a->value = lbl_804A4EF0;
        a->step  = 4;
        return lbl_804A4F28;

        L_64:
        if (r0 <= 4U) {
            goto L_90;
        }

        if (r0 > 9U) {
            goto L_90;
        }

        a->mode  = 2;
        a->value = lbl_804A4F04;
        a->step  = 2;
        return lbl_804A4F24;

        L_90:
        if (r0 <= 9U) {
            goto L_B8;
        }

        a->mode  = 3;
        a->value = lbl_804A4EE0;
        a->step  = 0;
        return lbl_804A4F34;

        L_B8:
        {
            StateInner* temp_r5 = a->inner;
            fn_8018B138((s32)(temp_r5->base + 0x53C), a->mode, temp_r5);
        }
        return lbl_804A4EF0;
    }
}



void fn_80137F6C(void) {}
// fn_80137F70 @ 0x80137F70 size 0x1E4
// fn_80138154 @ 0x80138154 size 0x100
// fn_80138254 @ 0x80138254 size 0xA4
// fn_801382F8 @ 0x801382F8 size 0x74
// fn_8013836C @ 0x8013836C size 0x4C
void fn_801383B8(void* arg0){
    Obj_801383B8* a = (Obj_801383B8*)arg0;
    u8 temp_r0 = a->unk23C;

    if (temp_r0 >= 0xAU) {
        lbl_80399C20.b.unk8 = 4;
        return;
    }
    if (temp_r0 >= 5U) {
        lbl_80399C20.b.unk8 = 3;
        return;
    }
    lbl_80399C20.b.unk8 = 2;
}
// fn_80138408 @ 0x80138408 size 0x1A0
// fn_801385A8 @ 0x801385A8 size 0x9C
void fn_80138644(void){
    fn_801881B0(0x49C6, 0, 0);
}
// fn_80138670 @ 0x80138670 size 0x2E0
