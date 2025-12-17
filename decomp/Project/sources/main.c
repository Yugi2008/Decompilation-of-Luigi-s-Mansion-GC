#include "sources/main.h"

void main(void){
    init_main();
    fn_8000B6C0();
}


void init_pad(void){
    s32 temp_r3;

    fn_800060CC(5);
    PADSetSpec(5);
    fn_801D2060();

    temp_r3 = __nw__FUl(0x98U);
    if (temp_r3 != 0) {
        fn_801D1E9C(temp_r3, 0);
    }

    lbl_804A0BF8 = temp_r3;

    fn_80009418(1);
    fn_800060CC(0x1A);
}
