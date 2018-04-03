    #include "mbed-msb-wrapper.h"
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

    std::string Msb_js::getNameOfClass(){
        
        return NAME_OF_CLASS;
    }

    void Msb_js::printString( const char *s, int len )
    {
        printf("%.*s\r\n", len, s);
    }

    const std::string Msb_js::NAME_OF_CLASS = "Echo";