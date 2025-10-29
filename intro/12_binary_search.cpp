#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int key, low = 0, high = n - 1, mid;
    bool found = false;

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nEnter element to search: ";
    cin >> key;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "\nElement found at position " << mid + 1 << endl;
            found = true;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1; // Search right half
        } else {
            high = mid - 1; // Search left half
        }
    }

    if (!found) {
        cout << "\nElement not found in the array." << endl;
    }

    return 0;
}

