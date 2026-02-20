#include <iostream>
using namespace std;

class student {
public:
    int rno;
    char name[50];
    double fee;

    student() {
        cout << "Enter the roll no: ";
        cin >> rno;

        cout << "Enter the name: ";
        cin >> name;   // works for single-word names

        cout << "Enter the fee: ";
        cin >> fee;
    }

    void display() {
        cout << "\nRoll No: " << rno 
             << "\nName: " << name 
             << "\nFee: " << fee << endl;
    }
};

int main() {
    student s1;   // constructor called automatically
    s1.display();
    return 0;
}
