#include <iostream>
using namespace std;

// =========================================================================
// C++ FRIEND CLASS CONCEPTS
// =========================================================================
// Definition: A friend class is a special class that can access private and 
//            protected members of another class.
// Note:      Friendship is one-way (Class Y sees Class X's data, but Class X 
//            cannot see Class Y's private data unless explicitly declared).
// =========================================================================

// Forward declaration of class X so class Y knows it exists
class X; 

class Y {
public:
    // This function takes an object of X as a parameter 
    // and accesses its private member 'a'
    void show(X obj); 
};

class X {
private:
    int a = 5; // Private member variable

    // Granting friend status to class Y
    friend class Y; 
};

// Definition of show() must come after class X is fully declared
void Y::show(X obj) {
    // VALID: Allowed because class Y is a friend of class X
    cout << obj.a << endl; 
}

int main() {
    X objX;
    Y objY;
    
    // Outputs: 5
    objY.show(objX); 
    
    return 0;
}
