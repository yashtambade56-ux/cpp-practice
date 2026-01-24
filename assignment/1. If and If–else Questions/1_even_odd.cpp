//Write a program to check whether a number is even or odd.

#include <iostream>
using namespace std;

int main() {
    int n = 4;


    // Check if the number is even or odd
    if (n % 2 == 0) {
        cout << n << " is even." << endl;
    } else {
        cout << n << " is odd." << endl;
    }

    return 0;
}
