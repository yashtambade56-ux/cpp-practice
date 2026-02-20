// Title: Demonstration of Access Specifiers (Private and Public) in C++
// Aim:
// To write a C++ program to demonstrate the use of access specifiers (private and public) in a class and to understand data hiding.
// Problem Statement:
// Write a C++ program that:
// 1. Defines a class named Sample.
// 2. Declares:
// o One private data member a.
// o One public data member b.
// 3. Creates a public member function setValues() to assign values to both a and b.
// 4. Creates another public member function showPrivate() to display the value of the private data member a.
// 5. In the main() function:
// o Create an object of the class.
// o Call the function to initialize the values.
// o Modify the public data member directly.
// o Display both private and public data members.
// 6. Attempt to access the private variable directly (commented line) and observe the error.

#include<iostream>
using namespace std;
class Sample {
    private:
    int a;
    public:
    int b;
    void setValues() {
        cout << "Enter value for private member a: ";
        cin >> a;
        cout << "Enter value for public member b: ";
        cin >> b;
    }
    void showPrivate() {
        cout << "Value of private member a: " << a << endl;
    }
};
int main() {
    Sample obj;
    obj.setValues();
    obj.b = 20; // Modifying public data member directly
    obj.showPrivate(); // Displaying private data member                  
    cout << "Value of public member b: " << obj.b << endl; // Displaying public data member
    // cout << "Trying to access private member a directly: " << obj.a << endl; // This line will cause an error because 'a' is private
    return 0;
}