#include <iostream>

using namespace std;

int main() {
    int x;
    float y;
    double z ;
    char a ;
    bool real ;
  
    return 0;
}

/*
================================================================================
NOTES: PRIMITIVE DATA TYPES IN C++ (Gate Smashers)
================================================================================
Primitive data types are pre-defined or built-in data types in C++. They are 
used to declare variables directly.

Data Type   | Size (Approx.) | Purpose / Example
------------|----------------|--------------------------------------------------
int         | 4 bytes        | Stores whole numbers (e.g., 96, 500, -12)
float       | 4 bytes        | Stores fractional/decimal numbers (e.g., 98.12)
double      | 8 bytes        | Stores high-precision fractional numbers
char        | 1 byte         | Stores a single character/letter (e.g., 'A', '$')
bool        | 1 byte         | Stores boolean values: true (1) or false (0)

Note: 
- 'float' vs 'double': A 'double' takes twice the memory of a 'float' but 
  provides much higher accuracy for decimal values.
================================================================================
*/



/*
================================================================================
NOTES: PRIMITIVE DATA TYPES & RANGES IN C++ (64-bit Linux)
================================================================================

Data Type   | Size     | Value Range
------------|----------|--------------------------------------------------------
bool        | 1 byte   | true (1) or false (0) [Only 2 logical states]
char        | 1 byte   | -128 to 127 (or 0 to 255 if unsigned)
int         | 4 bytes  | -2,147,483,648 to 2,147,483,647 (~ -2 Billion to +2B)
float       | 4 bytes  | ±3.4E-38 to ±3.4E+38 (6-7 decimal places of precision)
double      | 8 bytes  | ±1.7E-308 to ±1.7E+308 (15 decimal places of precision)

================================================================================
*/
