/*
• Pointer Arithmetic:
This topic is used to demonstrate the concept of arithmetic operations on the pointers.
The arithmetic operations may contain addition, subtraction, multiplication and division.

1.	p+2
= p+2*sizeof(pointer_type)
= p+2*sizeof(int)
= p+2*4
= p+8
= 104+8
= 112

This is how it works internally.
It simply means move two steps ahead.
In the above equation we have to multiply by the size of pointer because due to the
multiplication, we shift our pointer with the proper size.


2.	q-2
= q-2*sizeof(pointer_type)
= q-2*sizeof(int)
= q-2*4
= q-8
= 112-8
= 104

3.	q-p
= (q-p)/(sizeof(pointer_type))
= (q-p)/(sizeof(int))
= (q-p)/4
= (112-104)
= 8/4
= 2

4.  p+q //NOT ALLOWED

Above 3 pointer arithmetic operations are allowed. Other than these operations, all
the other operations are not allowed because practically it generates invalid result.
*/

#include <stdio.h>

int main()
{
    int Arr[] = {10, 20, 30, 40, 50, 60};
    int *p = &(Arr[3]);
    int *q = &(Arr[0]);

    // Pointer Arithmetic:
    printf("%d\n", &Arr);
    printf("%d\n", *(p + 2));

    printf("%d\n", *(p - 2));

    printf("%d\n", *p - *q);

    return 0;
}