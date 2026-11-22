#include<iostream>

// declare the function add that has 2 integer parameters and returns an integer
int add(int x, int y);

// decare the function getInteger that returns a integer
int getInteger();

int main()
{
    /*
    // print the sum of 3 and 4 to the console
    std::cout << "The sum of 3 and 4 is " << add(3,4) << ".\n";
    */
    
    // get 2 integers from the user
    int x{getInteger()};
    int y{getInteger()};

    // output the sum of the 2 integers to the console
    std::cout << x << " + " << y << " is " << x + y << ".\n";
    return 0;
}
