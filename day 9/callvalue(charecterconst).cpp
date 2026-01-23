// call by value (charecter constant)

#include <iostream>
using namespace std;

void change(char c) {
    c = 'z';
}
int main() {
    char ch = 'A';
    change(ch);
    cout << ch << endl;
    return 0;
}