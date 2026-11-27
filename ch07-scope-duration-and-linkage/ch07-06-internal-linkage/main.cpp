#include <iostream>

// declare internal global variables
static int g_x;
static int g_y{1};
const int g_z{2};
constexpr int g_a{3};

// declare internal function
static void printInteger(int x) 
{
    std::cout << x << '\n';
}

int main()
{
    std::cout << g_x << '\n' << g_y << '\n' <<  g_z << '\n' << g_a << '\n'; 
    printInteger(1);
    return 0;
}
