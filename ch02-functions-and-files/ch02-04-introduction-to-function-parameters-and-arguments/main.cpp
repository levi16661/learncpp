#include <iostream>

// this function has 2 integer parameters
// the funtion returns the sum of the 2 arguments passed to it
int add(int x, int y)
{
    return x + y;
}

// this function has 2 integer parameters
// the funtion prints the 2 arguments passed to it to the console
void printValues(int x, int y)
{
    std::cout << x << '\n';
    std::cout << y << '\n';
}

// this function extracts an integer from the user
int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

// this function has an integer parameter
// this function prints the double of the argument passed to it to the console
void printDouble(int x)
{
    std::cout << "Double " << x << " is " << 2*x << ".\n"; 
}

// this function has 2 integer parameters
// this function multiplies the 2 arguments passed to it
int multiply(int x, int y)
{
    return x*y;
}

// this function has 1 integer parameter
// this function returns double the argument passed to it
int doubleNumber(int x)
{
    return 2*x;
}

int main()
{
    // ask the user for 2 integers and assing
    //int num1{getValueFromUser()};
    //int num2{getValueFromUser()};
    //std::cin >> num1 >> num2;

    // print the sum of the 2 integers by passing them as arguments to the function add
    //std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << '\n';
    
    // print the 2 integer to the console by passing them as arguments to the function printValues
    //printValues(num1, num2);

    // ask the user for an integer
    // int num{getValueFromUser()};
    
    // ask the user for and integer and print double to the console
    //printDouble(getValueFromUser());
    
    // print the sum of 4 and 5 to the console
    //std::cout << add(4,5) << '\n';
    
    // print the sum of 1 + 2 and 3*5 to the console
    //std::cout << add(1 + 2, 3 * 4) << '\n';

    // list-initialise an integer variable a with the value 5 and print its double to the console
    //int a{5};
    //std::cout << add(a,a) << '\n';
    
    // print the sum of 1 and the product of 2 and 3 to the console
    //std::cout << add(1,multiply(2,3)) << '\n';

    // print the sum of 1 and the sum of 2 and 3 to the console
    //std::cout << add(1, add(2,3)) << '\n';
    
    // ask the user for and integer and print double to the console
    int num {doubleNumber(getValueFromUser())};
    std::cout << num << '\n';
    
    return 0;
}
