// write a c++ program that uses multiple inheritence to accept two integer values
// displays their sum using a derived class

#include <iostream>
using namespace std;

class inputA {
private:
    int a;
public:
    void getA() {
        cout << "Enter first number: ";
        cin >> a;
    }
    int returnA() {
        return a;
    }
};

class inputB {
private:
    int b;
public:
    void getB() {
        cout << "Enter second number: ";
        cin >> b;
    }
    int returnB() {
        return b;
    }
};

class sum : public inputA, public inputB {
public:
    void display() {
        int result = returnA() + returnB();
        cout << "The sum of the two numbers is: " << result << endl;
    }
};

int main() {
    sum s;
    s.getA();
    s.getB();
    s.display();
    return 0;
}
