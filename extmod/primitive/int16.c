#include "int16.h"

#ifdef EXTMOD_CHECK_SYSTEM_SUPPORT_INT16
int16 Int16(i16 init)
{
    int16 i = {init};
    return i;
}
#endif // EXTMOD_CHECK_SYSTEM_SUPPORT_INT16
