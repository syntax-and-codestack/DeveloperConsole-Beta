#include <string>

#ifndef DEVELOPER_CONSOLE
#define DEVELOPER_CONSOLE
#define DEVELOPER_MAX_VARS 999
#define CONSOLE_FONT
#define CONSOLE_FILE
#define CONSOLE_FILE_EXTENSION "*.vconsole"
#define consolepost main

class Console
{
 public:
    Console();
    ~Console();

    const std::string g_cConsoleText();
    const std::string g_cConsoleToken();

    void ClearConsole(Console console){
        console.g_cConsoleText().empty();
        console.g_cConsoleToken().empty();
    };

};

bool g_cWaitForToken_Called(Console console)
{
    if( console.g_cConsoleToken() == "waitfor" )
    {
        return true;
    }
};

bool g_cEnableDev_Called(Console console)
{
    if( console.g_cConsoleText() == "$EnableDeveloper_Mode")
    {
        return true;
    }
};

bool g_cClip_Called(Console console)
{
    if( console.g_cConsoleText() == "no_clip")
    {
        return true;
    }
};

consolepost(Console console)
{
    printf( "Developer Console Version 1.0" );
    return 0;
}





#endif