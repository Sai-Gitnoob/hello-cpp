#include <iostream>
using namespace std;

// =========================================================================
// C++ CONSTRUCTORS OVERVIEW
// =========================================================================
// Definition: A constructor is a special member function of a class that 
//            automatically gets called when an object of that class is created.
//
// Key Properties:
// - It must have the EXACT SAME NAME as the class.
// - It has NO return type (not even void).
// - Automatically invoked when the object is instantiated.
// - Must be placed in the public section to allow outside object creation.
//
// Types of Constructors:
// 1) Default Constructor       - Takes no arguments.
// 2) Parameterized Constructor - Takes arguments to initialize custom values.
// 3) Copy Constructor          - Initializes an object using another existing object.
// =========================================================================

class Demo {
public:
    // 1. Default Constructor
    Demo() {
        cout << "Default Constructor called automatically!" << endl;
    }
};

int main() {
    // This instantiation automatically invokes the default constructor
    Demo obj; 
    
    return 0;
}
