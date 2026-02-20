//funtion overloading or 
//compile-time polymorphism
#include<iostream>
using namespace std;
class poly {
    public :
    void func(int x) 
    {
        cout<<"The value of x is : "<<x<<endl;
    }
    void func(double x)
    {
        cout<<"The value of x is : "<<x<<endl;
    }
    void func(int x, int y)
    {
        cout<<"The value of x and y is " <<x<<" and "<<y<<endl;
    }
};
int main()
{    poly p;
    p.func(5);
    p.func(5.5);
    p.func(5,10);
    return 0;
}