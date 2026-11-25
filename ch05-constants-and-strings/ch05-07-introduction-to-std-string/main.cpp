#include <iostream>
#include <string>

int main()
{
    /*
    std::string name{"Levi"};
    std::cout << "Name: " << name << '\n';

    name = "Christine";
    std::cout << "Name: " << name << '\n';

    name = "Jon";
    std::cout << "Name: " << name << '\n';
    */

    /*
    std::string myID{"45"};
    std::cout << myID << '\n';
    */
   
    /*
    std::cout << "Enter you name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter you favourite colour: ";
    std::string colour{};
    std::getline(std::cin >> std::ws, colour);

    std::cout << "Your name is " << name << " and your favourite colour is " << colour << ".\n";
    */

    /*
    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;

    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << ", you picked " << choice << ".\n";
    */

    /*
    std::cout << "Now enter your name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    int nameLength{static_cast<int>(name.length())};
    std::cout << name << " has " << nameLength << " characters.\n";
    */

    /*
    // create std::string literal
    using namespace std::string_literals;
    std::cout << "Levi"s << '\n';
    */

    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    int nameLength{static_cast<int>(name.length())};

    std::cout << "Enter your age: ";
    int age{};
    std::cin >> age;

    std::cout << "Your age + length of name is: " << age + nameLength << '\n';
    return 0;
}
