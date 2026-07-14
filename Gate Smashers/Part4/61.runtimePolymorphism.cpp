#include <iostream>

using namespace std;

// Base class
class Payment {
public:
    // 'virtual' keyword enables runtime polymorphism
    virtual int pay() {
        return 15000; 
    }
    
    // Virtual destructor is good practice for polymorphic base classes
    virtual ~Payment() {} 
};

// Derived class 1
class CreditCardPayment : public Payment {
public:
    // Overriding the base class method
    int pay() override {
        return 20000; 
    }
};

// Derived class 2
class CashPayment : public Payment {
public:
    // Overriding the base class method
    int pay() override {
        return 10000; 
    }
};

int main() {
    // Base class pointers pointing to derived class objects
    Payment* p1 = new CreditCardPayment();
    Payment* p2 = new CashPayment();
    Payment* p3 = new Payment();

    // The correct pay() method is determined at runtime (belated binding)
    cout << "Credit Card Payment: " << p1->pay() << endl; // Outputs 20000
    cout << "Cash Payment: " << p2->pay() << endl;        // Outputs 10000
    cout << "Standard Payment: " << p3->pay() << endl;     // Outputs 15000

    // Clean up memory
    delete p1;
    delete p2;
    delete p3;

    return 0;
}
