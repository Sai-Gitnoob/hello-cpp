// Topic: Stack vs Heap Memory Allocation Visualization

#include <iostream>
using namespace std;

// ===============================================================================
// CASE 1: Static Allocation on the Stack
// ===============================================================================
void fun1() {
    // Memory for 'arr' is allocated entirely inside fun1's stack frame.
    int arr[5] = {1, 2, 3, 4, 5};
    cout << arr[2];
} // When fun1() ends, its stack frame is popped, and memory is auto-cleared.


// ===============================================================================
// CASE 2: Dynamic Allocation using Stack and Heap
// ===============================================================================
void fun2() {
    int n;       // Allocated on Stack
    cin >> n;    // Sample inputs shown on board: 10, 20, 100
    
    // 'ptr' is a local pointer variable allocated on the Stack.
    // 'new int[n]' allocates a variable-sized array on the Heap at runtime.
    // 'ptr' stores the starting address pointing to that Heap memory block.
    int* ptr = new int[n];
    
    for (int i = 0; i < n; i++) {
        ptr[i] = i + 1;
    }
    
    // CRITICAL: Frees the array memory block from the Heap.
    // If skipped, the Heap memory remains occupied even after fun2() exits!
    delete[] ptr; 
}


int main() {
    // Execution Flow 1
    fun1(); 
    
    // Execution Flow 2
    fun2();
    
    return 0;
}

/*
Visual Memory Architecture Layout from the Board:

1. Stack Behavior for fun1():
   +-------------------+

   | fun1() [arr grid] |  <- Top of stack (Auto-deleted when function exits)
   +-------------------+

   | main()            |  <- Bottom of stack
   +-------------------+

2. Stack & Heap Interaction for fun2():
   STACK REGION                        HEAP REGION
   +-------------------+              +-----------------------+

   | fun2()            |              | [ | | | | | | | | ]   |
   |  - n              |              | Allocated array block |
   |  - ptr -----------|------------> | (Stays alive until)   |
   +-------------------+              | (delete[] is called)  |

   | main()            |              +-----------------------+
   +-------------------+
*/
