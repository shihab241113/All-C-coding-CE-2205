#include <stdio.h>


int main()
{   float a,d ,b,t,s;
    int n;

    //taking inputs
    printf("Enter the value of a= ");
    scanf("%f" , &a);

    printf("Enter the value of d= ");
    scanf("%f", &d);

    printf("Enter the value of n= ");
    scanf("%d", &n);

    //calculations
     b = a + d;                       // Second term
     t = a + (n - 1) * d;             // nth term
     s = (n / 2.0) * (2 * a + (n - 1) * d); // Sum of n terms

    // Displaying output in format: a + b + ... + t = s
    printf("\nOutput:\n");
    printf("%.2f+ %.2f+ .....+%.2f =%.2f\n ", a,b,t,s);

    return 0;
}
