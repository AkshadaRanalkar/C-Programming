/*
If we want to execute single statement or set of multiple statements in a repeated
manner then we have to use the concept of loops. By using the concept of loops we
can design the complex applications by writing the short syntax.
*/

#include <stdio.h>

int main()
{
    int Cnt = 0;

    for (Cnt = 0; Cnt < 10; Cnt++)
    {
        printf("Hello, This is a for loop program.\n");
    }

    return 0;
}

/*
The above application prints the line 10 times with short code
Cnt is a counter here.
This counter or loop counter goes into ECX register as it is count register
and as it is used for counting.

-- Addition or Arithmetic operation is stored in EAX.
-- Address is stored in EBX register.
-- EDX- return value-output

All registers can help each other and it is handled by OS.
EAX can also help EBX or any register can help each other if they are free.

-- Is for loop counter a register storage class?
--> No
But it should be made register storage class as it is required again and again.

As auto counter goes on RAM and then to CPU but register will take it directly
to the CPU register and save time.

-- If we know how many times to execute loop then use for loop.
-- But if you dont know how many times to execute loop but we know
the condition till when to execute the loop then use while loop.
*/
