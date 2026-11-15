#include <iostream>

/* this program asks the user to enter 2 integers and returns the sum and 
difference of the 2 numbers */

int main()
{
    int num1 {};
    int num2 {};

    std::cout << "Enter an integar: ";
    std::cin >> num1;

    std::cout << "Enter another integar: ";
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " is " << num1 + num2 << ".\n";
    std::cout << num1 << " - " << num2 << " is " << num1 - num2 << ".\n";

    return 0;
}
