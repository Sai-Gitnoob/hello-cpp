#include <iostream>
#include <string>
using namespace std;

// =========================================================================
// C++ CLASSES AND OBJECTS
// =========================================================================
// Definition: A class in C++ is a user-defined data type that acts as a 
// blueprint for creating objects.
//
// Structure: It groups related variables (called data members) and 
// functions (called member functions) into a single unit.
// =========================================================================

class Student {
public:
    // Data Members (Variables)
    string name;
    int age;

    // Member Function (Method)
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an object (instance) of the Student class
    Student student1;

    // Assigning values to data members
    student1.name = "John Doe";
    student1.age = 20;

    // Calling the member function
    student1.display();

    return 0;
}
