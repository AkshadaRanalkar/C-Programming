/*
• Static Storage Class:
1. The static storage class is used to preserve the value of a variable across the function calls.
2. When we call the function for the first time the value of the local static variable gets updated and when we call the function next time we get the previous updated value.
3. The concept of static is used in the topic named as Recursion. Calling the function from the same function itself is called as recursion.

• Global Static Variable:
1. We can create the static variable either inside the function (local static) or outside the function (global static).
2. If the variable is created as global static variable than that variable is only accessible inside the file means we cannot access that global static variable outside the file using the extern keyword.
*/

#include <stdio.h>

void Demo()
{
    static int No = 10;
    No++;
    printf("%d\n", No);
}

int main()
{
    Demo(); // 11
    Demo(); // 12
    Demo(); // 13

    return 0;
}

/*
In the above application, the value of the variable 'No' gets preserved across the function calls.
The static variable gets initialized only once throughout the execution.
*/