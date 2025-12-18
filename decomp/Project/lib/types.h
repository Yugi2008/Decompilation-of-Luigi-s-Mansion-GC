#ifndef TYPES_H
#define TYPES_H

#include <dolphin/types.h>

#include "macros.h"

/* =========================
 * Common base types (if not already provided)
 * =========================
 *
 * dolphin/types.h usually provides:
 *   s8,u8,s16,u16,s32,u32,s64,u64,f32,f64,BOOL,TRUE,FALSE
 */

/* =========================
 * "Unknown" convenience aliases used in decomp
 * ========================= */

typedef u32 Unk;     /* generic unknown word */
typedef u8  Unk8;
typedef u16 Unk16;
typedef u32 Unk32;
typedef u64 Unk64;

/* If you prefer the lowercase style used in many repos: */
typedef u32 unk_t;
typedef u8  unk8_t;
typedef u16 unk16_t;
typedef u32 unk32_t;
typedef u64 unk64_t;

typedef struct Vec3f {
    f32 x, y, z;
} Vec3f;

/* =========================
 * Small portability helpers
 * ========================= */

#ifndef NULL
#define NULL 0
#endif

#ifndef ARRAY_COUNT
#define ARRAY_COUNT(x) ((int)(sizeof(x) / sizeof((x)[0])))
#endif

/* Compile-time assert (C11 or fallback) */
#if defined(__STDC_VERSION__) && (__STDC_VERSION__ >= 201112L)
#define STATIC_ASSERT(cond, msg) _Static_assert((cond), msg)
#else
#define STATIC_ASSERT(cond, msg) typedef char static_assertion_##msg[(cond) ? 1 : -1]
#endif

/* =========================
 * Enum helper
 * =========================*/


#define DEFINE_ENUM_TYPE(name, ...)        \
struct name {                          \
    enum Values { __VA_ARGS__ };       \
    typedef enum Values Type;         \
};

/* Optional: plain C enum helper */
#define DEFINE_ENUM(name, ...)             \
typedef enum name { __VA_ARGS__ } name;

#endif /* TYPES_H */
