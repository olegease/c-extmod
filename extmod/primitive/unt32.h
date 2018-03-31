#ifndef _EXTMOD_PRIMITIVE_UNT32_H_
#define _EXTMOD_PRIMITIVE_UNT32_H_

#include <limits.h>

#define EXTMOD_CHECK_SYSTEM_SUPPORT_UNT32
#define EXTMOD_EXPECTED_U32_MAX 4294967295UL

#if EXTMOD_EXPECTED_U32_MAX==UCHAR_MAX
typedef unsigned char u32;
#elif EXTMOD_EXPECTED_U32_MAX==USHRT_MAX
typedef unsigned short u32;
#elif EXTMOD_EXPECTED_U32_MAX==UINT_MAX
typedef unsigned int u32;
#elif EXTMOD_EXPECTED_U32_MAX==ULONG_MAX
typedef unsigned long int u32;
#elif EXTMOD_EXPECTED_U32_MAX==ULLONG_MAX
typedef unsigned long long int u32;
#else
    #ifdef EXTMOD_WARNING_ON_UNSUPPORTED_INTEGER_TYPE
        #warning System not support 32 bit unsigned integer
    #else
        #error System not support 32 bit unsigned integer (and you know this!)
    #endif // EXTMOD_WARNING_ON_UNSUPPORTED_INTEGER_TYPE
    #undef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT32
#endif // EXTMOD_EXPECTED_U32_MAX

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT32
typedef struct unt32 unt32;
typedef unt32* unt32_;

struct unt32
{
    u32 u;
};

unt32 Unt32(u32);
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_UNT32

#endif // _EXTMOD_PRIMITIVE_UNT32_H_
