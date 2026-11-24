#include <iostream>

bool isEqual(int x, int y)
{
    return x == y;
}

int getInteger()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

// this function takes an integer and returns the absolute value
int abs(int x)
{
    if (x < 0)
        return -x;
    
    return x;
}

// this function take an integer between 0 and 9 and returns true if it is a
// prime and false otherwise
bool isPrime(int x)
{
    if ((x/2 > 1 && (x/2) * 2 == x) || (x/3 > 1 && (x/3) * 3 == x))
        return false;
    else
        return true;
}

// this function takes a double and returns true if it is above the minimum
// height and false otherwise
bool isTallEnough()
{
    std::cout << "How tall are you in cm?\n";
    double height{};
    std::cin >> height;

    return height >= 140.0;
}

int main()
{
    /*
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    
    if (x > 0)
        std::cout << "The value of x is positive\n";
    else if (x < 0)
        std::cout << "The value of x is negative\n";
    else
        std::cout << "The value of x is zero\n";
    */
   
    /*
    int x{getInteger()};
    int y{getInteger()};
    
    std::cout << x << " and " << y << " are ";

    if (! isEqual(x,y))
        std::cout << "not ";
    
    std::cout << "equal.\n";
    */

    /*
    std::cout << abs(4) << '\n';
    std::cout << abs(-3) << '\n';
    */

    /*
    std::cout << "Enter a number between 0 and 9: ";
    int num{};
    std::cin >> num;

    std::cout << "This is ";
    if (! isPrime(num))
        std::cout << "not ";
    std::cout << "a prime.\n";
    */

    if (isTallEnough())
        std::cout << "Enjoy the ride!\n";
    else
        std::cout << "Sorry, short ass!\n";  

    return 0;
}
