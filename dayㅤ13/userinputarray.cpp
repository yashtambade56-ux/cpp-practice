#include <iostream>
using namespace std;

int main() {

    int numbers[5];

    // Taking input from user
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // Accessing elements in the array
    cout << "First element: " << numbers[0] << endl;
    cout << "Last element: " << numbers[4] << endl;

    // Modifying an element
    numbers[2] = 10;   // Changing the third element to 10
    cout << "Modified array: ";

    // Looping through the array
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    return 0;
}
