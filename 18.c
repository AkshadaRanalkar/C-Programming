/*
Array

1] Array is considered as Derived Data Type from C, C++, Java.

2] Array is internally considered as Data Structure.

3] Data structure is considered as the way of storing and representing
the data in a particular format.

4] Data Structures are classified into two parts:
  i) Linear data structure
  ii) Non Linear data structure

5] Array is considere as a linear data structure.

6] Array is defined as the collection of homogeneous elements
stored in sequential and indexed format.

7] The starting address of Array is called base address of that array.

8] To access every element of the array we have to specfy the name of
array and the index of that element.

9] There are two ways in which we can initialize the data of array:
  i) Using member initialization list:
     Eg:
         int Arr[5]= {10,20,30,40,50};

  ii) Using member by member initialization:
     Eg:
         int Arr[5];
         Arr[0] = 10;
         Arr[1] = 20;
         Arr[2] = 30;
         Arr[3] = 40;
         Arr[4] = 50;

10] If we create the array by using member initialization list then the
size of array that we specify at the time of array creation is optional.
   Eg:
       int Arr[]={10,20,30,40,50};

11] If we create the array without member initialization list and if
the size of array is not specified then the compiler will generate error.
   Eg:
       int Arr[];    // error

12] The size of array should be a positive integer. We can not use the name
of variable as the size of array.
   Eg:
       int No = 5;
       int Arr[No];   //Not allowed

13] We can create array of any primitive data type except void.
   Eg:
       char cArr[4] = {'a', 'b', 'c', 'd'};

       int iArr[4] = {10, 20, 30, 40};

       float fArr[4] = {15.2, 20.5, 16.7, 11.22};

       double dArr = {100.2738, 2738.746, 28933.33474, 8244.4874};

*/

#include <stdio.h>

int main()
{
  int Arr[4] = {10, 20, 30, 40};

  printf("%d\n", Arr[0]);         // 10
  printf("%d\n", Arr[1]);         // 20
  printf("%d\n", Arr[2]);         // 30
  printf("%d\n", Arr[3]);         // 40
  printf("%d\n", sizeof(Arr));    // 16
  printf("%d\n", sizeof(Arr[2])); // 4
  printf("%d\n", Arr);
  printf("%d\n", &Arr);    // same as Arr
  printf("%d\n", &Arr[0]); // same as Arr
  printf("%d\n", &Arr[1]);
  printf("%d\n", &Arr[2]);
  printf("%d\n", &Arr[3]);

  return 0;
}

/*
If we consider the name of array then it is internally considered as the
base address of the first element of that array.
By using the concept of addresses, the array topic gets related with the pointers.
If we create the array with some specified size and if we initialize less number
of elements using member initialization list, then the non-initialized elements
gets automatically initialized with 0, 0.0 and \0. The above rule is only applicable
if we initialize the data using the Member initialization list.
If we create the array with less number of elements and if we try to initialize more
values in it then the compiler will generate error.
*/
