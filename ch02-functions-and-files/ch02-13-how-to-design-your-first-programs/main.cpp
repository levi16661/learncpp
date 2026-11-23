#include <iostream>

// this function asks the user to input an integer in the keyboard and returns
// it
int getInteger()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

// this program gets 2 numbers and a mathmatical operation from the user,
// performs the operation on the 2 numbers and print the result to the 
// console

int main()
{
    // get the first integer from the user
    int x{getInteger()};
    std::cout << x <<'\n';
    
    // get the mathmatical operation from the user
    // getMathmaticalOperation()

    // get the second integer from the user
    // getinteger()

    // perform the operation on the 2 numbers
    // getResult()

    // print the result to the console
    // printResult

    return 0;
}
