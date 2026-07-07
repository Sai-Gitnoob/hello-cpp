/**
 * ============================================================================
 * 📋 DEFAULT COPYING & THE DEFAULT COPY CONSTRUCTOR
 * ============================================================================
 * 
 * • Core Concept:
 *   When you create a copy of an object using another object of the same class, 
 *   C++ automatically copies the values of all data members. This process is 
 *   known as DEFAULT COPYING.
 * 
 * • Underlying Mechanism:
 *   This copying happens automatically behind the scenes using a compiler-provided 
 *   DEFAULT COPY CONSTRUCTOR.
 * 
 * • Key Behavioral Properties:
 *   - Automatic Generation: If you do not explicitly define a copy constructor 
 *     in your class, the compiler creates a default one for you.
 *   - Shallow Copy Behavior: It performs a member-by-member copy (shallow copy). 
 *     While perfectly safe for primitive types (int, float, char), it can lead 
 *     to runtime crashes if your class handles pointers or dynamic memory.
 */

/**
 * ============================================================================
 * 🛠️ CONCRETE EXAMPLE: IMPLICIT DEFAULT COPY CONSTRUCTOR IN ACTION
 * ============================================================================
 * 
 * Line Analysis for `Student s2 = s1;`:
 * 1. A new object `s2` is being allocated in stack memory.
 * 2. The compiler checks if a custom copy constructor exists. Since none is 
 *    explicitly defined, the compiler-generated default copy constructor is called.
 * 3. A member-by-member shallow copy occurs:
 *    - `s2.roll` is assigned the value of `s1.roll` (101)
 *    - `s2.name` is assigned the value of `s1.name` ("Amit")
 */

#include <iostream>
#include <string>

class Student {
public:
    int roll;
    std::string name;
    
    // Note: No explicit user-defined copy constructor is written here.
    // The compiler automatically synthesizes the default copy constructor.
};

int main() {
    // 1. Initialize original object (s1) manually via public data members
    Student s1;
    s1.roll = 101;
    s1.name = "Amit";

    // 2. Form a new object (s2) using the default copy constructor
    // Syntax variant: Student s2(s1); achieves the exact same result
    Student s2 = s1; 

    // 3. Verify member variables were successfully copied
    std::cout << s2.roll << s2.name << "\n";

    return 0;
}

/*
EXPECTED CONSOLE OUTPUT:
101Amit
*/
