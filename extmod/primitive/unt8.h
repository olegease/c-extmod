#ifndef _EXTMOD_PRIMITIVE_UNT8_H_
#define _EXTMOD_PRIMITIVE_UNT8_H_

#include <limits.h>

#define EXTMOD_CHECK_SYSTEM_SUPPORT_UNT8
#define EXTMOD_EXPECTED_U8_MAX 255

#if EXTMOD_EXPECTED_U8_MAX==UCHAR_MAX
typedef unsigned char u8;
#elif EXTMOD_EXPECTED_U8_MAX==USHRT_MAX
typedef unsigned short u8;
#elif EXTMOD_EXPECTED_U8_MAX==UINT_MAX
typedef unsigned int u8;
#elif EXTMOD_EXPECTED_U8_MAX==ULONG_MAX
typedef unsigned long int u8;
#elif EXTMOD_EXPECTED_U8_MAX==ULLONG_MAX
typedef unsigned long long int u8;
#else
    #ifdef EXTMOD_WARNING_ON_UNSUPPORTED_INTEGER_TYPE
        #warning System not support 8 bit unsigned integer
    #else
        #error System not support 8 bit unsigned integer (and you know this!)
    #endif // EXTMOD_WARNING_ON_UNSUPPORTED_INTEGER_TYPE
    #undef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT8
#endif // EXTMOD_EXPECTED_U8_MAX

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_UNT8
typedef struct unt8 unt8;
typedef unt8* unt8_;

struct unt8
{
    u8 u;
};

unt8 Unt8(u8);
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_UNT8


#endif // _EXTMOD_PRIMITIVE_UNT8_H_
