#include "constants.h"
#include <iostream>

int getPositiveInteger()
{
    std::cout << "Enter a positive number: ";
    int input{};
    std::cin >> input;
    return input;
}

int getStudentNumber()
{
    std::cout << "How many student are in your class? ";
    int numStudents{};
    std::cin >> numStudents;
    return numStudents;
}

// define a function that sums all the parameter passed to it while the program
// is running
int accumulate(int x)
{
    static int sum{};
    sum += x;
    return sum;
}

int main()
{
    /*
    int num{getPositiveInteger()};
    // block not inside braces
    //if (num < 0)
    //    std::cout << "Negative number entered. Making it positive.\n";
    //    num = -num;
    

    if (num < 0)
    {
        std::cout << "Negative number entered. Making it positive.\n";
        num = -num;
    }

    std::cout << "You entered " << num << '\n';
    */

    /*
    int numStudents{getStudentNumber()};
    
    if (numStudents > constants::maxClassSize)
        std::cout << "There are too many students in this class.\n";
    else
        std::cout << "This class is not too larger.\n";
    */

    std::cout << accumulate(4) << '\n';
    std::cout << accumulate(3) << '\n';
    std::cout << accumulate(2) << '\n';
    std::cout << accumulate(1) << '\n';

    return 0;
}
