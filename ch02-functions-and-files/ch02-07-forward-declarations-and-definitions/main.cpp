#include<iostream>

// declare function add that has 3 integer parameters and returns an integer
int add (int x, int , int z);

/*
// declare function doMath that has 4 integer parameters and returns and integer
//int doMath(int first, int second, int third, int fourth);
*/

int main ()
{
    std::cout << "The sum of 3, 4 and 5 is " << add(3,4,5) << ".\n";

    //std::cout << "The sum of 3 and 4 times 5 divided by 6 is " << doMath(3,4,5,6) << ".\n";
    
    return 0;
}

// define function add that has 3 integer parameters and returns their sum
int add (int x, int y, int z)
{
    return x + y + z;
}

/*
// define function doMath that has 4 integer parameters and returns the sum of
// the first and the product of the second and the third divided by the fourth
int doMath(int first, int second, int third, int fourth)
{
    return first + second * third / fourth;
}
*/
