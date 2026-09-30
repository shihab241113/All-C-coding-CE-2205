#include <stdio.h>
#include <math.h>

int main()
{  float a, b, c;
    float D;
    float x1, x2;
    float realPart, imaginaryPart;

    printf("Enter the value of a: ");
    scanf("%f", &a);

    printf("Enter the value of b: ");
    scanf("%f", &b);

    printf("Enter the value of c: ");
    scanf("%f", &c);

   if ( a == 0)
   {
       printf("This is not a quadratic equation.\n");

   }
   else
   {
     D = b * b - 4 * a * c;

     if (D > 0)
     {
        x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);

            printf("Two different real roots:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
     }

      else if (D == 0)
      {
           x1 = -b / (2 * a);
            printf("Two equal real roots:\n");
            printf("x1 = x2 = %.2f\n", x1);

      }

        else
        {
            realPart = -b / (2*a);
            imaginaryPart = sqrt(-D)/(2*a);


            printf("Two imaginary roots:\n");
            printf("x1 = %.2f + %.2fi\n", realPart,imaginaryPart);
            printf("x2solve  = %.2f + %.2fi\n", realPart,imaginaryPart);

        }

   }



    return 0;
}
