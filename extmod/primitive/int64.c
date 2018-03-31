#include "int64.h"

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_INT64
int64 Int64(i64 init)
{
    int64 i = {init};
    return i;
}
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_INT64
