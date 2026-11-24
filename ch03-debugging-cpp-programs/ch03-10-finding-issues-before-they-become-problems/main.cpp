#include <iostream>

int add (int x, int y)
{
    return x + y;
}

void testAdd()
{
    std::cout << "This function should print: 2 0 0 -2\n";
    std::cout << add(1,1) << ' ';
    std::cout << add(-1,1) << ' ';
    std::cout << add(1,-1) << ' ';
    std::cout << add(-1,-1) << ' ';
}

int main()
{
    testAdd();

    return 0;
}
