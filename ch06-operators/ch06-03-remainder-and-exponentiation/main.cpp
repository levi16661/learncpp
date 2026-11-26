#include <iostream>

int getInteger()
{
    std::cout < "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

void printRemainder(int x, int y)
{
    std::cout << "The remainder of " << x << "/" << y << " is " << x % y << '\n';
}

bool isEvenlyDivisible(int x, int y)
{
    return ((x % y) == 0);
}

int main()
{
    int x{getInteger()};
    int y{getInteger()};
    printRemainder(x,y);
    
    std::cout << x << "is ";
    if (isEvenlyDivisible(x,y))
        std::cout << "not "; 
    std::cout << "evenly divisible by " << y << ".\n";
    
    return 0
}
