#ifndef _EXTMOD_PRIMITIVE_INT8_H_
#define _EXTMOD_PRIMITIVE_INT8_H_

#include <limits.h>

#define EXTMOD_CHECK_SYSTEM_SUPPORT_INT8
#define EXTMOD_EXPECTED_INT8_MIN -128
#define EXTMOD_EXPECTED_INT8_MAX 127

#if EXTMOD_EXPECTED_INT8_MIN==SCHAR_MIN && SCHAR_MAX==EXTMOD_EXPECTED_INT8_MAX
typedef signed char i8;
#elif EXTMOD_EXPECTED_INT8_MIN==SHRT_MIN && SHRT_MAX==EXTMOD_EXPECTED_INT8_MAX
typedef signed short i8;
#elif EXTMOD_EXPECTED_INT8_MIN==INT_MIN && INT_MAX==EXTMOD_EXPECTED_INT8_MAX
typedef signed int i8;
#elif EXTMOD_EXPECTED_INT8_MIN==LONG_MIN && LONG_MAX==EXTMOD_EXPECTED_INT8_MAX
typedef signed long int i8;
#elif EXTMOD_EXPECTED_INT8_MIN==LLONG_MIN && LLONG_MAX==EXTMOD_EXPECTED_INT8_MAX
typedef signed long long int i8;
#else
    #ifdef EXTMOD_WARNING_ON_UNSUPPORTED_INTEGER_TYPE
        #warning System not support 8 bit integer
    #else
        #error System not support 8 bit integer (and you know this!)
    #endif // EXTMOD_WARNING_ON_UNSUPPORTED_INTEGER_TYPE
    #undef EXTMOD_CHECK_SYSTEM_SUPPORT_INT8
#endif // EXTMOD_EXPECTED_INT8_MIN && EXTMOD_EXPECTED_INT8_MAX

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_INT8
typedef struct int8 int8;
typedef int8* int8_;

struct int8
{
    i8 i;
};

int8 Int8(i8);
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_INT8

#endif // _EXTMOD_PRIMITIVE_INT8_H_
