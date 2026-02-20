// create a c++ program to add two numbers using dyanamic memory allpcation
// use delete at lest to deallocation the memory

#include <iostream>
using namespace std;

int main() {
    int *a = new int;
    int *b = new int;
    int *sum = new int;

    cout << "Enter first number: ";
    cin >> *a;

    cout << "Enter second number: ";
    cin >> *b;

    *sum = *a + *b;

    cout << "Sum = " << *sum << endl;

    delete a;
    delete b;
    delete sum;

    return 0;
}