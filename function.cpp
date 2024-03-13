#include <iostream>
using namespace std;

// Function declaration
int add(int a, int b);
float add(float a, float b);

int main() {
    int num1, num2;
    float num3, num4;

    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Enter two numbers: ";
    cin >> num3 >> num4;

    // Call the add function and store the result
    int result = add(num1, num2);

    // Output the result
    cout << "Sum: " << add(num1, num2) <<endl;
    cout << "Sum: " << add(num3, num4) <<endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    //int c = a+b;
    return a+b;
}

float add(float a, float b) {
    //float z = a+b;
    return a+b;
}