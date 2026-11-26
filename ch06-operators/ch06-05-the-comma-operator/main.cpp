#include <iostream>

int main()
{
    /*
    int x{1};
    int y{2};

    std::cout << (++x, ++y) << '\n';
    */

    constexpr int a{1};
    constexpr int b{2};
    int z{};

    z = (a,b);
    std::cout << z << '\n';

    z = a, b;
    std::cout << z << '\n';

    return 0;
}
