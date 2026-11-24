#include <iomanip>
#include <climits>
#include <cstdint>
#include <iostream>

int main()
{
    // initialise a variable of type 32-bit fixed width integer
    std::int32_t x{32767};
    x = x + 1;
    std::cout << x << '\n';

    // initialise a variable of type 8-bit fixed width integer
    std::int8_t y{65};
    std::cout << y << '\n';

    // determing the size of the least and fast integer types
    std::cout << "A byte is " << CHAR_BIT << "bits\n\n";

    std::cout << std::left;

    std::cout << std::setw(16) << "least 8: " 
              << sizeof(std::int_least8_t)*CHAR_BIT << " bits\n";
    std::cout << std::setw(16) << "least 16: " 
              << sizeof(std::int_least16_t)*CHAR_BIT << " bits\n";
    std::cout << std::setw(16) << "least 32: " 
              << sizeof(std::int_least32_t)*CHAR_BIT << " bits\n";
    std::cout << '\n';
    std::cout << std::setw(16) << "fast 8: " 
              << sizeof(std::int_fast8_t)*CHAR_BIT << " bits\n";
    std::cout << std::setw(16) << "fast 16: " 
              << sizeof(std::int_fast16_t)*CHAR_BIT << " bits\n";
    std::cout << std::setw(16) << "fast 32: " 
              << sizeof(std::int_fast32_t)*CHAR_BIT << " bits\n";


    return 0;
}
