/* 
Topic: Arrays
Definition: A fixed-size collection of elements of the same data type, stored in contiguous memory.
Key Properties:
- Indexing starts from 0.
- Memory is statically allocated at compile time.
*/

#include <iostream>
using namespace std;

int main() {
    // Array declaration and initialization
    // Size = 6 elements, each element takes 4 Bytes (4B) in memory
    int marks[6] = {90, 80, 85, 70, 60, 50};

    /*
    Memory & Index Mapping Analysis from the Board:
    
    Index:      [0]    [1]    [2]    [3]    [4]    [5]
    Value:       90     80     85     70     60     50
    Address:   1000   1004   1008   1012   1016   1020 ... up to 1023
    
    Note: Elements are stored contiguously. Each integer takes 4 bytes, 
    so the address increments by 4 for each subsequent element.
    */

    /*
    Size Calculation Analysis:
    Formula: Total Size = Number of Elements * Size of Data Type
    Calculation: sizeof(marks) -> 6 elements * 4 Bytes = 24 Bytes (24B)
    */
    
    return 0;
}
