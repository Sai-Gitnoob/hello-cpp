#include <iostream>
using namespace std;

// =========================================================================
// ACCESS SPECIFIERS IMPLEMENTATION PRACTICE
// =========================================================================

class Demo {
private: 
    int a;         // Only accessible inside Demo

protected: 
    int b;         // Accessible inside Demo and derived classes (Child)

public:
    int c;         // Accessible anywhere
    
    void set() { 
        a = 10; b = 20; c = 30; // VALID: Class functions can access all its members
    }
    
    void show() {
        cout << a << " " << b << " " << c << endl; // VALID
    }
};

class Child : public Demo {
public:
    void access() {
        // a = 10; // COMPILATION ERROR: 'a' is private in Demo
        b = 20;    // VALID: 'b' is protected, so derived classes can access it
        c = 30;    // VALID: 'c' is public
    }
};

int main() {
    Demo d;
    
    d.set();       // VALID: public function
    d.show();      // VALID: public function

    // d.a = 5;    // COMPILATION ERROR: 'a' is private (cannot access via object)
    // d.b = 10;   // COMPILATION ERROR: 'b' is protected (cannot access via object)
    
    d.c = 40;      // VALID: 'c' is public
    cout << d.c << endl;
    
    return 0;
}
