#include <iostream>

using namespace std;


int main() {
    // 1. Simple assignment (=)
    int a = 10; 
    int b = 3;
    std::cout << "Initial values -> a: " << a << ", b: " << b << "\n\n";

    // 2. Add and assign (+=)
    a += b; // Equivalent to: a = a + b (10 + 3)
    std::cout << "After a += b  -> a is now: " << a << "\n";

    // 3. Subtract and assign (-=)
    a -= b; // Equivalent to: a = a - b (13 - 3)
    std::cout << "After a -= b  -> a is now: " << a << "\n";

    // 4. Multiply and assign (*=)
    a *= b; // Equivalent to: a = a * b (10 * 3)
    std::cout << "After a *= b  -> a is now: " << a << "\n";

    // 5. Divide and assign (/=)
    a /= b; // Equivalent to: a = a / b (30 / 3)
    std::cout << "After a /= b  -> a is now: " << a << "\n";

    // 6. Modulus and assign (%=)
    a %= b; // Equivalent to: a = a % b (10 % 3 = remainder 1)
    std::cout << "After a %= b  -> a is now: " << a << "\n\n";

    // Resetting 'a' for bitwise operations
    a = 5; // Binary: 0101
    b = 3; // Binary: 0011
    std::cout << "Resetting for Bitwise -> a: 5 (0101), b: 3 (0011)\n\n";

    // 7. Bitwise AND and assign (&=)
    a &= b; // Equivalent to: a = a & b (0101 & 0011 = 0001)
    std::cout << "After a &= b  -> a is now: " << a << "\n";

    // Resetting 'a' to 5 (0101)
    a = 5; 
    // 8. Bitwise XOR and assign (^=)
    a ^= b; // Equivalent to: a = a ^ b (0101 ^ 0011 = 0110)
    std::cout << "After a ^= b  -> a is now: " << a << "\n";

    // 9. Left shift and assign (<<=)
    a <<= 1; // Equivalent to: a = a << 1 (0110 shifted left by 1 = 1100, which is 12)
    std::cout << "After a <<= 1 -> a is now: " << a << "\n";

    return 0;
}

// =================================================================
// C++ PROGRAMMING NOTES: ASSIGNMENT OPERATORS
// Lecture 18: Assignment Operators in C++ by Varun Sir (Gate Smashers)
// =================================================================

/*
 * OPERATOR   MEANING                  EXAMPLE    EQUIVALENT TO
 * --------   -------                  -------    -------------
 * =          Simple assignment        a = b      a = 5 (assigns value 5 to a)
 * +=         Add and assign           a += b     a = a + b
 * -=         Subtract and assign      a -= b     a = a - b
 * *=         Multiply and assign      a *= b     a = a * b
 * /=         Divide and assign        a /= b     a = a / b
 * %=         Modulus and assign       a %= b     a = a % b
 * &=         Bitwise AND and assign   a &= b     a = a & b
 * ^=         Bitwise XOR and assign   a ^= b     a = a ^ b
 * <<=        Left shift and assign    a <<= 1    a = a << 1
 */

/* 
 * KEY TAKEAWAY:
 * -------------
 * Compound assignment operators (like +=, *=, <<=) are shorthand 
 * syntax. They perform the operation first and then store the result 
 * back into the variable on the left-hand side.
 */
