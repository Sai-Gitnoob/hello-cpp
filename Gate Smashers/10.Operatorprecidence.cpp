#include <iostream>

using namespace std;

int main() {
    // Your code here
    return 0;
}

/*
================================================================================
NOTES: OPERATOR PRECEDENCE & ASSOCIATIVITY (Gate Smashers - Lec-15)
================================================================================

Operator                 | Precedence  | Associativity
-------------------------|-------------|----------------------------------------
a++, a-- (Postfix)       | 1 (Highest) | Left to Right
++a, --a (Prefix)        | 2           | Right to Left
*, /, %                  | 3           | Left to Right
+, -                     | 4 (Lowest)  | Left to Right

--------------------------------------------------------------------------------
KEY DEFINITIONS
--------------------------------------------------------------------------------
- Precedence: Determines which operator executes first when different 
  operators appear in an expression (e.g., * happens before +).
- Associativity: Determines execution order (Left-to-Right or Right-to-Left) 
  when operators sharing the exact same precedence level appear together.
================================================================================
*/
