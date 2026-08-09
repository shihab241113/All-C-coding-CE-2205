#include <stdio.h>

int main()
{
   int a=10, b=20, c=30  ;
   int temp ;
   printf("Before swapping :\n");
   printf(" a = %d, b = %d , c = %d\n\n", a,b,c );

   temp =c;
   c=b ;
   b=a;
   a=temp;

    printf("After swapping ( a -> b, b->c , c-> a) :\n");
    printf(" a = %d, b = %d , c = %d\n\n", a,b,c );

    return 0;
}
