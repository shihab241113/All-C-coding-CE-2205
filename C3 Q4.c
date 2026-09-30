#include <stdio.h>
#include <stdlib.h>

int main()
{    float a , b , c ;
    float largest,smallest, middle;

    printf("Enter the value of a = ", a);
    scanf("%f", &a);

    printf("Enter the value of b = ", b);
    scanf("%f", &b);

    printf("Enter the value of c = ", c);
    scanf("%f", &c);

    //the smallest
    if ( a <= b && a<= c )
    {
        smallest = a ;
    }

    else if ( b <=a && b <= c)
    {
        smallest = b ;
    }

    else
    {
        smallest = c;
    }

    //the largest

    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }


    //for middle
    if (a != smallest && a != largest)
    {
        middle = a ;
    }
    else if (b != smallest && b != largest)
    {
        middle = b;
    }
    else
    {
        middle = c;
    }


    printf("%.2f %.2f %.2f", smallest, middle, largest);

    return 0;
}
