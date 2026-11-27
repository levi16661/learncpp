#include <iostream>

/*
// declare an unnamed namespace
namespace
{
    void printHello()
    {
        std::cout << "Hello world!\n"; 
    }
}
*/

// declare an inline namespace
namespace v1
{
    void myFcn() 
    {
        std::cout << "v1" << '\n';
    }
}

inline namespace v2
{
    namespace
    {
        void myFcn()
        {
            std::cout << "v2" << '\n';
        }
    }
}

int main()
{
    /*
    printHello();
    */

    v1::myFcn();
    v2::myFcn();
    myFcn();

    return 0;
}
