#include <iostream>
using namespace std;
class account{
    int balance;
    public:
    void setBalance(int b){
        balance=b;
    }
    int getBalance(int b){
        return balance;
    }};
int main(){
    account a1;
    a1.setBalance(5000);
    cout<<"Balance is: "<<a1.getBalance(0);
    return 0;
}