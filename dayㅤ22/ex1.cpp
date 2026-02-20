#include<iostream>
using namespace std;
class Animal {
    public:
    virtual void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
    public:
    void sound() {
        cout << "Dog barks" << endl;
    }
};
class cat : public Animal {
    public:
    void sound() {
        cout << "Cat meows" << endl;
    }
};
int main() {
    Animal* ptr;

    Dog d;
    cat c;

    ptr = &d;
    ptr->sound(); 
    ptr = &c;
    ptr->sound();

    return 0;
}