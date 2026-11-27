#include <iostream>

// declare internal global variables
static int g_x;
static int g_y{1};
const int g_z{2};
constexpr int g_a{3}

int main()
{
    std::cout << g_x << '\n' << g_y '\n' <<  g_z << '\n' << g_a << '\n'; 

}
