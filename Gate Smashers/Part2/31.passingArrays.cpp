// Topic: How Arrays are Passed in C++ | Pass by Reference (Deep Dive)
// Key Concept: 'arr[]' does NOT create a separate copy of the array in memory. 
// Instead, it points directly to the original 'numbers' array (Pass by Reference).

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; 
        // Iteration Outputs:
        // i = 0 -> prints 10
        // i = 1 -> prints 20
        // i = 2 -> prints 30
        // i = 3 -> prints 40
        // i = 4 -> prints 50
    }
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;

    // Handwritten Formula on Board for calculating array size dynamically:
    // Size = Size of arr / Size of int
    // Code implementation equivalent: int size = sizeof(numbers) / sizeof(numbers[0]);

    printArray(numbers, size);
}

/*
Memory Tracking & Pointer Pointer Arithmetic from the Board:

1. Array Reference Behavior:
   - The instructor crossed out "arr[] Copy" to emphasize that NO copy is made.
   - The pointer 'arr' points directly to the original 'numbers' array at base address 1000.

2. Pointer Dereferencing Syntax (Alternative to array index notation):
   - Element at index 0 (10): *number
   - Element at index 1 (20): *(number + 1)
   - Element at index 2 (30): *(number + 2)

Visual Memory Grid:
Base Address -> [1000]
Index:            0     1     2     3     4
Elements:      | 10  | 20  | 30  | 40  | 50 |
                 ^     ^     ^
Pointers:     *num  *(num+1) *(num+2)
*/
