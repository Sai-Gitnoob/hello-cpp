// Topic: Vector in STL | Dynamic Arrays with Automatic Resizing
// Definition: A vector is a dynamic array from the STL that automatically 
// resizes when you add or remove elements.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Allocation Architecture:
    // 'v' (the vector object meta-data) is allocated on the Stack.
    // The actual underlying array data ({10, 20, 30}) is allocated on the Heap.
    vector<int> v = {10, 20, 30};

    // 1. Initial State Check
    // .size()     -> Returns at present how many elements are stored.
    // .capacity() -> Returns the maximum elements it can currently hold without reallocating.
    cout << v.size();     // Handwritten Note: Outputs 3
    cout << v.capacity(); // Handwritten Note: Outputs 3

    // 2. Inserting an element beyond current capacity
    // Reallocation Mechanics: When the vector capacity is full, push_back() triggers 
    // an automatic capacity doubling operation behind the scenes (creates a new array of size 6, 
    // copies old elements over, inserts 40, and deletes the old array).
    v.push_back(40);

    // 3. Post-Insertion State Check
    cout << v.size();     // Outputs 4 (contains: 10, 20, 30, 40)
    cout << v.capacity(); // Outputs 6 (capacity doubled from 3 to 6)
    
    return 0;
}

/*
Visual Representation & Tracing from the Board:

Initial Grid State:
Stack Meta Objects  -> Heap Memory Arrays
[ v ] ------------> [ 10 | 20 | 30 ]  (Size: 3, Capacity: 3)

After v.push_back(40) (Capacity Doubling Rule):
[ v ] ------------> [ 10 | 20 | 30 | 40 | _ | _ ] (Size: 4, Capacity: 6)
*/
