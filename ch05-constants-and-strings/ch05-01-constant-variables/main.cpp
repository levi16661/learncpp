#include <iostream>

// this function has a const int parameter
void printInt(const int x)
{
    std::cout << x << '\n';
}

int main()
{
    /*
    // initialise constant varialbe using the const qualifier
    const double gravity{9.81};
    int const sidesInSquare{4};
    */

    printInt(5);
    printInt(6);
}
