#ifndef _JERRYSCRIPT_MBED_LIB_ECHO_H
#define _JERRYSCRIPT_MBED_LIB_ECHO_H

#include "jerryscript-mbed-library-registry/wrap_tools.h"
#include "mbed-msb-wrapper-js.h"

DECLARE_JS_WRAPPER_REGISTRATION (Msb)
{
    REGISTER_CLASS_CONSTRUCTOR(Msb);
}

#endif // _JERRYSCRIPT_MBED_LIB_ECHO_H
