#include <iostream>
#include <string>

using namespace std;

/* 
INHERITANCE:
A mechanism in OOPs that allows one class (derived/child) 
to acquire the properties and behaviors (data members and member functions) 
of another class (base/parent).
*/

// Base Class (Parent)
class Teacher {
public:
    int salary = 15000;
    string role = "Teacher";
};

// Derived Class (Child) inheriting from Teacher
class MathsTeacher : public Teacher {
public:
    string specialization = "Mathematics";
};

int main() {
    // Creating an object of the derived class
    MathsTeacher m1;

    // Accessing inherited properties
    cout << "Role: " << m1.role << endl;
    cout << "Salary: $" << m1.salary << endl;
    
    // Accessing child's own property
    cout << "Specialization: " << m1.specialization << endl;

    return 0;
}

/*
================================================================================
                    C++ INHERITANCE VISIBILITY MODES
================================================================================
 
  Base Class       |  Public            Protected           Private
  Member Access    |  Inheritance       Inheritance         Inheritance
  -----------------+------------------------------------------------------------
  PUBLIC           |  becomes Public    becomes Protected   becomes Private
  PROTECTED        |  becomes Protected becomes Protected   becomes Private
  PRIVATE          |  Inaccessible*     Inaccessible*       Inaccessible*
 
  *Note on Private Members: 
  Private members are technically inherited and exist inside the memory layout 
  of the derived class object, but they are hidden (inaccessible). They cannot 
  be accessed directly by the child class code; they can only be manipulated 
  via inherited public/protected member functions (like getters and setters).
================================================================================
*/
