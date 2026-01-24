//Swap Two Numbers
// Write a C++ program to swap two numbers using a function:

#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << x << " " << y << endl;
}
int main() {
    int a = 5, b = 10;
    swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}