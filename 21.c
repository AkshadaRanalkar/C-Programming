/*
Pointers
*/

#include <stdio.h>

int main()
{
    int No = 10;
    int *iptr = &No;

    char ch = 'A';
    char *cptr = &ch;

    double d = 789.98;
    double *dptr = &d;

    printf("%d \n", No);
    printf("%c \n", ch);
    printf("%.3f \n\n", d);

    printf("%d \n", *iptr);
    printf("%c \n", *cptr);
    printf("%f \n\n", *dptr);

    printf("%d \n", &No);
    printf("%d \n", &ch);
    printf("%d \n\n", &d);

    printf("%d \n", &iptr);
    printf("%d \n", &cptr);
    printf("%d \n", &dptr);

    return 0;
}

/*In the above example we create 3 different variables of primitive data type and we
    create 3 pointers which points to the different data types.
*/