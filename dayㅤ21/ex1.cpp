#include <iostream>
using namespace std;
class number {
    public:
    int value;
    number(int v) {
        value = v;
    }
    number operator+(number obj){
        return number(value + obj.value);
    }
};

int main(){
    number n1(30);
    number n2(20);
    number n3 = n1 + n2;

    cout << "sum =" << n3.value << endl;
    return 0;
}