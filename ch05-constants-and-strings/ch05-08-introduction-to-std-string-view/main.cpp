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
    using namespace std::string_literals;

    std::string_view s1{"Hello world!"};
    std::cout << s1 << '\n';
    printStringView(s1);

    std::string_view s2{"Hello world!"s};
    std::cout << s2 << '\n';
    printStringView(s2);

    std::string_view s3{s2};
    std::cout << s3 << '\n';
    printStringView(s3);
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
