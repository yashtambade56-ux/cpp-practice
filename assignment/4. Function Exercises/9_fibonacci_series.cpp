// Fibonacci Series Using Function
// Write a C++ program to generate the Fibonacci series up to n terms using a function.

#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, c;

    for (int i = 1; i <= n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int n = 7; 

    fibonacci(n);

    return 0;
}
