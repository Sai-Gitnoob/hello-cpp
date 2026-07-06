#include <iostream>
using namespace std;

// =========================================================================
// C++ FRIEND FUNCTION CONCEPTS
// =========================================================================
// Definition: A friend function is a special function that can access 
//            private & protected members of a class.
//
// A friend function can be a:
// 1) Global Function
// 2) A function/method of another class
// =========================================================================

class Box {
private:
    int length = 10; // Private data member

    // Declaring the global function show() as a friend of this class
    friend void show(Box); 
};

// Global function definition (Does not use the Box:: scope resolution operator)
void show(Box b) {
    // VALID: Allowed because show() is a friend function of the Box class
    cout << b.length << endl; 
}

int main() {
    Box myBox;
    
    // Outputs: 10
    show(myBox); 
    
    return 0;
}
