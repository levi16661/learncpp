#include <iostream>

namespace Foo
{
    int calculate(int x, int y)
    {
        return x + y;
    }
}

namespace Goo
{
    int calculate(int x, int y)
    {
        return x - y;
    }
}

int main()
{
    std::cout << Foo::calculate(4,3) << '\n';
    std::cout << Goo::calculate(4,3) << '\n';
    return 0;
}
