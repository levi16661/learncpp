#include <iostream>
int main()
{
    //int x{3 + 4};
    // 1. optimise using constant folding
    //int x{7};
    // 3. optimise using dead code
    //std::cout << x << '\n';
    // 2. optimise using constant propogation
    std::cout << 7 << '\n';
    return 0;
}
