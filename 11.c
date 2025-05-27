/*
Sequence:
If our application contains multiple statements and
if we want to execute that multiple statements in a proper
sequence than it is considered as sequence.

Executing multiple statement in specific order. There is no specific syntax.
*/

#include <stdio.h>

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;

    printf("Enter first number\n");
    scanf("%d", &No1);

    printf("Enter second number\n");
    scanf("%d", &No2);

    Ans = No1 + No2;

    printf("Addition is: %d\n", Ans);

    return 0;
}

/*
In the above application all the steps which are used to perform
the addition gets executed in the sequence.asm

scanf: This function is used to accept the input from the user from
the input device ie. keyboard.
This function is declared in 'stdio.h' header file.
*/