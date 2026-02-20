// demonstret of dma program

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;
    *ptr = 5;
    cout << *ptr << endl;
    // delete ptr;
    cout << *ptr;
    return 0;
}