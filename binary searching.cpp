#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 82};
    int size = 8;
    int num;
    int start = 0, end = size - 1;
    bool found = false;

    cout << "Enter number to search: ";
    cin >> num;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == num) {
            cout << "Number found at index " << mid << endl;
            found = true;
            break;
        }
        else if (arr[mid] < num) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if (!found) {
        cout << "Number not found." << endl;
    }

    return 0;
}
