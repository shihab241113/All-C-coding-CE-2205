#include <stdio.h>


int main()
{
    int u=1, f=2,t , i;
    float v,s;

    //velocity calculation
    printf("===Time (t)___ Velocity (v) ____ Bar Chart ===\n");
    for (t=0 ; t<=3; t++){
        v= u + f*t ;
        printf("for t = %d , The velocity v =%.2f: ",t,v );

     //for bar chart calculations
    for (i=0 ; i < v ;  i++){
        printf("*");
    }
    printf("\n");
    }
   printf("\n");

    printf("\n===time (t)___ Distance (s) _____ Bar Chart ===\n");
     //for distance calculations
     for (t=0 ; t<=3; t++) {
       s = u*t + 0.5*f*t*t ;
       printf(" for t = %d , The distance s =%.2f : ",t,s );

       //for bar chart calculations
       for (i=0 ; i < s ; i++){
        printf("*");

       }
     printf("\n");
     }

    return 0;
}
