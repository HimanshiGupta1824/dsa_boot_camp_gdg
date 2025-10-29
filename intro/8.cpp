#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];       // fixed array of 5 elements
    int n = 0;           // current number of elements

    cout << "You can store up to " << SIZE << " elements.\n";
    // Insert elements (up to 5)
    cout << "\nInsert elements into array:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
        n++;
    }
    // Display array
    cout << "\nArray elements are: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    // Insertion at a specific position
    int pos, value;
    cout << "\nEnter position to insert (1-" << n + 1 << "): ";
    cin >> pos;
    if (pos < 1 || pos > n + 1 || n == SIZE) {
        cout << "Insertion not possible!" << endl;
    } else {
        cout << "Enter value to insert: ";
        cin >> value;
        // Shift elements to the right
        for (int i = n; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos - 1] = value;
        n++;
    }

    cout << "\nArray after insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    cout << "\nEnter position to delete (1-" << n << "): ";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Deletion not possible!" << endl;
    } else {
        for (int i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    cout << "\nArray after deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

