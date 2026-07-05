// Lec-40: How to Use Vectors in C++ | Simple Guide for Beginners

/*
==========================================================================================
                              VECTOR FUNCTIONS CHEAT SHEET
==========================================================================================
Function          What it does
------------------------------------------------------------------------------------------
v.push_back(x)    Add element 'x' at the end of the vector
v.pop_back()      Remove the last element from the vector
v.size()          Returns the total number of elements currently stored
v.clear()         Removes all elements from the vector (sets size to 0)
v.front()         Returns a reference to the first element
v.back()          Returns a reference to the last element
v.empty()         Returns true if the vector contains no elements (size == 0)
==========================================================================================
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    // Practice trace using the board's functions:
    v.push_back(40);         // v becomes {10, 20, 30, 40}
    v.pop_back();            // v becomes {10, 20, 30}
    
    cout << v.size() << " ";  // Outputs: 3
    cout << v.front() << " "; // Outputs: 10
    cout << v.back() << " ";  // Outputs: 30
    cout << v.empty() << " "; // Outputs: 0 (false)

    v.clear();               // v becomes empty {}
    cout << v.empty() << endl;// Outputs: 1 (true)

    return 0;
}

/*
Important Structural Clarification Note:
Calling 'v.clear()' drops the active vector size completely down to 0, 
but it does NOT reduce or alter the underlying capacity allocation on the Heap.
*/
