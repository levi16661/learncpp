#include <iostream>

// this function returns the value 4
int getValue()
{
//std::cerr << "getValue() called\n";
    return 4;
}

// this function takes 2 interger parameters and returns their sum
int add(int x, int y)
{
// add a debug statement that print the function name and the arguments it 
// receives
std::cerr << "add() called (x = " << x << ", y = " << y << ")\n";

    return x + y;
}

// this function takes an integer and prints it to the console
void printResult(int answer)
{
// add a debug statement that prints the function name
std::cerr << "printResult() called\n";

    std::cout << "The answer is: " << answer << "\n";
}

/*
// this function asks the user for an integer and returns it
int getInteger()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}
*/

// this function asks the user for an integer and returns it
int getInteger()
{
// add a debug statement that prints the name of the function
std::cerr << "getInteger() called\n";
    std::cout << "Enter an integer: ";
    int input{};

    std::cin >> input;
// add a debug statement that prints the value of the variable input
std::cerr << "getInteger::input = " << input << '\n';

    // getInput returning the wrong value. Semantic bug: operator-- preceding x
    //return input;

    // to fix bug remove operator--
    return input;
}

int main()
{
    /*
// add a debug statement
std::cerr << "main() called \n";
    // getValue never called. Syntax bug: no parentheses after function
    //std::cout << getValue << '\n';

    // to fix syntax bug add perentheses
    std::cout << getValue() << '\n';
    */

    /*
    int x{getInteger()};
// add a debug statment that prints the value of the variable x
std::cerr << "main::x = " << x << "\n";

    int y{getInteger()};
// add a debyg statement that prints the value of the variable y
std::cerr << "main::y = " << y << "\n"; 
    
    // passed the wrong argument to add. semantic bug: passing the literal 5 to
    // add 
    //int z{add(x,5)};

    // to fix the semantic bug change the argument from 5 to y
    int z{add(x,y)};

// add a debug statement that prints the value of the variable z
std::cerr << "main::z = " << z << "\n";
    printResult(z);
    */

// add a debug statement
std::cerr << "main() called \n";

    int x{getInteger()};
// add a debug statment that prints the value of the variable x
std::cerr << "main::x = " << x << "\n";

    int y{getInteger()};
// add a debyg statement that prints the value of the variable y
std::cerr << "main::y = " << y << "\n"; 

    int z{add(x,y)};
// add a debug statement that prints the value of the variable z
std::cerr << "main::z = " << z << "\n";

    printResult(z);

    return 0;
}
