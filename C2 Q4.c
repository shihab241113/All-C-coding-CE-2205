#include <stdio.h>
#include <math.h>

int main()
{   float a,b,c ,x ;
    float decrement1 , decrement2 ;
    float root1 , root2 ;

    printf("Enter the value of a = :\n",a);
    scanf("%f",&a);

    printf("Enter the value of b = :\n",b);
    scanf("%f",&b);

    printf("Enter the value of a = :\n",c);
    scanf("%f",&c);

    decrement1 = sqrt(b*b - 4*a*c);
    decrement2 = -sqrt(b*b- 4*a*c);

    if ( b*b -4*a*c < 0 || a==0){
        printf("Invalied Input of a,b and c\n");}

        else {

            root1= (-b+ decrement1)/2*a ;
            root2= (-b+ decrement2)/2*a ;

            printf("The root1 is = \n", root1);
            printf("The root2 is = \n", root2);
    }



    return 0;
}
