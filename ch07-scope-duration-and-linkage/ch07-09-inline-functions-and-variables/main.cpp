#include "pi.h"
#include <iostream>

inline int min(int x, int y)
{
    return (x > y) ? x : y;
}

// forward declare the circumference function
double circumference(double radius);

int main()
{
    /*
    std::cout << min(5,6) << '\n';
    std::cout << min(3,2) << '\n';
    */

    std::cout << pi() << '\n';
    std::cout << circumference(2.0) << '\n'; 
    return 0;
}
