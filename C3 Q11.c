#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter Any Kind Of Letter =");
    scanf("%c", &ch);

    if ( ch >= 'a' && ch <=  'z')
    {
        ch = ch -32 ;
        printf("Capital letter = %c", ch);
    }

    else if (ch >= 'A' && ch <=  'B')
    {
       ch = ch + 32 ;
        printf("Capital letter = %c", ch);
    }

    return 0;
}
