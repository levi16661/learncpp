#include <iostream>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    return input;
}

// constexpr max function
template <typename T>
constexpr T constMax(T x, T y)
{
    return (x > y ? x : y);
}

// constexpr absolute function
template <typename T>
constexpr T constAbs(T x)
{
    return (x > 0 ? x : -x);
}

// return true if the difference between a and b is within epsilon / 100 
// percent of the larger of a and b
constexpr bool approximatelyEqualRelative(double a, double b, double relativeEpsilon)
{
    return (constAbs(a - b) <= relativeEpsilon 
                               * constMax(constAbs(a), constAbs(b)));
}

// returns true if the difference between a and b is less that absolute epsilon
// relative epsillon / 100 percent of the larger of a and b
constexpr bool approximatelyEqualAbsoluteRelative(double a, double b, 
                                        double absoluteEpsilon, 
                                        double relativeEpsilon)
{
    if (constAbs(a - b) < absoluteEpsilon)
        return true;
    return (constAbs(a - b) <= relativeEpsilon 
                               * constMax(constAbs(a),  constAbs(b)));
}

int main()
{
    /*
    int x{getInteger()};
    int y{getInteger()};

    if (x == y)
        std::cout << x << " equals " << y << '\n';
    
    if (x != y)
        std::cout << x << " does not equal " << y << '\n';

    if (x > y)
        std::cout << x << " is greater than " << y << '\n';

    if (x < y)
        std::cout << x << " is less than " << y << '\n';

    if (x >= y)
        std::cout << x << " is greater than or equal to " << y << '\n';
    
    if (x <= y)
        std::cout << x << " is less than or equal to " << y << '\n';
    */

    /*
    constexpr double d1{100.0-99.99};
    constexpr double d2{10.0-9.99};
    
    if (d1 == d2)
        std::cout << "d1 == d2" << '\n';
    else if (d1 < d2)
        std::cout << "d1 < d2" << '\n';
    else
        std::cout << "d1 > d2" << '\n';
    */

    constexpr double d1{0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
    constexpr double d2{1.0};
    constexpr double d3{d1 - d2};
    constexpr double d4{0.0};
    constexpr double absEps{10e-12};
    constexpr double relEps{10e-8};

    std::cout << std::boolalpha;

    std::cout << "Are d1 and d2 approximately equal (relative)? ";
    if (approximatelyEqualRelative(d1, d2, relEps))
        std::cout << "Yes.\n";
    else
        std::cout << "No.\n";
     
    std::cout << "Are d3 and d4 approximately equal (relative)? ";
    if (approximatelyEqualRelative(d3, d4, relEps))
        std::cout << "Yes.\n";
    else
        std::cout << "No.\n";

    std::cout << "Are d1 and d2 approximately equal (absolute and relative)? ";
    if (approximatelyEqualAbsoluteRelative(d1, d2, absEps, relEps))
        std::cout << "Yes.\n";
    else
        std::cout << "No.\n";

    std::cout << "Are d3 and d4 approximately equal (absolute and relative)? ";
    if (approximatelyEqualAbsoluteRelative(d3, d4, absEps, relEps))
        std::cout << "Yes.\n";
    else
        std::cout << "No.\n";  

    return 0;
}
