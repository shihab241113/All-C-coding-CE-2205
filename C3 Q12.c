#include <stdio.h>
#include <math.h>

int main()
{
    double sin_theta, cos_theta;
    double theta;

    printf("Enter the value of sin(theta): ");
    scanf("%lf", &sin_theta);

    printf("Enter the value of cos(theta): ");
    scanf("%lf", &cos_theta);

    // Calculate theta in radians
    theta = atan2(sin_theta, cos_theta);

    // Convert radians to degrees
    theta = theta * 180 / M_PI;

    // Convert negative angle to 0-360 degree range
    if (theta < 0)
    {
        theta = theta + 360;
    }

    printf("Theta = %.2lf degrees\n", theta);

    return 0;
}
