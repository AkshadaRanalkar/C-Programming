/*
We can create multiple pointers which can point to the same data.
*/

#include <stdio.h>

int main()
{
    int No = 15;

    int *a = &No;
    int *b = &No;
    int *c = &No;

    printf("%d \n", No);
    printf("%d \n", *a);
    printf("%d \n", *b);
    printf("%d \n", *c);

    return 0;
}