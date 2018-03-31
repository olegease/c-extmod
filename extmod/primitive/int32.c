#include "int32.h"

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_INT32
int32 Int32(i32 init)
{
    int32 i = {init};
    return i;
}
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_INT32
