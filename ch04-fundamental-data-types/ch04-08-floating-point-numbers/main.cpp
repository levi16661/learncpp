#include <iostream>
#include <iomanip>
#include <limits>

// this function check if the compiler is IEEE 754 compatible
int main()
{
    /*
    std::cout << std::boolalpha;
    std::cout << "float: " << std::numeric_limits<float> :: is_iec559 << '\n';
    std::cout << "double: " << std::numeric_limits<double> :: is_iec559 
              << '\n';
    std::cout << "long double: " << std::numeric_limits<long double> :: is_iec559 
              << '\n'; 
    */

    /*
    // initialising floating point variables
    float f{};
    double d{};
    long double ld{};
    int ia{5};
    float fa{5.0f};
    double da{5.0};
    int ib{0};
    double db{0.0}
    */
    
    /*
    std::cout << 5.0 <<'\n';
    std::cout << 6.7f << '\n';
    std::cout << 9876543.21 << '\n';
    */

    /*
    std::cout << 9.87654321f <<'\n';
    std::cout << 987.654321f << '\n';
    std::cout << 987654.321f << '\n';
    std::cout << 9876543.21f << '\n';
    std::cout << 0.0000987654321f << '\n';
    */

    /*
    std::cout << std::setprecision(17);
    std::cout << 3.33333333333333333333333333333333333333f << '\n';
    std::cout << 3.33333333333333333333333333333333333333 << '\n'; 
    */
     
    /*
    float f{123456789.0f};
    std::cout << std::setprecision(9);
    std::cout << f << '\n';
    */

    /*
    double d{0.1};
    std::cout << d << '\n';
    std::cout << std::setprecision(17);
    std::cout << d << '\n';
    */

    /*
    std::cout << std::setprecision(17);
    double d1{0.1};
    std::cout << d1 << '\n';

    double d2{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
    std::cout << d2 << '\n';
    */

    double zero {0.0};

    double posinf {5.0/zero};
    std::cout << posinf << '\n';

    double neginf {-5.0/zero};
    std::cout << neginf << '\n';

    double poszero {0.0/posinf};
    std::cout << poszero << '\n';
    
    double negzero{-0.0/posinf};
    std::cout << negzero << '\n';
    
    double nan{zero/zero};
    std::cout << nan << '\n';

    return 0;
}
