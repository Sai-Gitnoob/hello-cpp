// Topic: Definition and Example of a Memory Leak
// Definition: A memory leak occurs when a program allocates memory but fails to release it.

#include <iostream>
using namespace std;

void fun2() {
    int n;
    cin >> n;
    
    // Memory is allocated dynamically on the heap here.
    int* ptr = new int[n]; 

    // MISTAKE: The function ends here without a 'delete[] ptr;' statement.
    // The pointer 'ptr' on the stack is destroyed, leaving 'n' integers 
    // permanently trapped on the heap for the remaining life of the program.
}

int main() {
    // Calling this function allocates heap memory that is never freed.
    fun2(); 
    
    return 0;
}
