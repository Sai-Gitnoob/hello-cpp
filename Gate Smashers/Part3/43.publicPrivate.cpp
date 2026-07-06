// =========================================================================
// C++ ACCESS SPECIFIERS & DATA HIDING
// =========================================================================
// Definition: Define the visibility and accessibility of class members 
//            (data members and member functions).
// Purpose:    They help enforce data hiding (Encapsulation).
//
// ACCESSIBILITY MATRIX:
// -------------------------------------------------------------------------
// Specifier  | Inside Class | Derived (Child) Class | Outside Class (main)
// -----------|--------------|-----------------------|----------------------
// private    |     Yes      |          No           |          No
// protected  |     Yes      |     	 Yes      |          No
// public     |     Yes      |          Yes          |          Yes
// =========================================================================

#include <iostream>
#include <string>
using namespace std;

class Parent {
private:
    int privateVar = 1;     // ONLY accessible inside this class

protected:
    int protectedVar = 2;   // Accessible here AND in child classes

public:
    int publicVar = 3;      // Accessible anywhere
};

class Child : public Parent {
public:
    void checkAccess() {
        // cout << privateVar; // ERROR: privateVar is private to Parent
        cout << protectedVar;  // VALID: protectedVar is protected
        cout << publicVar;     // VALID: publicVar is public
    }
};

int main() {
    Parent obj;
    // cout << obj.privateVar;   // ERROR: private
    // cout << obj.protectedVar; // ERROR: protected
    cout << obj.publicVar;       // VALID: public (Outputs: 3)
    
    return 0;
}
