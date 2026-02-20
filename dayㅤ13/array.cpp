#include <iostream>
using namespace std;

int main() {

    // Creating an array with numbers
    int numbers[] = {1, 2, 3, 4, 5};

    // Accessing elements in the array
    cout << "First element: " << numbers[0] << endl;   // Outputs: 1
    cout << "Last element: " << numbers[4] << endl;    // Outputs: 5

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