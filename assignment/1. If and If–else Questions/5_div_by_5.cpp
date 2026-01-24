// Write a program to check whether a number is divisible by 5.

#include <iostream>
using namespace std;

int main() {
    int n = 25;

    // Check if the number is divisible by 5
    if (n % 5 == 0) {
        cout << n << " is divisible by 5." << endl;
    } else {
        cout << n << " is not divisible by 5." << endl;
    }

    return 0;
}