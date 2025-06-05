/*
Do While Loop:

This loop is syntactically almost the same as the while loop.
The major difference between while and do-while is the do-while
loop iterates at least once irrespective of the condition.
*/

#include <stdio.h>

int main()
{
    int iCnt = 0;

    do
    {
        printf("This is a do-while loop\n");
        iCnt++;
    } while (iCnt < 4);
}

/*
According to the above syntax we enter inside the loop directly
without checking any condition.

Due to this the loop iterates at least once and before the
second execution of a loop we check the condition.\

Hint: We use the do-while loop in circular linked list applications
of data structure.*/