#include <stdio.h>
#include <stdlib.h>

int main()
{
    float w , h , BMI ;

    printf("Enter the value of W = "); //w = weight in kg ;
    scanf("%f", &w);

    printf("Enter the value of h = "); // h = height in meter ;
    scanf("%f", &h);

    BMI = w / (h*h);

    if ( BMI >= 18.5 && BMI <= 25 )
       printf("You are healthy");

     else if (BMI < 18.5)
         printf("You are underweight");

     else if (BMI > 25)
         printf("You are Overweight");



    return 0;
}
