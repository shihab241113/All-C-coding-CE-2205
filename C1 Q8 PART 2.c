#include <stdio.h>


int main()
{   int a=10 , b=20 , c=30 ;

    printf("Before swapping :\n");
    printf("a = %d , b = %d , c = %d\n\n", a,b,c);

    a= a+b+c ; //the sum (10 + 20 + 30 = 60)
    b = a-(b+c); //60 - (20 + 30) = 10 new value for 'b' (gets old 'a')
    c=a- (b+c); //60 - (10 + 30) = 20 new value for 'c' (gets old 'b')
    a= a-(b+c); // 60 - (10 + 20) = 30 new value for 'a' (gets old 'c')

    printf("After swapping ( a->b, b->c , c->a):\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
