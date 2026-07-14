/*
============================================================
           STATIC DATA MEMBERS & STATIC FUNCTIONS           
============================================================
*/

// --- STATIC DATA MEMBER ---
// * A class-level variable shared collectively by ALL objects of the class.
// * Only ONE copy of the variable exists in memory for the entire class.
// * Changing its value in one object updates it for all other objects.
// * MUST be defined and initialized outside the class block using '::'.

// --- STATIC MEMBER FUNCTION ---
// * A class-level function that can be executed without creating any object.
// * Invoked directly using the class name and scope resolution: ClassName::Function()
// * RESTRICTION: Can directly access ONLY static variables or other static functions.
// * RESTRICTION: Does not have access to the implicit 'this' pointer.

#include <iostream>
using namespace std;

class Bank {
public:
    int balance;          // Instance variable: Each object gets its own copy
    static float rate;    // Static variable: Shared by all objects (interest rate)
};

// CRITICAL STEP: Definition and initialization of the static member outside the class
float Bank::rate = 6.5;

int main() {
    // Creating two separate object instances of Bank
    Bank a, b;

    // Assigning distinct values to individual instance variables
    a.balance = 1000;
    b.balance = 2000;

    // Displaying individual instance balances
    cout << a.balance << endl; // Outputs: 1000
    cout << b.balance << endl; // Outputs: 2000

    // Accessing the shared static variable directly via the Class Name
    cout << Bank::rate << endl; // Outputs: 6.5

    return 0;
}
