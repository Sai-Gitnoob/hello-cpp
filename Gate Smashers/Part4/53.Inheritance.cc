#include <iostream>

using namespace std;

int main() {
    
    return 0;
}
/*
================================================================================
                    TYPES OF INHERITANCE IN C++
================================================================================

1. SINGLE INHERITANCE
   - Description: A derived class inherits from exactly one base class.
   - Diagram:     [ Base Class (BC) ]
                          │
                          ▼
                [ Derived Class (DC) ]


2. MULTIPLE INHERITANCE
   - Description: A derived class inherits from more than one base class.
   - Diagram:     [ Base Class 1 ]   [ Base Class 2 ]
                          │                 │
                          └────────┬────────┘
                                   ▼
                         [ Derived Class (DC) ]


3. MULTILEVEL INHERITANCE
   - Description: A class inherits from an already derived class, forming a chain.
   - Diagram:     [ Base Class (BC) ] -> [ Derived Class 1 ] -> [ Derived Class 2 ]


4. HIERARCHICAL INHERITANCE
   - Description: Multiple separate subclasses inherit from a single shared base class.
   - Diagram:                    [ Base Class (BC) ]
                                   /      |      \
                                  ▼       ▼       ▼
                               [DC 1]  [DC 2]  [DC 3]


5. HYBRID INHERITANCE
   - Description: A combination of two or more types of inheritance listed above
                  (e.g., combining hierarchical and multiple inheritance).
================================================================================
*/
