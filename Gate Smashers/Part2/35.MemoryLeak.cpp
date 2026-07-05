// Topic: Practical Demonstration of a Memory Leak
// Concept: A memory leak happens when you allocate memory on the Heap using 'new',
// but lose the pointer pointing to it before calling 'delete'.

#include <iostream>
using namespace std;

void leakDemonstration() {
    // 1. Memory is allocated on the Heap.
    // 'ptr' is created on the Stack and stores the address of this Heap block.
    int* ptr = new int[1000]; 

    // 2. We do some work with the dynamic array...
    ptr[0] = 50;

    cout << "Memory allocated successfully at address: " << ptr << endl;

    // CRITICAL MISTAKE: We exit the function without calling 'delete[] ptr;'
    // When this function finishes execution:
    // - The stack frame for leakDemonstration() is destroyed.
    // - The local variable 'ptr' disappears from the Stack.
    // - The 1000 integers allocated on the Heap are still sitting there!
    // - We now have NO way to reference or free that memory. -> MEMORY LEAK!
}

int main() {
    cout << "Starting program..." << endl;

    // If we call this function inside a massive loop, the program will 
    // continuously hog memory until the operating system runs out of RAM.
    for (int i = 0; i < 5; i++) {
        leakDemonstration();
    }

    cout << "Program finished. Memory leaks occurred during the loops." << endl;
    return 0;
}

/*
Visualizing the Leak State after leakDemonstration() finishes:

  STACK REGION (Cleaned up)           HEAP REGION (Orphaned Memory Block)
  +----------------------+           +-------------------------------------+

  |                      |           | [ 50 | 0 | 0 | ... 1000 elements ]  |
  |  (ptr is GONE)       |     X - - | (Memory is trapped. The program     |
  |                      |           |  cannot reuse or free it).          |
  +----------------------+           +-------------------------------------+
*/
