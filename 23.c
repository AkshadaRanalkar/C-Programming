/*
• Array and Pointers:
We can create the pointer which points to the elements of array.
*/

#include <stdio.h>

int main()
{
    int Arr[] = {10, 20, 30, 40, 50};

    int *aptr = &(Arr[0]); // pointer pointing elements of array
    int *bptr = &(Arr[1]);
    int *cptr = &(Arr[2]);
    int *dptr = &(Arr[3]);
    int *eptr = &(Arr[4]);

    int (*ARRPTR)[5] = &Arr; // pointer pointing array

    printf("%d\n", *ARRPTR);    // prints base address of array
    printf("%d\n\n", **ARRPTR); // prints 1st element of array

    printf("%d \n", Arr[0]);
    printf("%d \n", *aptr);
    printf("%d \n\n", aptr);

    printf("%d \n", Arr[1]);
    printf("%d \n", *bptr);
    printf("%d \n", bptr); // address of 2nd element

    return 0;
}