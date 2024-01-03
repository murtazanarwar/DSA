
#include <iostream>
#include <array>
using namespace std;

int main() {
    // Declaration and Initialization
    array<int, 5> arr = {1, 2, 3, 4, 5};

    // Accessing Elements
    cout << "Element at index 2: " << arr[2] << endl;
    cout << "First element: " << arr.front() << endl;
    cout << "Last element: " << arr.back() << endl;

    // Size
    cout << "Size: " << arr.size() << endl;

    // Iterating through the array
    cout << "Array elements: ";
    for (const auto& element : arr) {
        cout << element << " ";
    }
    cout << endl;

    // Clearing an array doesn't exist; elements remain with their initialized values

    return 0;
}
