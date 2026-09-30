#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b , c ;
    float largest, middle;

    printf("Enter the value of a", a);
    scanf("%f", &a);

    printf("Enter the value of b", b);
    scanf("%f", &b);

    printf("Enter the value of c", c);
    scanf("%f", &c);

    //Find largest value
     if ( a >=b && a >= c )
     {
         largest = a ;

     }
    else if (b >=a && b >= c)

     {
         largest = b ;

     }
     else

     {
         largest = c ;

     }

    //Find Middle
    if ((a >= b && a <=c) || (a <= b && a >=c))
    {
        middle = a ;
    }
    else if ((b >= a && b <=c) || (b<= a && b >=c))


    {
        middle  = b ;
    }

    else
    {
        middle = c ;
    }

    printf("Largest number = %f\n" , largest);
    printf("Middle number = %f0\n" , middle);

    return 0;
}
