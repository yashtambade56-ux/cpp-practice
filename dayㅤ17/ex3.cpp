#include <iostream>
using namespace std;
class Number {
public:
  int num;
  Number() {
    cout << "Enter Number: ";
    cin >> num;
  }
};
void add(Number n1, Number n2) {
  cout << endl << n1.num + n2.num;
}
int main() {
  Number n1, n2;
  add(n1, n2);
  return 0;
}