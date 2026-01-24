// Wap to find the square of a given number using call by refrence

#include <iostream>
using namespace std;

void square(int &n) {
    n = n * n;
}

int main() {
    int a = 4;
    square(a);
    cout << "square =" << a;
    return 0;
}