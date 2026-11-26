#include <iostream>

int getValue()
{
    std::cout << "Enter a number: ";
    int input{};
    std::cin >> input;
    return input;
}

int main()
{
    /*
    int x{getValue()};
    int y{getValue()};
    int max{(x > y) ? x : y};
    std::cout << "The max of " << x << " and " << y << " is " << max << ".\n";
    */

    constexpr bool inBigClassroom{false};
    constexpr int classSize{inBigClassroom ? 30 : 20};
    std::cout << "The class size is: " << classSize << '\n';

    return 0;
}
