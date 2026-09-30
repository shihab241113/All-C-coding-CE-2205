#include <stdio.h>
#include <ctype.h>

int main()
{
    char a , b, c, d, e ;
    printf("Enter five letters : ");

    a = getchar( );
    b = getchar( );
    c = getchar( );
    d = getchar( );
    e = getchar( );

    printf("Output :") ;

    putchar(toupper(a));
    putchar(toupper(b));
    putchar(toupper(c));
    putchar(toupper(d));
    putchar(toupper(e));

    return 0;
}
