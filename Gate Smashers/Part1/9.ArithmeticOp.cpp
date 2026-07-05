#include <iostream>

using namespace std;

int main() {
    int x =10;
    float y = 3.0;
    cout<< x / y <<endl;


    //it uses the immplicit conversion of the integers 
    //if we use int and int the o/p will be int else it would be float in case if any variable is float
    return 0;
}
/*
================================================================================
NOTES: ARITHMETIC OPERATORS IN C++ (Gate Smashers - Lec-14)
================================================================================

Operator | Name          | Example (Code) | Output / Behavior
---------|---------------|----------------|-------------------------------------
+        | Addition      | 5 + 3          | 8
-        | Subtraction   | 5 - 3          | 2
*        | Multiplication| 5 * 3          | 15
/        | Division      | 10 / 2         | 5
%        | Modulus       | 10 % 3         | 1 (Returns the remainder)

--------------------------------------------------------------------------------
INCREMENT & DECREMENT OPERATORS (Unary)
--------------------------------------------------------------------------------
++a      | Pre-Increment | int x = ++a    | 1. Increment 'a' first (a = a + 1)

         |               |                | 2. Assign updated value to 'x'

--a      | Pre-Decrement | int x = --a    | 1. Decrement 'a' first (a = a - 1)

         |               |                | 2. Assign updated value to 'x'

a++      | Post-Increment| int x = a++    | 1. Assign current 'a' value to 'x'

         |               |                | 2. Increment 'a' after (a = a + 1)

a--      | Post-Decrement| int x = a--    | 1. Assign current 'a' value to 'x'

         |               |                | 2. Decrement 'a' after (a = a - 1)
================================================================================
*/
