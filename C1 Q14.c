#include <stdio.h>
#include <stdlib.h>


 int main()
{ int var = 2;  //GLOBAL VARIABLES
    printf("%i\n", var * var);
    int var = 3; //lOCAL VARIABLES
    {
        int var = 5; //LOCAL VARIABLES
        printf("%i\n", var * var);
    }
    printf("%i\n", var * var);


    return 0;
}
