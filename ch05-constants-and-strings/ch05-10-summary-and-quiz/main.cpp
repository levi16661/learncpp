// no longer need a specific minimum integer width
//#include <cstdint>
#include <iostream>
#include <string>
#include <string_view>

std::string getName(int x)
{
    std::cout << "Enter the name of person #" << x << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;
}

int getAge(std::string_view name)
{
    std::cout << "Enter the age of " << name << ": ";
    int age{};
    std::cin >> age;
    return age;
}

void printOlder(std::string_view name1, std::string_view name2, int age1, int age2)
{
    if (age1 > age2)
        std::cout << name1 << " (age " << age1 << ") is older than " << name2 
                  << " (age " << age2 << ").\n";
    else if (age1 < age2)
        std::cout << name2 << " (age " << age2 << ") is older than " << name1 
                  << " (age " << age1 << ").\n"; 
    else
        std::cout << name1 << " (age " << age1 << ") and " << name2 << " (age "
                  << age2 << ") are the same age.\n";  
}

int main()
{
    /*
    std::cout << "How old are you?\n";

    // uint8_t variables are interpreted as a char and age doesn't require a
    // specific minimum integer width
    //std::uint8_t age{};
     age{};
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas: ";

    constexpr int minimumAge{16}
    if (age >= minimumAge)
        std::cout << "Yes";
    else
        std::cout << "No";

    // this is a multicharacter literal
    //std::cout << '.\n';
    std::cout << ".\n";
    */

    const std::string name1{getName(1)};
    const int age1{getAge(name1)};

    const std::string name2{getName(2)};
    const int age2{getAge(name2)};

    printOlder(name1, name2, age1, age2);
 
    return 0;
}
