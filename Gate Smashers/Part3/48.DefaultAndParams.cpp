/* ============================================================================
 * 📋 CORE LESSON: TYPES OF CONSTRUCTORS
 * ============================================================================
 * 
 * 1) DEFAULT CONSTRUCTOR
 *    - Takes NO parameters or arguments.
 *    - Purpose: Initializes every new object with a fixed baseline configuration.
 *    - Behavior: Automatically called when an object is formed without variables.
 * 
 * 2) PARAMETERIZED CONSTRUCTOR
 *    - Takes one or more arguments to initialize the object.
 *    - Purpose: Allows customized, dynamic initialization at the exact moment of formation.
 *    - Behavior: Passes external values directly into the object's private properties.
 * 
 * 3) COPY CONSTRUCTOR
 *    - Used to create a brand-new object as an exact copy of an existing object.
 *    - Purpose: Duplicates member states from a source object into a target object.
 *    - Behavior: Takes a reference to an object of the same class as its argument.
 */

#include <iostream>

class Student {
private:
    int roll;

public:
    // ------------------------------------------------------------------------
    // TYPE 1: DEFAULT CONSTRUCTOR (Takes no parameters)
    // ------------------------------------------------------------------------
    Student() {
        roll = 10; 
        std::cout << "[Default] Object formed with baseline Roll: " << roll << "\n";
    }

    // ------------------------------------------------------------------------
    // TYPE 2: PARAMETERIZED CONSTRUCTOR (Takes arguments to initialize)
    // ------------------------------------------------------------------------
    Student(int customRoll) {
        roll = customRoll;
        std::cout << "[Parameterized] Object formed with custom Roll: " << roll << "\n";
    }

    // ------------------------------------------------------------------------
    // TYPE 3: COPY CONSTRUCTOR (Used to create a copy of an existing object)
    // ------------------------------------------------------------------------
    Student(const Student &existingStudent) {
        roll = existingStudent.roll; // Copying the value over
        std::cout << "[Copy] New object formed by duplicating Roll: " << roll << "\n";
    }
};

int main() {
    std::cout << "--- 1. Executing Default Constructor ---\n";
    Student s1; // Roll is fixed at 10

    std::cout << "\n--- 2. Executing Parameterized Constructor ---\n";
    Student s2(45); // Roll initialized dynamically to 45

    std::cout << "\n--- 3. Executing Copy Constructor ---\n";
    // Passing existing object 's2' to create an identical new object 's3'
    Student s3(s2); 

    return 0;
}
