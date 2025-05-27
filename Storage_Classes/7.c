/*
•	Register Storage Class:
1.	Register storage class is almost similar as the auto storage class.
2.	In case of auto storage class, the memory for the variable gets allocated inside the stack segment which is the part of RAM.
3.	To access any variable from the RAM it should be copied from RAM to CPU register.
4.	If we use the register storage class the memory for the variable gets directly allocated inside the CPU registers.

•	Limitations of the register storage class :
1.	As there are limited number of CPU registers, the register storage class is considered as a request.
2.	If the CPU register is available, then the operating system is allocated the register otherwise that variable is treated with auto storage class.
3.	Register storage class is applicable for character and integer only.
4.	We cannot create a global variable with register storage class.

*/

#include <stdio.h>

int main()
{
    auto int A = 10;
    register int B = 10;
    register int C;

    return 0;
}

/*In the above program variable A is of auto storage class.
Variable B and C is of register storage class.*/