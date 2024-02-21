#include <iostream>

using namespace std;

int main() {
    // Example of for loop
    cout << "For loop:" << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << i << " ";
    }
    cout << endl;

    // Example of while loop
    cout << "While loop:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        ++j;
    }
    cout << endl;

    // Example of do-while loop
    cout << "Do-while loop:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        ++k;
    } while (k <= 5);
    cout << endl;

    return 0;
}
