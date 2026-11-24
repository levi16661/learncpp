#include <iostream>

/*
int readNumber(int x)
{
    std::cout << "Please enter a number: ";
    std::cin >> x;
    return x;
}
*/

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}


/*
int readNumber()
{
    std::cout << "Please enter a number: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The quotient is: " << x << '\n';
}
*/

int readNumber()
{
    std::cout << "Please enter a number: ";
    // x is of type character
    //char x{};

    // change x to type integer
    int x{};
    std::cin >> x;
    return x;
}

int main()
{
    /*
    int x{};
    // this returns the number the user entered but didn't change the value
    // of x;
    //readNumber(x);
    //x = x + readNumber(x);

    // fix
    x = readNumber(x) + readNumber(x);
    writeAnswer(x);
    */

    /*
    int x{};
    int y{};
    x = readNumber();
    // reassinging x with the second entered number
    //x = readNumber();

    // fix
    y = readNumber();
    writeAnswer(x/y);
    */

    int x{readNumber()};
    int y{readNumber()};
    writeAnswer(x + y);

    return 0;
}
