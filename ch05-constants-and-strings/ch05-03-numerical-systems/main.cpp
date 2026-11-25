#include <bitset>
#include <format>
#include <iostream>

int main()
{
    /*
    // octal literal
    int x {012};
    std::cout << x << '\n';

    // hexadeciamal literal
    int y{0xF};
    std::cout << y << '\n';

    // binary literal
    int z{0b11101010};
    std::cout << z << '\n';
    */

    /*
    // use single quote digit seperates
    std::cout << 0b1011'0010 << '\n';
    std::cout << 2'132'673'462 << '\n';
    */

    /*
    // printing octal, decimal and hexidecimal to the console
    int x{12};
    std::cout << x << '\n';
    std::cout << std::hex << x << '\n';
    std::cout << std::oct << x << '\n';
    std::cout << std::dec << x << '\n';
    */

    // printing binary to the console
    std::bitset<8> bin1{0b1100'0101};
    std::bitset<8> bin2{0xC5};

    std::cout << bin1 << '\n' << bin2 <<'\n';
    std::cout << std::bitset<4>{0b1010} <<'\n';

    std::cout << std::format("{:b}\n",0b1010);
    std::cout << std::format("{:#b}\n",0b1010);

    return 0;
}
