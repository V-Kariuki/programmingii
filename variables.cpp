#include <iostream>

using namespace std;
//#define identifier valueof constant.....This is the syntax for defining a constant
#define PI 3.14;
const double PIE = 3.14149;
int num3,num4;
int function2 (){
    cout<<"Enter the diameter of circle";
    cin>>num3>>num4;
    string Mystring;
    getline (cin,Mystring);
    int circumference = num3*PI;
    double area = (num3/2)*(num3/2)*PIE;
    cout<<"Circumference: "<<circumference;
    cout<<"Area: "<<area;
    return 0;
}

int main() {
    function2();
    // Variable declaration and assignment
    int num1 = 10;
    int num2 = 5;
    int product2;
    
    // Arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int remainder = num1 % num2;
    product2 = product*10;

    // Output results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    cout<<num3;

    // Data types
    int integerNum = 10;
    double doubleNum = 3.14;
    char character = 'A';
    bool boolean = true;

    cout << "Integer: " << integerNum << endl;
    cout << "Double: " << doubleNum << endl;
    cout << "Character: " << character << endl;
    cout << "Boolean: " << boolean << endl;

    return 0;
}
