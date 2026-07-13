#include <iostream>

using namespace std;

/* =============================================================================
   📌 EXAMPLE OF: METHOD OVERRIDING (RUNTIME POLYMORPHISM)
   =============================================================================
   Definition: Class B redefines the 'show()' function inherited from Class A.
   
   Output: This program will print "I am Derived".
============================================================================= */

// Base Class (Parent)
class A {
public:
    void show() {
        cout << "I am Base" << endl;
    }
};

// Derived Class (Child)
class B : public A {
public:
    // This overrides the show() function of the Base class
    void show() {
        cout << "I am Derived" << endl;
    }
};

int main() {
    // Create an object of the derived class
    B b1;

    // Calls the overridden function in Class B
    b1.show(); // Outputs: I am Derived
    b1.A::show();

    return 0;
}
