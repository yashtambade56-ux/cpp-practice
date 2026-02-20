// find the smallest element in array 

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int smallest = numbers[0];
    for (int i = 1; i < 5; i++) {
        
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    cout << "The smallest element in the array is: " << smallest << endl;
    return 0;
}