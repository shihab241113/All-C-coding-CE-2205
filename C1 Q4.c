#include <stdio.h>

int main() {
    int a, b;
    int sum, difference, product, remainder;
    int integer_quotient;
    float fractional_quotient;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);


    sum = a + b;
    difference = a - b;
    product = a * b;
    integer_quotient = a/ b;
    remainder = a % b;

    fractional_quotient = (float)a / b;

    //results

    printf("Sum: d = %d\n", a, b, sum);
    printf("Difference: %d - %d = %d\n", a, b, difference);
    printf("Product:  = %d\n", a, b, product);
    printf("Integer Quotient:  = %d\n", a, b, integer_quotient);
    printf("Remainder:  = %d\n", a, b, remainder);
    printf("Fractional Quotient:  = %.2f\n", a, b, fractional_quotient);

    return 0;
}
