#include <iostream>

using namespace std;

int main() {
    bool a = true;
    bool b = false ;
    bool resultOr = a || b ;
    bool resultAnd =  a && b ;

    cout<< "The And result is " << resultAnd <<endl ;
    cout<< "The or Result is "<< resultOr << endl;

    return 0;
}

// =================================================================
// C++ PROGRAMMING NOTES: LOGICAL OPERATORS
// Lecture 17: Logical Operators in C++ by Varun Sir (Gate Smashers)
// =================================================================

/*
 * OPERATOR   PRECEDENCE    ASSOCIATIVITY   NAME / DESCRIPTION
 * --------   ----------    -------------   ------------------
 * !          1 (Highest)   Right to Left   Logical NOT (Inverts truth value)
 * &&         2             Left to Right   Logical AND (True only if BOTH are true)
 * ||         3 (Lowest)    Left to Right   Logical OR  (True if AT LEAST ONE is true)
 */

/* 
 * TRUTH TABLES FROM THE BOARD:
 * ----------------------------
 *  A   B  |  A && B  |  A || B  |  !A
 * ------------------------------------
 *  T   T  |    T     |    T     |   F
 *  T   F  |    F     |    T     |   F
 *  F   T  |    F     |    T     |   T
 *  F   F  |    F     |    F     |   T
 */

/*
 * SHORT-CIRCUIT EVALUATION RULE:
 * ------------------------------
 * && (AND): If the first expression is False, it skips checking the second.
 * || (OR) : If the first expression is True, it skips checking the second.
 */
