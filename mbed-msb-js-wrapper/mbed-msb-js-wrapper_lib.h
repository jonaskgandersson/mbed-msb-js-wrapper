#ifndef _JERRYSCRIPT_MBED_LIB_MSB_H
#define _JERRYSCRIPT_MBED_LIB_MSB_H

#include "jerryscript-mbed-library-registry/wrap_tools.h"
#include "mbed-msb-js-wrapper-js.h"

DECLARE_JS_WRAPPER_REGISTRATION (msb)
{
    REGISTER_CLASS_CONSTRUCTOR(Msb);
}

#endif // _JERRYSCRIPT_MBED_LIB_MSB_H
