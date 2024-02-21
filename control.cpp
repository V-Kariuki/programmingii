#include <iostream>

using namespace std;

int main() {
    // Example of if-else statement
    int x = 10;
    if (x > 0) {
        cout << "x is positive" << endl;
    } else {
        cout << "x is not positive" << endl;
    }

    // Example of else-if ladder
    int y = 0;
    if (y > 0) {
        cout << "y is positive" << endl;
    } else if (y < 0) {
        cout << "y is negative" << endl;
    } else {
        cout << "y is zero" << endl;
    }

    // Example of switch statement
    char grade = 'B';
    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        case 'C':
            cout << "Fair!" << endl;
            break;
        case 'D':
            cout << "Needs Improvement!" << endl;
            break;
        default:
            cout << "Invalid grade!" << endl;
    }

    return 0;
}
