#include <iostream>
using namespace std;

class Channel {
private:
    int subscribers; // Private member variable by default

public:
    // Parameterized Constructor to initialize subscribers
    Channel(int s) {
        subscribers = s;
    }

    // Overloading the Prefix Increment Operator (++gs)
    void operator++() {
        subscribers++; // Increments the private variable
    }

    // Member function to print the current subscriber count
    void display() {
        cout << subscribers << endl;
    }
};

int main() {
    // 1. Create an object 'gs' and initialize subscribers to 1000
    Channel gs(1000);

    // 2. Call the overloaded prefix increment operator
    ++gs; 

    // 3. Display the updated value (Outputs: 1001)
    gs.display();

    return 0;
}
/*
============================================================
              OPERATORS THAT CANNOT BE OVERLOADED
============================================================
The following operators in C++ are restricted from overloading
because changing their meaning could break the language syntax,
safety, or basic structure.
*/

// 1. .     -> Dot operator (Class member access)
// 2. ::    -> Scope resolution operator
// 3. ?:    -> Ternary / Conditional operator
// 4. sizeof -> Size operator (Evaluates object size at compile-time)
// 5. typeid -> Runtime type info operator (RTTI)
// 6. .*    -> Pointer-to-member operator
