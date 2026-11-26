#include <iostream>
#include <string_view>

// this function takes an integer and returns the quantity phrase
std::string_view getQuantityPhrase(int numApples)
{
    if (numApples < 0)
        return "negative";
    else if (numApples == 0)
        return "no";
    else if (numApples == 1)
        return "a single";
    else if (numApples == 2)
        return "a couple of";
    else if (numApples == 3)
        return "a few";
    else
        return "many";
}

std::string_view getApplesPluralised(int numApples)
{
    return (numApples == 1) ? "apple" : "apples"; 
}

int getNumApples()
{
    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;
    return numApples;
}

int main()
{
    constexpr int maryApples{3};
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' '
              << getApplesPluralised(maryApples) << ".\n";

    int numApples{getNumApples()};
    std::cout << "You have " << getQuantityPhrase(numApples) << ' '
              << getApplesPluralised(numApples) << ".\n";
    
    return 0;
}
