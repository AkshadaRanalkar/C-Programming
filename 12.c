/*
Selection: if else:
In case of selection we have to select the specific path of the
program using if else construct or switch case.

*/

#include <stdio.h>

int main()
{
    int No = 0;

    printf("Enter number\n");
    scanf("%d", &No);

    if ((No % 2) == 0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }

    return 0;
}
