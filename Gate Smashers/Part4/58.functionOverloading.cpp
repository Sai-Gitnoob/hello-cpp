#include <iostream>

using namespace std;

/* =============================================================================
   📌 EXAMPLE OF: FUNCTION OVERLOADING (By Parameter Type)
   =============================================================================
   Definition: Defining multiple functions with the same name, but with different 
               parameters (either different types or a different number).
============================================================================= */

// Version 1: Accepts two integer parameters and returns an int
int add(int a, int b) {
    return a + b;
}

// Version 2: Overloaded version that accepts two double parameters and returns a double
double add(double a, double b) {
    return a + b;
}

int main() {
    // Compiler matches this to add(int, int) because 5 and 3 are integers
    cout << add(5, 3) << endl;       // Outputs: 8

    // Compiler matches this to add(double, double) because 2.5 and 4.3 are doubles
    cout << add(2.5, 4.3) << endl;   // Outputs: 6.8

    return 0;
}
