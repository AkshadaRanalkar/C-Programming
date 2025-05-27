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

/*
In the above application all the steps which are used to perform
the addition gets executed in the sequence.asm

scanf: This function is used to accept the input from the user from
the input device ie. keyboard.
This function is declared in 'stdio.h' header file.
*/