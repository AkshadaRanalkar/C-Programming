/*
•	Pointers:
1.	Pointer is considered as a derived data type from C and C++ programming languages.
2.	The concept of pointer is not available in case of Java programming language.
Instead of the pointer, Java provides the concept of reference.
3.	Pointer is a variable that stores the memory address of another variable or data
structure rather than storing the data itself.
4.	By using the concept of pointers, we can perform the powerful programming task.
5.	We can create multiple pointers which points to the same data.

Pointer Reading:
Int No = 11;
Int *p = &No;
‘p’ is a pointer which holds the address of integer.
Currently it holds the address of ‘No’.


Every pointer holds the address and generally the address requires 8 bytes of memory
due to which size of every pointer is considered as 8 bytes. If there is a different
platform(Operating system) and Compiler then the size of pointer can be 4 bytes.

Operators required to use the concept of pointers:
1.	& :  This operator gives the address of any variable.
2.	* :  It is called as dereference operator which is used to fetch the data which is
stored in the variable.


Types of pointers:
In old operating systems and old platforms the pointers are classified into 3 types.
But in todays operating system there is no such concept of the types of pointers.


Pointer size depends on:
Computer architecture size (16-bit, 32-bit, 64-bit)
OS size (16-bit, 32-bit, 64-bit)
Compiler (MinGW) size (16-bit, 32-bit, 64-bit)


In old operating systems the types pointers are considered as:
1.	Near pointer:
If the pointer points in between 0-640kb then it is called as a near pointer.
2.	Far pointer:
If a pointer points in between 640kb-1024kb then it is considered aa far pointer.
3.	Huge pointer:
If the pointer points after 1024kb and above then it considered as huge pointer.

*/
#include <stdio.h>

int main()
{
    int A = 10;
    int *iptr = &A;

    printf("%d\n", iptr);         // prints address of A
    printf("%d\n", &A);           // prints address of A
    printf("%d\n", *iptr);        // prints value in A(Value it points to)
    printf("%d\n", A);            // prints value in A
    printf("%d\n", &iptr);        // prints address of iptr
    printf("%d\n", sizeof(iptr)); // prints size of iptr pointer

    return 0;
}

/*
In the above example we create a variables of primitive data type and we
create its pointers which points to integer data types.
We print different values to check what gives what.
*/