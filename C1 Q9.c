#include <stdio.h>

int main()
{   float const pi = 3.1416;

    //for rectangle calculation
    float length = 5.5 , width = 3.2;
    float rec_area , rec_perimeter ;
    rec_area = length * width ;
    rec_perimeter = 2* (length + width);

    //for circle calculation
    float radius = 2.5;
    float cir_area , cir_perimeter ;
    cir_area = pi * radius * radius ;
    cir_perimeter = 2 * pi * radius ;

    //Results
    printf(" RESULTS \n");

    //output for rectangle
    printf("Rectangle Area = %.2f\n", rec_area);
    printf("Rectangle Perimeter = %.2f\n", rec_perimeter);

   //output for circle
   printf("Circle Area =%.2f\n", cir_area);
   printf("Circle Perimeter =%.2f\n", cir_perimeter);

    return 0;
}
