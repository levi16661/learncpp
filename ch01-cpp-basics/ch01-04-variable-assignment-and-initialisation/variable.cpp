#include <iostream>

int main()
{
    /*int width; // define a variable named width, of type integer
    width = 5; // assign variable named width the value 5
    std::cout << width << std::endl; //print the value assigned to the variable named width to the monitor
    width = 7; // reassign variable name width the value 7
    std::cout << width << std::endl; //print the value assigned to the variable named width to the monitor
    return 0;
    */
    int width {5}; // define a variable name width, of type integer and initialise it with initial value 5
    std::cout << width << std::endl; // print the value assigned to the variable width to the monitor
    // there are 5 common forms of initialisation
    [[maybe_unused]] int a; // default initialisation (no initialiser)
    [[maybe_unused]] int b = 5; // copy initialisation (initial value after equals sign)
    [[maybe_unused]] int c (6); // direct initialisation (initial value in parenthesis)
    [[maybe_unused]] int d {7}; // direct-list-initialisation (initial value in braces)
    [[maybe_unused]] int e {}; // value-initialisation (empty braces)
    // direct-list-initialisation and value-initialisation are prefered
    return 0;  
}
