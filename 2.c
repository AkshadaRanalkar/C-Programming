/* Data Types:
1] Premitive/ Basic Data Types:
                                 
Character  Integer  Float   Double   Void      
  char      int     float   double   void    
 1 byte   4 bytes 4 bytes  8 bytes   N/A   

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
   // local variables
   int num = 10;
   float no = 3.123764;
   double doub = 2.87878787878787; 
   char ch = 'a';

   printf("Integer %d \n",num); // % stands for format specifier %d int %f float %c character %lf double
   printf("Float %f \n",no);
   printf("Float %.2f \n",no);
   printf("Double %lf \n",doub);
   printf("Double %.9lf \n",doub);
   printf("Character %c \n",ch);

   return 0;
}