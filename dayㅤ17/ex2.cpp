#include<iostream>
using namespace std;

class Outside_Class{
    public:
    string name;
    int id;
    void printname();
    void printid()
    {
        cout<< "id is: " << id << endl;
    }
};

void Outside_Class::printname()
{
    cout << "name is: " << name << endl;
}

int main()
{
    Outside_Class obj;
    obj.name = "Yash";
    obj.id = 101;
    obj.printname();
    obj.printid();
    return 0;
}
