#include <iostream>

// forward declare external variables
extern int g_x;
extern int g_y;
extern const int g_z;

// constextr can be extrnally linked but can't be forward declared 
extern constexpr int g_a{3};

int main()
{
    std::cout << g_x << '\n' << g_y << '\n' << g_z << '\n' << g_a << '\n';
    return 0;
}
