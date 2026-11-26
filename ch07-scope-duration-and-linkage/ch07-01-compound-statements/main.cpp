#include <iostream>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    int value{getInteger()};
    if (value >= 0)
    {
        std::cout << value << " is a non-negative integer\n";
        std::cout << "Double this number is " << value * 2 << '\n';
    }
    else
    {
        std::cout << value << " is a negative integer\n";
        std::cout << "The absolute value of this number is " << -value << '\n';
    }

    return 0;
}
