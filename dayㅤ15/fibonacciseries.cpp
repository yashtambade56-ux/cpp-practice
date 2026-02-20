// print fibonacci series

#include <iostream>
using namespace std;

int main(){
    int n;
    int a = 0, b = 1, next;
    cout << "Enter the number: ";
    cin >> n;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    return 0;
}