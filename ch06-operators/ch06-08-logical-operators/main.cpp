#include <iostream>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

bool isEven(int x)
{
    return !(x % 2); 
}

int main()
{
    /*
    constexpr int x{5};
    constexpr int y{7};
    if (!(x > y))
        std::cout << x << " is not greater than " << y << '\n';
    else
        std::cout << x << " is greater than " << y << '\n';
    */

    int value{getInteger()};
    /*
    if (value == 0 || value == 1)
        std::cout << "You picked 0 or 1.\n";
    else
        std::cout << "You didn't pick 0 or 1.\n";
    */

    /*
    if (value > 10 && value < 20)
        std::cout << "Your value is between 10 and 20.\n";
    else
        std::cout << "You value is not between 10 and 20.\n";
    */

    if (isEven(value))
        std::cout << value << " is even.\n";
    else
        std::cout << value << " is odd.\n";

    return 0;
}
