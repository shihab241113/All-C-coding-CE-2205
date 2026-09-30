#include <stdio.h>

int main()
{
    long fact8 = 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8;
    long fact4 = 1 * 2 * 3 * 4;

    long comb84 = fact8 / fact4 / fact4;

    printf("%ld %ld\n", fact8, comb84);

    return 0;
}
