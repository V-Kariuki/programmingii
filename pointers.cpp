#include <iostream>

using namespace std;

int main() {
    int x = 10; // Define an integer variable x and initialize it with the value 10
    
    int* ptr; // Declare a pointer variable ptr that can store the address of an integer
    ptr = &x; // Assign the address of variable x to ptr using the address-of operator (&)

    cout << "The value of x is: " << x << endl;
    cout << "The address of x is: " << &x << endl;
    cout << "The value of ptr (address it holds) is: " << ptr << endl;
    cout << "The value pointed to by ptr is: " << *ptr << endl; // Dereference ptr to get the value it points to

    return 0;
}
