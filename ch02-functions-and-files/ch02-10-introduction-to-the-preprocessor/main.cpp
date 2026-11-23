#include <iostream>

// don't use object like macros with substitution text
#define MY_NAME "Levi"

// object like macros without substutution text can be used for conditional 
// compilation
#define PRINT_LEVI

int main()
{
#ifdef PRINT_LEVI
    std::cout << "Levi\n";
#endif

#ifdef PRINT_JAMES
    std::cout << "James\n";
#endif

#ifndef PRINT_JAMES
    std::cout << "James\n";
#endif

#if 0
    /*can "commect out" code 
    with a multiline comment*/
    std::cout << "Curtly\n";
    std::cout << "Amanda\n";
#endif
    
    /*
    std::cout << "My name is " << MY_NAME << ".\n";
    */
    return 0;
}
