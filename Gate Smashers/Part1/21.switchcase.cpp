#include <iostream>

using namespace std;


int main() {
    int choice = 2;

    switch (choice) {
        case 1:
            cout << "Option 1 selected";
            break;
        case 2:
            cout << "Option 2 selected";
            break;
        case 3:
            cout << "Option 3 selected";
            break;
        default:
            cout << "Invalid choice";
            break;
    }


    return 0;
}