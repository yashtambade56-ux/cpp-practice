// c++ program to demonstratrate the construcuters
#include <iostream>
using namespace std;
class abc {
public:
int id;

//default constructor
abc() {
cout << "Default constructor called" << endl;
id = 1;
}

//parameterized constructor
abc(int x) {
cout << "Parameterized constructor called" << endl;
id = x;
}
};
int main() {
abc a1; //default constructor called
cout << "ID of a1: " << a1.id << endl;
abc a2(10); //parameterized constructor called
cout << "ID of a2: " << a2.id << endl;
return 0;
}