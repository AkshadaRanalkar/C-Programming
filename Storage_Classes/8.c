/*
•	Extern Storage Class:
1. Extern is a storage class which is applicable to the global variables used in the program.
2. If we apply extern storage class to the variable, then the value of that variable gets accessed from one file to another file.
3. If the variable is created globally then the default storage class of that variable is extern.
4. The extern keyword is used if we want to access the global variable from one file into another file.
5. All the global variables get the memory inside data section.
6. The Data section is divided into two parts:
    -- a. bss (Block starting with symbol):
    This section contains all about non initialized global variables.
    -- b. non bss (Block starting with value):
    It contains the initialized global variables.

*/

int C = 11;
