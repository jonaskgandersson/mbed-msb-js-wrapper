#include <string>

class Msb_js{

public:

    int echoInt( int i);

    int getNumCalls();

    std::string getNameOfClass();

    void debug( const char *s, int len );
    
    int sendMessage( const char *message, int len );


private:

    static const std::string NAME_OF_CLASS;
    int numCalls;

};