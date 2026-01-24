// Write a program to compare two numbers and find the greater one.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // Compare the two numbers
    if (a > b) {
        cout << a << " is greater than " << b << "." << endl;
    } else if (b > a) {
        cout << b << " is greater than " << a << "." << endl;
    } else {
        cout << a << " is equal to " << b << "." << endl;
    }

    return 0;
}