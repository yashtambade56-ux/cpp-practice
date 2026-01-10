// c++ program to demonstrate switch case statement
#include <iostream>
using namespace std;
int main() {
    char input = 'B';
    switch (input) {
        case 'A':
            cout << "You selected option A" << endl;
            break;
        case 'B':
            cout << "You selected option B" << endl;
            break;
        default:
            cout << "Invalid option selected" << endl;
    }
return 0;
}
