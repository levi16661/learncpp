#include "io.h"
#include <iostream>

int main()
{
    int xValue{readNumber()};
    int yValue{readNumber()};
    writeAnswer(xValue + yValue);
    return 0;

}
