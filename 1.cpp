#include <iostream>
using namespace std;

int main() {
    int arr[10];

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "\nOriginal array:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < 10; i++) {
        arr[i] += 5;
    }

    cout << "\n\nArray after adding 5 to each element:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
