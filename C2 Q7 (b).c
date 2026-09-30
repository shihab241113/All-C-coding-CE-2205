#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, angle, radian, area;

    printf("Enter two sides: ");
    scanf("%f %f", &a, &b);

    printf("Enter the angle between them in degree: ");
    scanf("%f", &angle);

    //  Convert Degree to radian
       radian = angle*M_PI / 180;

    // Calculate Area
       area = 0.5*a*b*sin(radian);

    printf("Area of triangle = %.2f\n", area);

    return 0;
}
