#include <iostream>

using namespace std;

int main() {
    
  
    return 0;
}
// =================================================================
// C++ PROGRAMMING NOTES: OPERATOR PRECEDENCE & ASSOCIATIVITY
// Lecture 19: All Operators Precedence & Associativity by Varun Sir
// =================================================================

/*
 * LEVEL   OPERATORS           DESCRIPTION                                     ASSOCIATIVITY
 * -----   ---------           -----------                                     -------------
 * 1 (Max) ::                  Scope resolution                                Left to Right
 * 
 * 2       ++ -- () [] . ->    Postfix increment/decrement, function call,      Left to Right
 *                             array subscript, member access
 * 
 * 3       ++ -- + - ! ~ * &   Prefix increment/decrement, unary plus/minus,   Right to Left
 *         sizeof new delete   logical NOT, bitwise NOT, dereference, etc.
 * 
 * 4       .* ->*              Pointer-to-member operators                    Left to Right
 * 
 * 5       * / %               Multiplication, division, modulo                Left to Right
 * 
 * 6       + -                 Addition, subtraction                           Left to Right
 * 
 * 7       << >>               Bitwise shift left/right                        Left to Right
 */

/*
 * CORE CONCEPTS:
 * --------------
 * Precedence   : Determines which operator is evaluated first when different 
 *                operators appear in the same expression (e.g., * before +).
 * 
 * Associativity: Determines evaluation order (Left-to-Right or Right-to-Left) 
 *                when operators have the SAME precedence level.
 */

 // =================================================================
// C++ PROGRAMMING NOTES: OPERATOR PRECEDENCE & ASSOCIATIVITY (PART 2)
// Lecture 19: All Operators Precedence & Associativity (Gate Smashers)
// =================================================================

/*
 * LEVEL   OPERATORS           DESCRIPTION                                     ASSOCIATIVITY
 * -----   ---------           -----------                                     -------------
 * 8       < <= > >=           Relational operators                            Left to Right
 * 
 * 9       == !=               Equality operators                              Left to Right
 * 
 * 10      &                   Bitwise AND                                     Left to Right
 * 
 * 11      ^                   Bitwise XOR                                     Left to Right
 * 
 * 12      |                   Bitwise OR                                      Left to Right
 * 
 * 13      &&                  Logical AND                                     Left to Right
 * 
 * 14      ||                  Logical OR                                      Left to Right
 * 
 * 15      ?:                  Ternary conditional                             Right to Left
 * 
 * 16(Min) = += -= *= /= %=    Assignment operators                            Right to Left
 *         <<= >>= &= ^=
 */

/*
 * CRITICAL OBSERVATION FROM LEVELS 10-14:
 * ---------------------------------------
 * Notice that Bitwise operators (&, ^, |) have HIGHER precedence than 
 * Logical operators (&&, ||). 
 * 
 * Always wrap bitwise expressions in parentheses when mixing them with 
 * logical conditions to avoid logical bugs! Example: (a & b) && (c || d)
 */


 // =================================================================
// C++ PROGRAMMING NOTES: PRECEDENCE SOLVED EXAMPLES
// Lecture 19: Board Examples Explained step-by-step
// =================================================================

/*
 * EXAMPLE 1: int a = 5 == 10 != 20;
 * ---------------------------------
 * Operators involved: == (Equality), != (Inequality), = (Assignment)
 * Precedence rule   : == and != have higher precedence than =, and associate Left-to-Right.
 * 
 * Step 1: Evaluate (5 == 10)  -> false (0)
 * Step 2: Evaluate (0 != 20)  -> true (1)
 * Step 3: Assign to 'a'       -> a = 1
 * Final Answer: a = 1
 */

/*
 * EXAMPLE 2: 6 & 4 == 4
 * ---------------------
 * Operators involved: & (Bitwise AND), == (Equality)
 * Precedence rule   : == (Level 9) is HIGHER than & (Level 10).
 * 
 * Step 1: Evaluate (4 == 4)   -> true (1)
 * Step 2: Evaluate (6 & 1)    -> Binary 0110 & 0001 = 0000 (0)
 * Final Answer: 0
 */

/*
 * EXAMPLE 3: int a = 10; a += 2 << 1;
 * -----------------------------------
 * Operators involved: += (Compound Assign), << (Bitwise Left Shift)
 * Precedence rule   : << (Level 7) is HIGHER than += (Level 16).
 * 
 * Step 1: Evaluate (2 << 1)   -> 2 * 2^1 = 4
 * Step 2: Evaluate (a += 4)   -> 10 + 4 = 14
 * Final Answer: a = 14
 */

/*
 * EXAMPLE 4: !(5 > 2 && 0)
 * ------------------------
 * Operators involved: () (Parentheses), ! (Logical NOT), > (Greater than), && (Logical AND)
 * Precedence rule   : Parentheses evaluate first. Inside them, > has higher precedence than &&.
 * 
 * Step 1: Inside () solve (5 > 2) -> true (1)
 * Step 2: Inside () solve (1 && 0) -> false (0)
 * Step 3: Outside () apply !(0)    -> true (1)
 * Final Answer: 1
 */
