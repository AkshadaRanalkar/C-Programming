/*Storage Classes

1. Auto
2. Static
3. Register
4. Extern

Concept of Storage class is same in all programming languages
|                |Auto         |Register    |Static (local static)        |Static (global static)       |Extern|
|Memory Allocated|Stack section|CPU Register|Data Section (static section)|Data Section (static section)|Data Section|
|Default Value   |Garbage      |Garbage     |0, 0.0, or '\0'              |0, 0.0, or '\0'              |0, 0.0, or '\0'|
|Lifetime        |Throughout   |Throughout  |Throughout the program       |Throughout the program       |Throughout the program|
                  the function |the function
|Scope           |Throughout   |Throughout  |Throughout the program       |Throughout the file          |Throughout the file|
                  the program  |the program
|Linkage|No linkage|No linkage|No linkage|Internal linkage|External linkage|
|Example|auto int A=11;|register int A=11;|static int No=10;|static int No=10;|extern int No;|

*/