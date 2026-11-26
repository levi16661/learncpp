# include <iostream>

int main()
{
    /*
    int x{5};
    {
        int x{7};
        std::cout << x << " + " << y << " = " << x + y << '\n';
    }
    */

    std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;

    std::cout << "Enter a larger integer: ";
    int larger{};
    std::cin >> larger;

    if (larger < smaller)
    {
        std::cout << "Swapping the values\n";
        int temp{larger};
        larger = smaller;
        smaller = temp;
    }

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';

    return 0;
}
