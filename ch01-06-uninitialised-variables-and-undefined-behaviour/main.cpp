#include <iostream>

void doNothing(int&)
{
}

int main()
{
    /*
    // define an uninitialised variable named x of type integer
    int x;
    // run x through the doNothing function
    doNothing(x);
    // print the value assigned to x to the console
    std::cout << x << '\n';
    */
    
    /// print  how many bytes of memory an int value takes
    std::cout << sizeof(int) << '\n';
    
    return 0;
}
