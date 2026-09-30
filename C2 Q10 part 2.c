#include <stdio.h>
#include <stdlib.h>

int main()
{   int d1, d2, d3, d4 ;
    int n ;

    printf("Enter Any Four Digit  :",n);

    d1 = getchar() - '0';
    d2 = getchar() - '0';
    d3 = getchar() - '0';
    d4 = getchar() - '0';


    n = d1 * 1000 + d2 * 100 + d3 * 10 + d4;

    printf("Number = %i\n", n);

    return 0;
}

