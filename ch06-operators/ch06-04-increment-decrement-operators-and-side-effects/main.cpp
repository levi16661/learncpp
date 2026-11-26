#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int main()
{
    /*
    int x{5};
    int y{++x};

    std::cout << x << ' ' << y << '\n';

    int z{5};
    int a{z++};

    std::cout << z << ' ' << a << '\n';
    */

    /*
    int x{5};
    int y{5};
    
    std::cout << x << ' ' << y << '\n';
    std::cout << ++x << ' ' << --y << '\n';
    std::cout << x << ' ' << y << '\n';
    std::cout << x++ << ' ' << y-- << '\n';
    std::cout << x << ' ' << y << '\n';
    */

    int x{5};
    int value{add(x,++x)};

    std::cout << value << '\n';
    return 0;
}
