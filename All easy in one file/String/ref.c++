#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159265358979323846

double degToRad(double deg)
{
    return deg * PI / 180.0;
}

double f(double theta_deg, double x, double t)
{
    // Convert theta from degrees to radians for cmath functions
    double theta_rad_1_75 = degToRad(1.75 * theta_deg);
    double theta_rad_0_25 = degToRad(0.25 * theta_deg);

    return x * std::sin(theta_rad_1_75) - t * std::cos(theta_rad_0_25);
}

double solveForTheta(double x, double t)
{
    // Search range for theta. 0 to 90 degrees is a safe range.
    double low = 0.0;
    double high = 90.0;

    for (int i = 0; i < 100; ++i)
    {
        double mid = low + (high - low) / 2.0;
        double f_mid = f(mid, x, t);

        if (f_mid == 0.0)
        {
            // Found exact root
            return mid;
        }
        else if (f_mid > 0)
        {
            // Root is in the lower half
            high = mid;
        }
        else
        {
            // Root is in the upper half
            low = mid;
        }
    }

    // Return the midpoint of our final, very small range
    return (low + high) / 2.0;
}

int main()
{
    double x, t;

    // Read the two input values
    std::cin >> x >> t;

    double theta = solveForTheta(x, t);

    // Print the output formatted to two decimal places, as in the example.
    std::cout << std::fixed << std::setprecision(2) << theta << std::endl;

    return 0;
}