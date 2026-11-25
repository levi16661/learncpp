#include <iostream>

//declare a constexpr function
constexpr int cmax(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    // declaraion of constexpr variables
    constexpr double gravity{9.8};
    constexpr int sum{4 + 5};
    constexpr int something{sum};

    std::cout << gravity << '\n' << sum << '\n' << something << '\n';

    return 0;
}
