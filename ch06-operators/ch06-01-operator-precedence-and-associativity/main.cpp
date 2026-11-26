#include <iostream>

int getValue()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

void printCalculation(int x, int y, int z)
{
    std::cout << x + (y * z) << '\n';
}

int main()
{
    // this expression is dependent on argument evaluation order
    //printCalculation(getValue(), getValue(), getValue());

    int a{getValue()};
    int b{getValue()};
    int c{getValue()};
    printCalculation(a, b, c);

    return 0;
}
