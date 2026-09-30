#include <stdio.h>
#include <math.h>

int main()
{
     float x1, y1, x2, y2, x3, y3;
     float area;

      printf("Enter x1 and y1: ");
      scanf("%f %f", &x1, &y1);

      printf("Enter x2 and y2: ");
      scanf("%f %f", &x2, &y2);

    printf("Enter x3 and y3: ");
    scanf("%f %f", &x3, &y3);

    // Calculate area
    area = 0.5 * fabs(x1 * (y2 - y3)+ x2 * (y3 - y1)+ x3 * (y1 - y2));

    printf("Area of triangle = %.2f\n", area);

    return 0;
}
