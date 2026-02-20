// count odd numbers in an array

#include <iostream>
using namespace std;

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            count++;
        }
    }
    cout << "The number of odd numbers in the array is: " << count << endl;
    return 0;
}