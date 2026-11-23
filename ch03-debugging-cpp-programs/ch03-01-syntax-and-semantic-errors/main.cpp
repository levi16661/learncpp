#include <iostream>

// this function has 2 integer parameters and returns their sum as an integer
int add(int x, int y)
{
    // doesn't return the correct result due to the semantic error of using
    // the wrong operator 
    return x - y;
}

int main()
{
    std::cout << "5 + 3 = " << add(5,3) << '\n';
    return 0;
}
