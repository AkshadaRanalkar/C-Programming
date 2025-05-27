/*
Selection: switch case:
The concept of switch case is used to select the expected
things from the set of multiple things.

Switch cases uses concept of jump table.
We have created a table of cases, it directly jumps to
that case instead of checking all cases or conditions.

Switch case can olny be used for integer and character.

*/

#include <stdio.h>

int main()
{
    int No = 0;

    printf("Enter your Standard (eg: 1,2,3,4)\n");
    scanf("%d", &No);

    switch (No)
    {
    case 1:
        printf("Your exam is at 12:30pm\n");
        break;

    case 2:
        printf("Your exam is at 1:30pm\n");
        break;

    case 3:
        printf("Your exam is at 2pm\n");
        break;

    case 4:
        printf("Your exam is at 5pm");
        break;

    default:
        printf("Invalid Standard");
    }

    return 0;
}

/*
Consider the above application which demonstrates the concept of switch case.
It accepts the standard from user and depending upon the standard we display
the exam time.
*/