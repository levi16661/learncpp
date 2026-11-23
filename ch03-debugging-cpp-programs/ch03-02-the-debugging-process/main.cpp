#include <iostream>

// this function has 2 integer parameters and returns their sum as an integer
int add(int x, int y)
{
    // doesn't return the correct result due to the semantic bug of using
    // the wrong operator 
    //return x - y;

    // to fix the bug change the operator- to the operator+
    return x + y;
}

int main()
{
    std::cout << "5 + 3 = " << add(5,3) << '\n';
    return 0;
}
