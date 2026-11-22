#include <iostream>

// define a function that returns a integer entered by the user
int getInteger()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}
