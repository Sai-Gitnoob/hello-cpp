#include <iostream>

using namespace std;

/* =============================================================================
   📌 EXAMPLE OF: SINGLE INHERITANCE (via Private Visibility Mode)
   =============================================================================
   Definition: A derived class inherits from exactly one base class.
   
   Structure:
         [ Base Class ]
               │
               ▼ (Inherited Privately)
        [ Derived Class ]
============================================================================= */

// 1. Base Class (The single parent class)
class Base {
public:
    int add(int a, int b) {
        return a + b;
    }
};

// 2. Derived Class (The single child class inheriting from Base)
class Derived : private Base {
public:
    int f1(int a, int b) {
        // Internal access to the inherited method is allowed
        return add(a, b); 
    }
};

int main(void) {
    // Single inheritance allows b1 to encapsulate the properties of Base
    Derived b1;
    
    // Outputs: 5
    cout << b1.f1(2, 3) << endl; 

    /* 
       ⚠️ CRITICAL NOTE FOR CODESPACE:
       Because this single inheritance uses 'private' visibility, 
       the statement 'b1.add(2, 3);' directly in main() will cause a 
       compiler error. 'add' is hidden outside the Derived class.
    */

    return 0;
}
