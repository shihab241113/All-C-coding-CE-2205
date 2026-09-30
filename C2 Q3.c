#include <stdio.h>


int main()
{  unsigned int Decimal ;
    float  Octal, Hexadecimal ;

    printf("Enter any Number :", Decimal);
    scanf("%u",&Decimal );

    printf("The Number in Hexadecimal = %X\n", Decimal );
    printf("The Number in Octal = %o\n" , Decimal);
    printf("The Number in Decimal = %d\n" , Decimal);

    return 0;
}
