#include <stdio.h>
#include <math.h>

int main()
{
    float h, r, area;

    printf("Enter the length of cylinder: ");
    scanf("%f", &h);

    printf("Enter the radius of cylinder: ");
    scanf("%f", &r);

       // Total surface area
    area = 2 * M_PI*r *(r + h);


    printf("Area of cylinder = %.2f\n", area);

    return 0;
}
