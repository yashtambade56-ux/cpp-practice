// call by value demonstrationa

#include <iostream>
using namespace std;

void change(int x) {
    x = 20;
}
int main() {
    int a = 10;
    change(a);
    cout << a << endl;
    return 0;
}
