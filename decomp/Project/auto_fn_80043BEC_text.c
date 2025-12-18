//auto_fn_80043BEC_text

#include "lib/types.h"

typedef void (*CtorFn)(void*);

extern void __construct_array(void* base, CtorFn ctor, CtorFn dtor, u32 size, u32 count);
extern void fn_8003B950(void*);
extern void fn_800401B8(void*);
extern u8 lbl_803C3730[];

void fn_80043BEC(void);

void fn_80043BEC(void){
    fn_8003B950((void*)(lbl_803C3730 + 0xA00));
    fn_8003B950((void*)(lbl_803C3730 + 0xA18));
    fn_8003B950((void*)(lbl_803C3730 + 0xA30));
    fn_8003B950((void*)(lbl_803C3730 + 0xA48));
    fn_8003B950((void*)(lbl_803C3730 + 0xA60));
    fn_8003B950((void*)(lbl_803C3730 + 0xA78));

    __construct_array((void*)(lbl_803C3730 + 0xA90), fn_800401B8, 0, 0x18, 0x13);
}
