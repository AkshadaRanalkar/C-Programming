/* Data Types:
1] Premitive/ Basic Data Types:
                                 
Character  Integer  Float  Double  Void      
  char      int     float  double  void       

2]Derived Data Types:

   Array pointer Function        


3]User Defined Data Types:

   Struture Union Enumeration    


Data Type Qualifiers:
 Constant  Volatile
  const    volatile


Data Type Modifiers:
Long  Short  Signed  Unsigned
long  short  signed  unsigned

How much Size of data we are storing
What Kind of data we are storing
What operations we can perform

*/

#include<stdio.h>

int main()
{
    int num = 10;
    float no = 20.5;
    char ch = 'a';

    printf("Integer %d \n",num);
    printf("Float %f \n",no);
    printf("Float %.2f \n",no);
    printf("Character %c \n",ch);

    return 0;
}