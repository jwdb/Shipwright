#ifdef __SWITCH__
#include "switchImpl.h"
#include <switch.h>

void platform::Switch::Init() {
    socketInitializeDefault();
}

#endif
