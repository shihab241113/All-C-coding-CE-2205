#include <stdio.h>
#include <math.h>

int main()
{
    float x1, y1, x2, y2, distance;

    // Input coordinates
    printf("Enter x1 and y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter x2 and y2: ");
    scanf("%f %f", &x2, &y2);

    // Calculate distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output
    printf("Distance = %.2f\n", distance);

    return 0;
}
