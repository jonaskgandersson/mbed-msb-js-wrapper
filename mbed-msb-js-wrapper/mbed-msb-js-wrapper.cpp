    #include "mbed-msb-js-wrapper.h"
    #include "mbed.h"
    
    int Msb_js::echoInt( int i)
    {
        numCalls++;
        return i;
    }

    int Msb_js::getNumCalls()
    {
        return numCalls;
    }

    std::string Msb_js::getNameOfClass()
    {
        numCalls++;
        return NAME_OF_CLASS;
    }

    void Msb_js::debug( const char *s, int len )
    {
        numCalls++;
        printf("[Debug] %.*s\r\n", len, s);
    }

    int sendMessage( const char *message, int len )
    {
        printf("[IoT Hub] Message: %.*s\r\n", message)
    }

    const std::string Msb_js::NAME_OF_CLASS = "Msb";