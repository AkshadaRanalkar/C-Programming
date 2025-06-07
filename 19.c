/*
Multi -dimensional Array:
Multi-dimensional array is considered as array of array
Consider the below example of two dimensional array:

int Arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

Arr is two dimensional array; which contains 3 one dimensional arrays in it each. Each one dimensional array contains 4 elements. Each element is one type of integer.

We can also initialize the members of multidimensional array by using member by member initialization technique.

Arr[0][0] = 1;
Arr[0][1] = 2;
Arr[0][2] = 3;
Arr[0][3] = 4;

Arr[1][0] = 5;
Arr[1][1] = 6;
Arr[1][2] = 7;
Arr[1][3] = 8;
*/

#include <stdio.h>

int main()
{
    int Arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    printf("%d\n", Arr);
    printf("%d\n", &Arr);
    printf("%d\n", &(Arr[0][0]));
    printf("%d\n", &(Arr[1][0]));
    printf("%d\n", &(Arr[2][0]));
    printf("%d\n", Arr[0][0]); // 1
    printf("%d\n", Arr[0][1]); // 2
    printf("%d\n", Arr[0][2]); // 3
    printf("%d\n", Arr[0][3]); // 4
    printf("%d\n", Arr[1][0]); // 5
    printf("%d\n", Arr[1][1]); // 6
    printf("%d\n", Arr[1][2]); // 7
    printf("%d\n", Arr[1][3]); // 8
    printf("%d\n", Arr[2][0]); // 9
    printf("%d\n", Arr[2][1]); // 10
    printf("%d\n", Arr[2][2]); // 11
    printf("%d\n", Arr[2][3]); // 12
}