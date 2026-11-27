#include "constants.h"
#include <iostream>

int main()
{
    std::cout << "Enter the circles radius: ";
    double radius{};
    std::cin >> radius;

    std::cout << "The circumference of the circle is: " 
              << 2 * radius * constants::pi << '\n';

    return 0;
}
