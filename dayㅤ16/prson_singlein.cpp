#include <iostream>
using namespace std;

class persom {
    public:
    string name;
    int age;
    void showperson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class student : public persom {
    public:
    int rollno;
    void showstudent() {
        cout << "Roll no: " << rollno << endl;
    }
};

int main() {
    student s1;
    s1.name = "satvika 😂";
    s1.age = 20;
    s1.rollno = 101;
    s1.showperson();
    s1.showstudent();
    return 0;
}