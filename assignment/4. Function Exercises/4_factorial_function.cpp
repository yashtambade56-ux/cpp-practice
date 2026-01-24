// Factorial of a Number
// Write a C++ program using a function to calculate the factorial of a number entered by the user.

#include <iostream>
using namespace std;

int getfactorial() {
    int n = 5;
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() 
{
    int result;
    result = getfactorial();
    cout << "factorial is:" << result;
    return 0;
}