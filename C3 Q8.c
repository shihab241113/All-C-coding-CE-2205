#include <stdio.h>

int main()
{
    float a, b, c, x;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

    printf("Enter the value of x: ");
    scanf("%f", &x);

    if (x < a && x < b && x < c)
    {
        printf("x is smaller than all three numbers.\n");
    }
    else
    {
        printf("x is NOT smaller than all three numbers.\n");
    }

    if (x < a || x < b || x < c)
    {
        printf("x is smaller than one or more of the three numbers.\n");
    }
    else
    {
        printf("x is not smaller than any of the three numbers.\n");
    }

    return 0;
}
