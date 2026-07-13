/*
================================================================================
          OOP CORE CONCEPTS: ENCAPSULATION, DATA HIDING, & ABSTRACTION
================================================================================

1. ENCAPSULATION
   - Definition: Wrapping data (variables) and methods (functions) together into 
                 a single unit (a Class) and controlling access to that data.
   - Conceptual Diagram:
                 ┌──────────────────────────────────────┐
                 │               CLASS                  │
                 │  ┌────────────────┐ ┌──────────────┐ │
                 │  │ DATA (Members) │ │   METHODS    │ │
                 │  └────────────────┘ └──────────────┘ │
                 └──────────────────────────────────────┘
   - Code Pattern:
     class EncapsulatedUnit {
         int data; 
         void method() {}
     };


2. DATA HIDING
   - Definition: A subset/part of encapsulation where the internal details of a 
                 class are hidden from the outside world using access modifiers 
                 (private, protected, public).
   - Code Pattern:
     class SecureBank {
     private:
         double balance; // Hidden from outside directly
     public:
         void deposit(double amount) { balance += amount; } // Controlled access
     };


3. ABSTRACTION
   - Definition: Showing only the essential features of an object while hiding 
                 the unnecessary structural/implementation details.
   - Core Focus: Focuses entirely on WHAT an object does, NOT HOW it does it.
   - Code Pattern (Using Header/Abstract classes or interfaces):
     class Car {
     public:
         virtual void startEngine() = 0; // The user only cares WHAT this does,
                                         // not the complex mechanics inside.
     };
================================================================================
*/
