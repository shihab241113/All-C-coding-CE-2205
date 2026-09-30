#include <stdio.h>
#include <stdlib.h>

int main()
{   int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    if (n & 1)
        printf("Output : 1(odd)\n");
    else
        printf("Output : 0 (even)\n");


    return 0;
}
