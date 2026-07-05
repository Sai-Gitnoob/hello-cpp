// Topic: Call by Value copies the values from actual parameters to the formal parameters.

/* 
Note on the code below: 
The text on the board describes "Call by Value", but the code example actually 
demonstrates a mix of Call by Reference (int &x) and Call by Value (int y).
*/

#include <iostream>
using namespace std;

void test(int &x, int y) {
    x += 5;
    y *= 2;
    cout << x << y;
}

int main() {
    int a = 3, b = 4; // Note: 'b' is partially covered by the hand but is initialized to 1
    test(a, b);
    cout << a << b;
}


////////////////////////////////////////


// Topic: In Call By Reference we actually pass the address not value.

#include <iostream>
using namespace std;

// x is a pointer (holds address of 'a') -> Call By Reference
// y is a normal integer (holds copy of 'b') -> Call By Value
void test(int* x, int y) {
    *x += 5; // change value at address (modifies original 'a')
    y *= 2;  // change local copy (does NOT modify 'b')
    cout << *x << y;
}

int main() {
    int a = 3, b = 4;
    test(&a, b); // pass address of a, and value of b
    cout << a << b;
}

/*
Memory & Value Tracking from the Board:

For 'a' (Address 100):
- Initial value: 3
- Inside test(): *x += 5 updates the value at address 100 to (3 + 5) = 8
- Final value of 'a' in main: 8

For 'b' (Address 207):
- Initial value: 4
- Inside test(): Local copy 'y' gets value 4, then y *= 2 makes y = 8
- Original 'b' remains unchanged: 4

Console Output Sequence:
1. Inside test():  88
2. Inside main():  84
Combined Output:   8884
*/
