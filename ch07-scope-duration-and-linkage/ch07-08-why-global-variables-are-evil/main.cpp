#include <iostream>

// foward declare functions
double getGravity();
double instantVelocity(double time, double gravity);


int main()
{
    std::cout << "The earth's gravity is " << getGravity() << "m/s/s.\n";
    std::cout << "The instantaneous velocity of an object 5 seconds after being " 
                 "dropped in earth's gravity is "
              << instantVelocity(5, getGravity()) << "m/s.\n"; 

}
