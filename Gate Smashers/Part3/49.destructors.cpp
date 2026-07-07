/**
 * ============================================================================
 * DESTRUCTORS IN C++
 * ============================================================================
 * 
 * • Definition:
 *   A destructor is a special member function in a class that is automatically 
 *   called when an object goes out of scope or is deleted.
 * 
 * • Primary Purpose:
 *   It is used to release resources like memory, files, or network connections.
 * 
 * • Naming & Syntax Rules:
 *   - Same name as the class but with a ~ (tilde) before it.
 *   - No parameters, no return type.
 * 
 * • Execution Mechanics:
 *   - Automatically called when the object is destroyed.
 * 
 * • Structural Limitations:
 *   - Only one destructor per class.
 *   - No overloading allowed.
 */
/**
 * ============================================================================
 * ⚙️ LIFECYCLE ORDER: CONSTRUCTOR VS. DESTRUCTOR EXECUTION
 * ============================================================================
 * 
 * 1. INITIALIZATION PHASE (Top-to-Bottom Allocation):
 *    - Objects are created sequentially in the order they are declared in code.
 *    - Creation of `d1` triggers `Demo()` constructor.
 *    - Creation of `d2` triggers `Demo()` constructor next.
 * 
 * 2. DESTRUCTION PHASE (Reverse Order Execution):
 *    - Local stack objects are destroyed in the REVERSE order of their creation.
 *    - This follows the LIFO (Last In, First Out) principle of stack memory.
 *    - When `main()` reaches `return 0;`, the scope closes.
 *    - `d2` is destroyed first -> triggers `~Demo()`.
 *    - `d1` is destroyed last -> triggers `~Demo()`.
 */

#include <iostream>

class Demo {
public:
    // Default Constructor
    Demo() {
        std::cout << "Constructor called\n";
    }

    // Destructor
    ~Demo() {
        std::cout << "Destructor called\n";
    }
};

int main() {
    // Sequence of allocation: d1 then d2
    Demo d1;
    Demo d2;

    return 0;
    // Sequence of deallocation at scope exit: d2 then d1
}

/*
EXPECTED CONSOLE OUTPUT:
Constructor called  (for d1)
Constructor called  (for d2)
Destructor called   (for d2)
Destructor called   (for d1)
*/
