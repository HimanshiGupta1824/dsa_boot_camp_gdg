#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int key, found = 0;

    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nEnter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "\nElement found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }

    if (!found) {
        cout << "\nElement not found in the array." << endl;
    }

    return 0;
}

