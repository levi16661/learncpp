#include <iomanip>
#include <iostream>
#include <climits>

int main()
{
    std::cout << "A byte is " << CHAR_BIT << "bits\n\n";

    std::cout << std::left;

    // use the sizeof operator to determine the number of bytes used by each
    // fundamental data type

    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) 
              << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) 
              << " bytes\n";
    
    int x{};
    // use the sizeof operator to determine the number of bytes of the 
    // variable x
    std::cout << '\n' << "x is " << sizeof(x) << " bytes" << '\n';
    return 0;
}
