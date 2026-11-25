#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double input{};
    std::cin >> input;
    return input;
}

char getMathmaticalOperator()
{
    std::cout << "Enter a +, -, * or /: ";
    char input{};
    std::cin >> input;
    return input;
}

void printResult(double x, double y, char mo)
{
    if (mo == '+')
        std::cout << x << ' ' << mo << ' ' << y << " is " << x + y << '\n';
    else if (mo == '-')
        std::cout << x << ' ' << mo << ' ' << y << " is " << x - y << '\n';
    else if (mo == '*')
        std::cout << x << ' ' << mo << ' ' << y << " is " << x * y << '\n';
    else if (mo == '/')
        std::cout << x << ' ' << mo << ' ' << y << " is " << x / y << '\n';
}

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double towerHeight;
    std::cin >> towerHeight;
    return towerHeight;
}

double calculateBallHeight(double towerHeight, double time)
{
    double distanceFallen{9.8*time*time/2};
    if (towerHeight > distanceFallen)
         return towerHeight - distanceFallen;
    else
        return 0.0;
}

void printBallHeight(double time, double towerHeight)
{
    std::cout << "At " << time << " seconds, the ball is ";
    double ballHeight{calculateBallHeight(towerHeight, time)};
    if (ballHeight > 0.0)
        std::cout << "at height: " << ballHeight << " meters.\n";
    else
        std::cout << "on the ground.\n";
}

int main()
{
    // exercise #2
    /*
    double x{getDouble()};
    double y{getDouble()};
    char mo{getMathmaticalOperator()};
    printResult(x,y,mo);
    */

    // exercise #3
    double towerHeight{getTowerHeight()};
    for (int i = 0; i <= 5; ++i)
    {
        printBallHeight(i,towerHeight);
    }

    return 0;
}
