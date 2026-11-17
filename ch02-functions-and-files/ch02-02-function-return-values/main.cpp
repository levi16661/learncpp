#include<iostream>

// funtion asks the user to entre an integer
// returns the value the user entres into their keyboard
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}


int main()
{
    // ask the user for 2 integers
    int x{getValueFromUser()};
    int y{getValueFromUser()};

    //print the sum of x and y
    std::cout << x << " + " << y << " = " << x + y << '\n';
    
    return 0;
}
