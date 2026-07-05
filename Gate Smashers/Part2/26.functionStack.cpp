#include <iostream>
using namespace std;

/*
================================================================================
TOPIC: HOW FUNCTIONS EXECUTE IN THE CALL STACK (LIFO-BASED)
================================================================================

CONCEPT DEFINITIONS:
- LIFO: Last In, First Out. The last function pushed onto the stack is the first 
        one to be executed and popped off.
- Stack Frame: A block of memory allocated on the call stack for a single 
               function execution. 
               It typically contains:
               1. Function Identifier (func)
               2. Parameters (Param)
               3. Local Variables (local var)
               4. Return Address (return)

--------------------------------------------------------------------------------
VISUALIZATION OF THE CALL STACK (At the peak of execution inside fun2):
--------------------------------------------------------------------------------

|                                         |
|-----------------------------------------|
|  fun2(result = 30)                      | <-- [TOP OF STACK] Will be POPPED first
|-----------------------------------------|
|  fun1(int a = 10, int b = 20)           | 
|       sum = 30                          | <-- [MIDDLE] Waiting for fun2 to return
|-----------------------------------------|
|  main()                                 |
|       num1 = 10, num2 = 20              | <-- [BOTTOM OF STACK] Initial stack frame
|_________________________________________|
================================================================================
*/

// Function 2: Called by fun1
void fun2(int result) {
    // result receives the value 30 passed from 'sum'
    cout << result; 
} // <-- After this brace, fun2's stack frame is POPPED from memory.

// Function 1: Called by main()
void fun1(int a, int b) {
    // a receives 10, b receives 20 from main's arguments
    int sum = a + b; // local variable 'sum' becomes 30
    fun2(sum);       // Calls fun2 and pushes fun2's frame onto the stack
} // <-- After fun2 finishes, control returns here. Then fun1's frame is POPPED.

// Main Function: Program Entry Point
int main() {
    int num1 = 10, num2 = 20; // Local variables inside main's stack frame
    
    fun1(num1, num2); // Calls fun1, pushing fun1's frame onto the stack
    
    return 0;
} // <-- Program ends, main's stack frame is cleared.
