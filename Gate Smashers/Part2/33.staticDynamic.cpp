// Lecture-36: Static vs Dynamic Memory Allocation in C++ | Memory Management

/*
===============================================================================
                       STATIC MEMORY ALLOCATION
===============================================================================
- Allocation Time:  Compile time allocation
- Size Behavior:    Fixed memory size
- Syntax Overhead:  No extra keyword used
- Deallocation:     No deallocation required (automatically managed by scope)
- Code Example:     int arr[10];
- Memory Location:  Stored in stack memory
- Performance:      Faster
- Safety:           No memory leak

===============================================================================
                       DYNAMIC MEMORY ALLOCATION
===============================================================================
- Allocation Time:  Run time allocation
- Size Behavior:    Vary in size (can change size dynamically)
- Syntax Overhead:  Uses 'new' keyword
- Deallocation:     Manual deletion required (use delete / delete[])
- Code Example:     int* arr = new int[10];
- Memory Location:  Heap memory used
- Performance:      Slower due to allocation overhead
- Safety:           Yes, Memory leak can happen if not manually deallocated
===============================================================================
*/

#include <iostream>
using namespace std;

int main() {
    // 1. Static Allocation Example (Stack)
    int staticArr[10]; // Faster, allocated at compile time, size is fixed.

    // 2. Dynamic Allocation Example (Heap)
    int* dynamicArr = new int[10]; // Allocated at runtime using 'new'

    // CRITICAL: Dynamic memory must be freed manually to avoid memory leaks!
    delete[] dynamicArr; // Frees up the block of memory on the heap
    dynamicArr = nullptr; // Good practice: prevent dangling pointer
    
    return 0;
}
