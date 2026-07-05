// Lecture-35: Pointer Arithmetic is WAY EASIER Than You Think With C++ Arrays

#include <iostream>
using namespace std;

int main() {
    // 1. Array declaration and base address assignment
    int arr[5] = {10, 20, 30, 40, 50};
    int* p = arr; // p points to arr[0] (Base Address: 1000)

    // 2. Output and dry-run execution flow from the board
    
    // Line 1: Pointer addition before dereference
    // p + 1 points to 1004. Dereferencing gives the value at 1004.
    cout << *(p + 1); // Board Note: Outputs 20 (p itself remains at 1000)

    // Line 2: Post-increment with dereference (*p++)
    // Precedence rule: Post-increment (++) executes but evaluates to old pointer first.
    // It dereferences old p (1000 -> 10), then increments p to 1004.
    cout << *p++;     // Board Note: Outputs 10 (p is now 1004)

    // Line 3: Pre-increment with dereference (*++p)
    // Precedence rule: Right-to-left associativity. Pointer increments first (1004 -> 1008).
    // Then it dereferences the updated pointer location.
    cout << *++p;     // Board Note: Outputs 30 (p is now 1008)

    // Line 4: Pre-decrement with dereference (*--p)
    // Pointer decrements first (1008 -> 1004). Then it dereferences it.
    cout << *--p;     // Board Note: Outputs 20 (p is now 1004)


    // 3. Pointer Subtraction / Distance Calculation
    int* start = &arr[1]; // Points to address 1004
    int* end = &arr[4];   // Points to address 1016

    // Pointer subtraction gives the number of elements between them, NOT byte difference.
    // Formula: (Address1 - Address2) / sizeof(DataType)
    // Board math: (1016 - 1004) = 12 bytes -> 12 / 4 bytes = 3
    int diff = end - start; 
    
    return 0;
}

/*
Visual Memory Layout & Dry-Run Trace from the Board:

Memory Array Grid:
Index:          0       1       2       3       4
Value:       |  10  |  20  |  30  |  40  |  50  |
Address:       1000    1004    1008    1012    1016

Handwritten Math Proofs from Board:
- Pointer Math Scale: 1000 + 4 (1 int step) = 1004
- Index Element Jump: *(1000 + 2 * 4) = *(1008) = 30
- Pointer Diff: 1016 - 1004 = 12 -> 12 / 4 = 3 elements
*/
