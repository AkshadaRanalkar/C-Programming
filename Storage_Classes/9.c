#include <stdio.h>

int A = 10;
int B;
extern int C;

int main()
{
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);

    return 0;
}

/*

In the above application there are two files 8.c and 9.c

8.c contains the definition of global variable named as C
That C variable is accessed by the 9.c file by using the extern keyword.


Result:
10       value of A
0        B prints value 0 as 0 as it is global variable with
         default storage class extern that stores defalut value in it
11       extern C from 8.c
*/