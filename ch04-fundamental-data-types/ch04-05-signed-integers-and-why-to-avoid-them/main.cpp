#include <iostream>

int main()
{
    /*
    // define the 4 unsigned standard integer types
    unsigned short us{};
    unsigned int ui{};
    unsigned long ul{};
    unsigned long long ull{};
    */
    
    /*
    // assign the maximum value for 16-bit unsigned integer to x
    unsigned short x{65535};
    std::cout << "x was: " << x << '\n';

    // adding 1 takes x ouside the rage of a 16-bit unsigned integer so the value
    // wraps around to 0
    x = x + 1;
    std::cout << "x is now: " << x << '\n';
    */

    /*
    // assign the minimum value for a 16-bit unsigned integer to y
    unsigned short y{0};
    std::cout << "y was: " << y << '\n';

    // subtracting 1 takes y outside the range of a 16-bit unsigned integer, so
    // the value wraps around to 65535
    y = y - 1;
    std:: cout << "y is now " << y << '\n';
    */

    /*
    // subtract a signed int from a unsigned int
    unsigned int u{2};
    signed int s{3};

    std::cout << u - s << '\n';
    */
    
    // compare a signed int and an unsigned int
    signed int s{-1};
    unsigned int u{1};
    if (s < u)
    {
        std::cout << "-1 is less than 1" << '\n';
    }
    else
    {
        std::cout << "1 is less than -1" << '\n';
    }
    
    return 0;
}
