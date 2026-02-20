// slot the elements in an array

#include <iostream>
using namespace std;

int main(){
    int numbers[] = {4, 2, 1, 5, 3};
    int temp;
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (numbers[i] > numbers[j]) {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    cout << "The sorted array is: ";    
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}