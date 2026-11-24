#include <iostream>

void writeValue(int x)
{
    std::cout << "The value of x is: " << x << '\n';
}

int main()
{
    int x{1};
    writeValue(x);
    return 0;
}
