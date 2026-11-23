//include the logger headers
#include <plog/Log.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <iostream>

//#define ENABLE_DEBUG
int getInteger()
{
/*
#ifdef ENABLE_DEBUG
std::cerr << "getInteger() called\n";
#endif
*/
    PLOGD << "getInteger() called";
    std::cout << "Enter a number: ";
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
/*
#ifdef ENABLE_DEBUG
std::cerr << "main() called\n";
#endif
*/
    
    plog::init(plog::debug, "Logfile.txt");
    PLOGD << "main() called\n";
    int x{getInteger()};
    std::cout << "You entered: " << x << '\n';
    return 0;
}
