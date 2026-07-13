#include <iostream>
/*
================================================================================
                    POLYMORPHISM IN OOPS (C++)
================================================================================

DEFINITION:
- Derived from Greek: "Poly" (many) + "Morph" (forms).
- The ability of a single function, operator, or object to behave differently 
  based on the evaluation context.

--------------------------------------------------------------------------------
                  ┌──────────────────────────────────┐
                  │           POLYMORPHISM           │
                  └────────────────┬─────────────────┘
                                   │
         ┌─────────────────────────┴─────────────────────────┐
         ▼                                                   ▼
┌─────────────────────────────────┐       ┌─────────────────────────────────┐
│    COMPILE-TIME POLYMORPHISM    │       │      RUN-TIME POLYMORPHISM      │
│  (Static / Early Binding)       │       │    (Dynamic / Late Binding)     │
├─────────────────────────────────┤       ├─────────────────────────────────┤
│ • Function Overloading          │       │ • Function Overriding           │
│ • Operator Overloading          │       │ • Virtual Functions             │
└─────────────────────────────────┘       └─────────────────────────────────┘

1. COMPILE-TIME POLYMORPHISM
   - Also Known As: Static Polymorphism or Early Binding.
   - Behavior: The compiler determines which function or operator to call 
               during compilation based on the signatures or operands.
   - Core Implementations:
     * Function Overloading: Multiple functions sharing the same name but 
                             having different parameter lists.
     * Operator Overloading: Giving custom meanings to standard C++ operators 
                             (like +, -, <<) when used with user-defined objects.

2. RUN-TIME POLYMORPHISM
   - Also Known As: Dynamic Polymorphism or Late Binding.
   - Behavior: The specific function call is resolved at runtime while the 
               program is executing, based on the type of object pointed to.
   - Core Implementations:
     * Function Overriding: A child class redefines a function that it 
                            inherited from its parent class.
     * Virtual Functions: Member functions declared in a base class with the 
                          'virtual' keyword to ensure dynamic linkage.
================================================================================
*/

using namespace std;

int main() {
    
    return 0;
}