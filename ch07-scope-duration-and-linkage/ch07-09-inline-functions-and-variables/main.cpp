#include <iostream>

inline int min(int x, int y)
{
    return (x > y) ? x : y;
}

// forward declare the circumference function
double circumference(double radius);

// define an inline function that returns the value of pi
inline double pi()
{
    return 3.14159;
}

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
