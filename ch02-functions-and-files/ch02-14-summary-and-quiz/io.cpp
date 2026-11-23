#include "io.h"
#include <iostream>

// this function asks the user to enter an integer into the keyboard and
// returns it
int readNumber()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

// this function has 1 integer parameter and prints it to the console
void writeAnswer(int answer)
{
    std::cout << "The answer is: " << answer << '\n';
} 
