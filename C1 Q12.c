#include <stdio.h>


int main() {
    int x;

    // Step-by-step evaluation using only 1 variable (x),
    // 1 arithmetic operator, and 1 assignment operator per statement:

    x = 1 + 2;        // x = 3
    x = 8 * x;        // x = 24
    x = 3 - x;        // x = -21   (Note: equivalent to 3 + (-24))
    x = 18 - x;       // x = 39    (6*9/3 = 18, so 18 - (-21) = 39)
    x = x + 5;        // x = 44    (5 + 18 - (-21) = 44)
    x = x + 33;       // x = 77    (44 + 3*(5+6) = 44 + 33 = 77)

    printf("%d\n", x);


    return 0;
}
