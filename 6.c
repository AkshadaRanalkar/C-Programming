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


•	Auto Storage Class:
1.	Every local variable is considered as a variable with auto storage class, that is; auto is the default storage class for every local variable. 
2.	When we create a variable having auto storage class, its memory gets allocated inside the stack section. 
3.	If the variable is not initialized with any of the value then it may contain garbage in it. 
4.	The scope and lifetime of the variable is only inside the function in which it gets created. 
5.	The linkage of the auto storage class is no linkage because it is not accessible outside the function or file or program.

*/

#include<stdio.h>

int y;

int z = 10;

int main()
{
    int A = 10;
    int B;
    auto int C = 10;
    auto int D;

    return 0;
}

/*In the above program variable A, B, C and D are local Variables.
They are all of auto storage class.
int A and B are default auto as they are local variables.*/