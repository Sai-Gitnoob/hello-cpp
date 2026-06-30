#include <iostream>

using namespace std;
int x ; //global 
// if not defined it gives 0 as default
int main() {
    int y  ; //local 
    // if not defined it gives garbage value (any value)
    cout << x <<endl;
    cout << y << endl ;
    int x =10 ;
    cout << x <<endl;

    // if defined in the local scope the precidence is given to the local variable first
    return 0;
}

/*
0
32764
Example ^
*/