#include<iostream>

// this function prints Hi to the console
void printHi()
{
    std::cout << "Hi" << '\n';
}

int returnFive()
{
    return 5;
}

int main ()
{
    printHi();
    std::cout << returnFive() << '\n';
    return 0;
}
