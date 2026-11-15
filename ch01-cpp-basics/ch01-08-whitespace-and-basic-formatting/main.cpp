// preprocessor directive must be placed on seperate lines
#include <iostream>
#include <string>

int main()
// new line for opening brace
{
    /* statements within braces should be indented by a tab or 4 spaces from 
    the opening brace*/
    std:: cout << "Hello world" << "\n";
    // lines over 80 characters should be split into multiple lines
    /* a line that is split at an operator, the operator should be at the 
    begining of the second line*/
    std::cout << 3 + 4 
              + 5 + 6
              * 7 * 8 << "\n"; 
    // align values or comments
    int cost =          57;
    int pricePerItem =  24;
    int value =         5;
    int numberOfItems = 17;
    return 0;
} 
