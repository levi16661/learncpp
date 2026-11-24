#include <cstdint>
#include <iostream>

/*
void print(double x)
{
    std::cout << x << '\n';
}
*/

void print(int x)
{
    std::cout << x << '\n';
}

char getChar()
{
    std::cout << "Enter a keyboard character: ";
    char ch{};
    std::cin >> ch;
    return ch;
}


int asciiCode(char ch)
{
    return ch;
}
int main()
{
    /*
    print(5);

    int y{5};
    print(y);
    */
    
    /*
    print(5.5);
    */
    
    /*
    char ch{97};
    std::cout << ch << " has value " << static_cast<int>(ch) << '\n';
    */


    /*
    unsigned int u1{5};
    int s1{static_cast<int>(u1)};
    std::cout << s1 << '\n';

    int s2{5};
    unsigned int u2{static_cast<unsigned int>(s2)};
    std::cout << u2 << '\n';
    */
    
    /*
    int s{-1};
    std::cout << static_cast<unsigned int>(s) << '\n';

    unsigned int u {4294967295};
    std::cout << static_cast<int>(u) << '\n';
    */
    
    /*
    std::cout << "Enter a number between 0 and 127: ";
    std::int8_t myInt{};
    //std::int8_t myInt{65};
    std::cin >> myInt;
    //std::cout << myInt << '\n';
    //std::cout << static_cast<int>(myInt) << '\n';
    std::cout << "You entered: " << static_cast<int>(myInt) << '\n';
    */

    char ch{getChar()};
    std::cout << "You entered '" << ch << "', which has ASCII code "
              << asciiCode(ch) << ".\n";

    return 0;
}
