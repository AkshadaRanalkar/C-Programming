/*Storage Classes
Concept of storage class is almost language independent. It is almost same in every programming language (C,C++, Java).
The concept of storage class completely depends upon the logic that we used to write the application. 
There are 4 storage classes in C &  C++. 
Every storage class is dependent upon the below points:
1.	Where the memory gets allocated for the variable?
2.	What is the default value of the variable?
3.	What is the lifetime of the variable?
4.	What is the linkage of the variable?
5.	What is the scope of the variable?

The four storage classes are:
1.	Auto
2.	Static
3.	Register
4.	Extern


Concept of Storage class is same in all programming languages
|                |Auto          |Register          |Static (local static)        |Static (global static)       |Extern                |
|Memory Allocated|Stack section |CPU Register      |Data Section (static section)|Data Section (static section)|Data Section          |
|Default Value   |Garbage       |Garbage           |0, 0.0, or '\0'              |0, 0.0, or '\0'              |0, 0.0, or '\0'       |
|Lifetime        |Throughout    |Throughout        |Throughout the program       |Throughout the program       |Throughout the program|
                  the function  |the function
|Scope           |Throughout    |Throughout        |Throughout the program       |Throughout the file          |Throughout the file   |
                  the program   |the program
|Linkage         |No linkage    |No linkage        |No linkage                   |Internal linkage             |External linkage      |
|Example         |auto int A=11;|register int A=11;|static int No=10;            |static int No=10;            |extern int No;        |


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

#include<stdio.h>

int main()
{
    auto int A = 10;
    register int B = 10;
    register int C;

    return 0;
}

/*In the above program variable A is of auto storage class.
Variable B and C is of register storage class.*/