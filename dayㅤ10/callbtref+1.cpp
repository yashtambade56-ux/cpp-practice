// wap to increment value of a variable using call by refrence

#include <iostream>
using namespace std;

void increment(int &n) {
    n = n + 1;
}

int main() {
    int a = 5;
    increment(a);
    cout << a << endl;
    return 0;
}
