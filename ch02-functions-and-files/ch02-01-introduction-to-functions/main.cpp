#include<iostream>

// define a finction that prints "In doPrint()\n" to the console
void doA()
{
    std::cout << "In doA()\n";
}

void doB()
{
    std::cout << "Starting doB()\n";
    doA();
    std::cout << "Ending doB()\n";
}

int main()
{
    // nested functions are illegal
    /*
    void foo()
    {
        std::cout << "foo!\n";
    }
    foo();
    */
    std::cout << "starting main()\n";
    // call B
    doB();
    std::cout << "Ending main()\n";
    return 0;
}
