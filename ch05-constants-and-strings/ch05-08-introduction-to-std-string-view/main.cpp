#include <iostream>
#include <string>
#include <string_view>

void printStringView(std::string_view str)
{
    std::cout << str << '\n';
} 
int main()
{
    /*
    std::string_view s{"Hello world!"};
    printStringView(s);
    */

    /*
    // string view initialisation

    std::string_view s1{"Hello world!"};
    std::cout << sv1 << '\n';
    printStringView(sv1);

    std::string s{"Hello world!"}
    std::string_view sv2{s};
    std::cout << sv2 << '\n';
    printStringView(sv2);

    std::string_view sv3{sv2};
    std::cout << sv3 << '\n';
    printStringView(sv3);
    */

    /*
    std::string name{"Levi"};
    std::string_view sv{name};
    std::cout << sv << '\n';

    sv = "John";
    std::cout << sv << '\n';

    std::cout << name << '\n';
    */

    // string_view literals
    using namespace std::string_literals;
    using namespace std::string_view_literals;
    std::cout << "C-style literal\n";
    std::cout << "std::string literal\n"s;
    std::cout << "std::string_view literal\n"sv;


    return 0;
}
