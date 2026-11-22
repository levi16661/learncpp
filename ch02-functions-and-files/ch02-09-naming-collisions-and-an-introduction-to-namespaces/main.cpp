#include <iostream>

void myFcn(int x)
{
    // :: is called the scope resolution operator and std is the namespace
    std::cout << 2*x << '\n';
}
int main()
{
    return 0;
}
