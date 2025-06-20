#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int i;

    cout << "Enter 10 numbers:\n";
    for (i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int smallest = arr[0];
    int largest = arr[0];

    for (i = 1; i < 10; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "\nSmallest number: " << smallest << endl;
    cout << "Largest number: " << largest << endl;

    return 0;
}

