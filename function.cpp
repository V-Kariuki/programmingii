#include <iostream>

// Function declaration
int add(int a, int b);

int main() {
    int num1, num2;

    // Input two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    // Call the add function and store the result
    int result = add(num1, num2);

    // Output the result
    std::cout << "Sum: " << result << std::endl;

    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}
