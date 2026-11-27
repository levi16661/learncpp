// declare global variable in namespace
namespace constants
{
    constexpr double g_gravity{9.81};
}

// define function (with external linkage) to access global variable from
// other files
double getGravity()
{
    return constants::g_gravity;
}

// define function that takes time and gravity and returns the velocity
double instantVelocity(double time, double gravity)
{
    return time * gravity;
}
