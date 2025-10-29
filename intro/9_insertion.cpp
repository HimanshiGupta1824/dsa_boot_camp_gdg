#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5}; // extra space for one insertion
    int n = 5;
    int pos, value;

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nEnter position to insert (1 to " << n + 1 << "): ";
    cin >> pos;
    cout << "Enter value to insert: ";
    cin >> value;

    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position!";
        return 0;
    }

    // shift elements to the right
    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = value;
    n++;

    cout << "\nArray after insertion: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

