/*
Sizeof Operator (sizeof):

   Sizeof is an inbuilt operator of C and C++.
This operator gives the number of bytes allocated or which
can be allocated in future.

Address of operator (&):

   Address of ie & operator is used to fetch the base address of any element.
In case of arrat, name of array is internally considered as its base address,
so there is no need to use '&' operator to fetch base address.

&- address from RAM.

*/

#include <stdio.h>

int main()
{
    int A = 10;

    float B = 120.5;

    double C = 73674.476;

    char D = 'a';

    printf("Size of integer A is %d\n", sizeof(A));
    printf("Size of float f is %d\n", sizeof(B));
    printf("Size of double d is %d\n", sizeof(C));
    printf("Size of character c is %d\n", sizeof(D));

    printf("Address of integer A is %d\n", &(A));
    printf("Address of float f is %d\n", &(B));
    printf("Address of double d is %d\n", &(C));
    printf("Address of character c is %d\n", &(D));
}