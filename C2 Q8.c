#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;

    printf("Enter a character :");
    scanf("%c", &ch);

    printf("Alphabetic   : %d\n", isalpha(ch));
    printf("Digit        : %d\n", isdigit(ch));
    printf("Space        : %d\n", isspace(ch));
    printf("Blank        : %d\n", isblank(ch));
    printf("Alphanumeric : %d\n", isalnum(ch));
    return 0;
}
