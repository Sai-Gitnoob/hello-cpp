#include <iostream>

using namespace std;

int main() {
  int number = 5; // Binary: 0000 0101
    
    // 1. Left Shift (<<)
    // Formula: number * (2^shifted_position)
    // 5 << 1 shifts bits left by 1 position: 0000 1010 (which is 10)
    int leftShiftResult = number << 1; 
    
    // 2. Right Shift (>>)
    // Formula: number / (2^shifted_position)
    // 5 >> 1 shifts bits right by 1 position: 0000 0010 (which is 2)
    int rightShiftResult = number >> 1; 

    // Output results
    std::cout << "Original Number: " << number << std::endl;
    std::cout << "After Left Shift (5 << 1): " << leftShiftResult << std::endl;
    std::cout << "After Right Shift (5 >> 1): " << rightShiftResult << std::endl;

    return 0;
}
// =================================================================
// C++ PROGRAMMING NOTES: BITWISE OPERATORS
// Lecture 16: Bitwise Operators in C++ by Varun Sir (Gate Smashers)
// =================================================================

/*
 * OPERATOR   NAME
 * --------   ----
 * &          Bitwise AND
 * |          Bitwise OR
 * ^          Bitwise XOR  (Note: Corrected typo in image table)
 * ~          Bitwise NOT
 * <<         Left Shift
 * >>         Right Shift
 */

/* 
 * QUICK REFRESHER ON HOW THEY WORK:
 * ---------------------------------
 * & (AND)  : Returns 1 if both bits are 1, otherwise 0.
 * | (OR)   : Returns 1 if at least one bit is 1, otherwise 0.
 * ^ (XOR)  : Returns 1 if bits are different, 0 if they are the same.
 * ~ (NOT)  : Inverts all the bits (flips 0 to 1 and 1 to 0).
 * << (Left): Shifts bits to the left, filling empty spaces with 0.
 * >> (Right): Shifts bits to the right.
 */
