#include <iostream>

// define a global variable
constexpr bool g_firstCall{true};

int getInteger(bool isFirstCall)
{
    if (isFirstCall)
    {
        std::cout << "Enter and integer: " ;
    }
    else
    {
        std::cout<< "Enter another integer: ";
    }

    int input{};
    std::cin >> input;
    return input;
}

void incrementAndPrint()
{
    int value{1};
    ++value;
    std::cout << value << '\n';
}

void incrementAndPrintStatic()
{
    static int s_value{1};
    ++s_value;
    std::cout << s_value << '\n';
}

int generateID()
{
    static int s_itemID{0};
    return s_itemID++;
}
int main()
{
    /*
    incrementAndPrint();
    incrementAndPrint();
    incrementAndPrint();

    incrementAndPrintStatic();
    incrementAndPrintStatic();
    incrementAndPrintStatic();
    */

    int x{getInteger(g_firstCall)};
    int y{getInteger(!g_firstCall)};

    std::cout << x << " + " << y << " = " << (x + y) << '\n';

    return 0;
}
