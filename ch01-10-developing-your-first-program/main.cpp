#include <iostream>

int main()
{
    // ask the user to enter an integer
    std::cout << "Enter an integer: ";

    // value-initialise an integer variable x
    int x {};

    // extract a value from the keyboard and copy-assign it to the variable x
    std::cin >> x;
    
    // print the variable x multiplied by 2 to the console
    std::cout << "Double " << x << " is: " << x * 2  << '\n' 
        << "Triple " << x << " is: " << x * 3 << '\n';
    
    return 0;
}
