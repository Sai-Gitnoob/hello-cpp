/**
 * ============================================================================
 * USER-DEFINED COPY CONSTRUCTOR
 * ============================================================================
 * 
 * • Definition & Syntax:
 *   A custom copy constructor overrides the default compiler behavior. It explicitly
 *   defines how values should be transferred from an existing object to a new one.
 *   Syntax: `ClassName(const ClassName &source_object)`
 * 
 * • Critical Parameters Breakdown:
 *   1. Pass-by-Reference (`&s`): Mandated to avoid an infinite recursion loop. If 
 *      passed by value, creating the parameter copy would invoke the copy constructor 
 *      again, infinitely.
 *   2. `const` Keyword: Ensures that the source object (`s1`) remains read-only and 
 *      cannot be accidentally modified during the copying process.
 */

#include <iostream>
#include <string>

class Student {
private:
    int roll;
    std::string name;

public:
    // Parameterized Constructor
    Student(int r, std::string n) {
        roll = r;
        name = n;
    }

    // User-Defined Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        std::cout << "[Custom Copy Constructor Called]\n";
    }

    void display() const {
        std::cout << "Roll: " << roll << ", Name: " << name << "\n";
    }
};

int main() {
    // 1. Instantiation via Parameterized Constructor
    Student s1(101, "Amit");

    // 2. Instantiation via Explicit User-Defined Copy Constructor
    Student s2 = s1; 

    // 3. Verification
    s2.display();

    return 0;
}

/*
EXPECTED CONSOLE OUTPUT:
[Custom Copy Constructor Called]
Roll: 101, Name: Amit
*/
