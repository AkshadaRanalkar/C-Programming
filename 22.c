/*
• Pointer to pointer:
We can create a pointer which can hold the address of another pointer.
*/

#include <stdio.h>

int main()
{
    int No = 10;
    int *p = &No;
    int **q = &p;
    int ***r = &q;
    int ****s = &r;
    int *****t = &s;
    int ******u = &t;
    int *******v = &u;

    printf("%d\n", *******v);
    printf("%d\n", *u);
    printf("%d\n", &s);

    return 0;
}