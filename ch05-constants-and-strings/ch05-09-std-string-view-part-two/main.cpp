#include <iostream>
#include <string_view>

int main()
{
    std::string_view str{"Peach"};
    std::cout << str << '\n';

    // remove 1 character from the left of the view
    str.remove_prefix(1);
    std::cout << str << '\n';

    // remove 1 character from the right of the view
    str.remove_suffix(2);
    std::cout << str << '\n';

    str = "Peach";
    std::cout << str << '\n';
}
