#include <stdio.h>

int main()
{
    int a1 , a2 , a3, a4;
    int n;
    printf("Enter Any Four Degit Number : ");
    scanf("%i", &n);

    a1= n/1000 ;
    a2 = (n/100) % 10 ;
    a3 = (n/10) % 10 ;
    a4 = n % 10 ;

    putchar( a1 + '0' );
    putchar( a2 + '0' );
    putchar( a3 + '0' );
    putchar( a4 + '0' );

    return 0;
}
