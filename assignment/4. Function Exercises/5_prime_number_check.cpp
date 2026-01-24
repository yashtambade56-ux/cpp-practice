// Prime Number Check
// Write a C++ program to define a function that checks whether a given number is prime or not and returns the result.

#include <iostream>
using namespace std;

int isPrime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int num = 7;

    if (isPrime(num))
        cout << "Prime Number";
    else
        cout << "Not a Prime Number";

    return 0;
}