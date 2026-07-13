#include <iostream>

using namespace std;

/* =============================================================================
   📌 EXAMPLE OF: MULTIPLE INHERITANCE & THE DIAMOND/AMBIGUITY PROBLEM
   =============================================================================
   Definition: A derived class inherits from more than one base class.
   
   Structure:
         [ Class A ]      [ Class B ]
              │                │
              └───────┬────────┘
                      ▼ 
                  [ Class C ]
============================================================================= */

// Base Class 1
class A {
public:
    void show() {
        cout << "Show A" << endl;
    }
};

// Base Class 2
class B {
public:
    void show() {
        cout << "Show B" << endl;
    }
};

// Derived Class inheriting from BOTH Class A and Class B
class C : public A, public B {
public:
    void show() {
        /*
          ⚠️ AMBIGUITY ERROR!
          Calling 'show()' directly here causes a compilation error or runtime crash (infinite recursion). 
          The compiler doesn't know whether to call A's show() or B's show().
          
          How to fix it for your notes:
          Use the scope resolution operator (::) to tell the compiler exactly which one to use:
          A::show(); // Calls show() from class A
          B::show(); // Calls show() from class B
        */
        A::show(); 
    }
};

int main() {
    C obj;
    obj.show(); // Calls C's show(), which resolves the ambiguity by calling A::show()

    return 0;
}
