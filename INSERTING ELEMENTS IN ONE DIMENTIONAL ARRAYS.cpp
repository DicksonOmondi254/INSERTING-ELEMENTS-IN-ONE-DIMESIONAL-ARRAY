#include <iostream>
using namespace std;

void insertElement(int arr[], int& n, int element, int position) {
    // Check if the position is valid
    if (position < 0 || position > n) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift elements to the right
    for (int i = n; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[position] = element;

    // Increment the size of the array
    ++n;
}

int main() {
    int arr[20] = {2, 4, 1, 8, 6}; // Initial array with 5 elements
    int n = 5; // Current size of the array
    int element = 23; // Element to be inserted
    int position = 2; // Position at which the element is to be inserted

    cout << "Before insertion: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertElement(arr, n, element, position);

    cout << "After insertion: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
