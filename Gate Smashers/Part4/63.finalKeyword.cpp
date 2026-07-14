#include <iostream>
using namespace std;

// 1. Defining a class with the 'final' specifier prevents any class from inheriting from it.
class Base final {
public:
    void show() {
        cout << "Base class";
    }
};

// 2. This will cause a COMPILE-TIME ERROR!
// Error: cannot derive from 'final' base class 'Base'
class Derived : public Base {
    
};

int main() {
    return 0;
}
