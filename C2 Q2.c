#include <stdio.h>
#include <stdlib.h>

int main()
{   unsigned int roll_1 , roll_2 , roll_3 ;
    float cgpa_1 , cgpa_2 , cgpa_3 ;
    float balance_1 , balance_2 , balance_3 ;


    //INPUT FOR THREE STUDENTS
    printf("Enter Roll , CGPA and Balance for students 1: ");
    scanf("%u %f %f", &roll_1,&cgpa_1,&balance_1);

    printf("Enter Roll , CGPA and Balance for students : ");
    scanf("%u %f %f", &roll_2,&cgpa_2,&balance_2);

    printf("Enter Roll , CGPA and Balance for students 1: ");
    scanf("%u %f %f", &roll_3,&cgpa_3,&balance_3);


    //OUTPUT
    printf("\n_________________________________________\n");
    printf("%-10s %-10s %-15s\n", "ROLL", "CGPA" , "BALANCE" );
    printf("\n_________________________________________\n");


    printf("%-10u %-10.2f %-15.2f\n" , roll_1, cgpa_1, balance_1);
    printf("%-10u %-10.2f %-15.2f\n" , roll_2, cgpa_2, balance_2);
    printf("%-10u %-10.2f %-15.2f\n" , roll_3, cgpa_3, balance_3);
    return 0;
}
