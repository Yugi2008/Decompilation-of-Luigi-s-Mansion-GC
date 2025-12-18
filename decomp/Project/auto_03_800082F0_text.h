
#ifndef AUTO_03_800082F0_TEXT_H
#define AUTO_03_800082F0_TEXT_H

#include "lib/types.h"

/* --- Types --- */
typedef s32 GXProjectionType;





/* --- External functions --- */
extern void MTXLookAt(void* mtx, const void* camPos, const void* target, const void* up);
extern void fn_801B1F3C(void* mtx, void* arg1);
extern void GXSetProjection(void* mtx, GXProjectionType type);
extern void MTXOrtho(void* mtx, f32 top, f32 bottom, f32 left, f32 right, f32 near, f32 far);
extern void MTXLightOrtho(void* mtx, f32 top, f32 bottom, f32 left, f32 right, f32 near, f32 far, f32 scaleS, f32 scaleT);
extern void MTXFrustum(void* mtx, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f);
extern void MTXLightPerspective(void* mtx, f32 fovy, f32 aspect, f32 near, f32 far, f32 scaleS, f32 scaleT);
extern void fn_80008C30(void* arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3, f32 nearZ, f32 farZ);
extern void PSVECSubtract(const Vec3f* a, const Vec3f* b, Vec3f* out);
extern void PSVECNormalize(const Vec3f* in, Vec3f* out);




/* --- External data --- */

extern u8 lbl_80492040[];
extern f32 lbl_804A23D0;
extern f32 lbl_804A23D4;
extern f32 lbl_804A23D8;
extern f32 lbl_804A23DC;
extern f32 lbl_804A23E0;
extern f32 lbl_804A2420;



/* --- Functions defined in this file --- */
void fn_80008800(void* arg0, f32 farg0, f32 farg1, f32 farg2, f32 farg3);
void fn_80008414(s32 arg0);
void fn_800088B4(void);
void fn_80008464(s32 arg0);
void fn_800084B0(void* arg0);
s32 fn_800092C4(s32 arg0);



#endif /* AUTO_03_800082F0_TEXT_H */
