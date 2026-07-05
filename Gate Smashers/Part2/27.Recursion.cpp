#include <iostream>
using namespace std;

// Returns the Fibonacci number at position 'n'
int fibo(int n) {
    // Base cases: position 0 is 0, position 1 is 1
    if (n <= 1) {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    int num;
    cout << "Enter the number of terms: ";
    cin >> num;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < num; i++) {
        cout << fibo(i) << " ";
    }
    cout << endl;
    return 0;
}
