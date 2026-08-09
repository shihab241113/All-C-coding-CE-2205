#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a , b, c , p, q, r;
    float x ,y;

    printf("Enter the Value of a= ",a);
    scanf("%f", &a);
    printf("Enter the Value of b= ",b);
    scanf("%f", &b);
    printf("Enter the Value of c= ",c);
    scanf("%f", &c);
    printf("Enter the Value of p= ",p);
    scanf("%f", &p);
    printf("Enter the Value of q= ",q);
    scanf("%f", &q);
    printf("Enter the Value of r= ",r);
    scanf("%f", &r);


    x = (c*q-b*r)/(a*q-b*p);
    y = (c*p-a*r)/(b*p-a*q);

    if (a*q == b*p)

    printf(" No Results \nInvalid in put of a , q , b, p \n");


    else {
        printf("The value of x =%.2f\n",x);
        printf("The value of y =%.2f\n",y);
    }

    return 0;
}
