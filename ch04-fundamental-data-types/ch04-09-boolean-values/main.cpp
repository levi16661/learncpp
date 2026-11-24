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

int main()
{
    /*
    // initialisation of boolean variables
    bool b1{true};
    std::cout << b1 << '\n';

    bool b2{false};
    std::cout << b2 << '\n';

    std::cout << !b1 << '\n';
    std::cout << !b2 << '\n';
    
    // assign b1 the value false
    b1 = false;

    // value-initialisation of boolian variables
    bool b3{};
    std::cout << b3 << '\n';
    */
    
    /*
    std::cout << true << '\n';
    std::cout << false << '\n';

    std::cout << std::boolalpha;
    
    std::cout << true << '\n';
    std::cout << false << '\n';

    std::cout << std::noboolalpha;

    std::cout << true << '\n';
    std::cout << false << '\n';
    */

    /*
    bool bfalse{0};
    bool btrue{0};
    bool bno{2};

    std::cout << bfalse << btrue << bno << '\n';
    */
    
    /*
    std::cout << std::boolalpha;

    bool b1 = 4;
    std::cout << b1 << '\n';

    bool b2 = 0;
    std::cout << b2 << '\n';
    */

    /*
    bool b{};
    std::cout << "Enter a boolean value: ";

    std::cin >> std::boolalpha;
    std::cin >> b;

    std::cout << std::boolalpha;
    std::cout << "You entered: " << b << '\n';
    */
    int x{getInteger()};
    int y{getInteger()};

    std::cout << std::boolalpha;
    std::cout << "Are " << x << " and " << y << " equal? ";
    std::cout << isEqual(x,y) << '\n';

    return 0;
}
