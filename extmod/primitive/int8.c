#include "int8.h"

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_INT8
int8 Int8(i8 init)
{
    int8 i = {init};
    return i;
}
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_INT8
