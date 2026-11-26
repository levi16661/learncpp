#include <cassert>
#include <cstdint>
#include <iostream>
#include <limits>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

void printRemainder(int x, int y)
{
    std::cout << "The remainder of " << x << "/" << y << " is " << x % y 
              << ".\n";
}

bool isEvenlyDivisible(int x, int y)
{
    return ((x % y) == 0);
}

constexpr std::int64_t powint(std::int64_t base, int exp)
{
    assert(exp >= 0 && "powint: exp parameter has negative value");

    // base == 0 case
    if (base == 0)
        return (exp = 0) ? 1 : 0;
    
    std::int64_t result{1};
    while (exp > 0)
    {
        if ((exp % 2) != 0)
            result *= base;
        exp /= 2;
        base *= base;
    }

    return result;
}

constexpr std::int64_t powint_safe(std::int64_t base, int exp)
{
    assert(exp >= 0 && "powint_safe: exp parameter has negative value");

    // base == 0 case
    if (base == 0)
        return (exp == 0) ? 1 : 0;
    
    std::int64_t result{1};
    int sign{1};

    if (base < 0)
    {
        base *= -1;
        if (exp % 2 != 0)
            sign = -1;
    }

    while (exp > 0)
    {
        if (exp % 2 != 0)
        {
            if (result > std::numeric_limits<std::int64_t>::max() / base)
            {
                std::cerr << "overflowed ";
                return std::numeric_limits<std::int64_t>::max();
            }
            result *= base;
        }

        exp /= 2;

        if (exp <= 0)
            break;

        if (base > std::numeric_limits<std::int64_t>::max() / base)
        {
            std::cerr << "overflowed ";
            return std::numeric_limits<std::int64_t>::max();            
        }
        base *= base;
    }
    return sign*result;
}

constexpr bool isEven(int x)
{
    return (x % 2) == 0;
}

int main()
{
    /*
    int x{getInteger()};
    int y{getInteger()};
    printRemainder(x,y);
    
    std::cout << x << " is ";
    if (! isEvenlyDivisible(x,y))
        std::cout << "not "; 
    std::cout << "evenly divisible by " << y << ".\n";
    */

    /*
    int x{getInteger()};
    int y{getInteger()};
    std::cout << x << " to the power of " << y << " is " << powint(static_cast<std::int64_t>(x), static_cast<std::int64_t>(y)) << ".\n";
    */

    /*
    std::cout << "7 to the power of 12 is " << powint_safe(7,12) << '\n';
    std::cout << "70 to the power of 12 " << powint_safe(70,12) << '\n';
    */

    int x{getInteger()};
    std::cout << x << " is ";
    if (isEven(x))
        std::cout << "even.\n";
    else
        std::cout << "odd.\n";
        
    return 0;
}
