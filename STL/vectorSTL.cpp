#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declaration and Initialization
    vector<int> numbers = {1, 2, 3, 4, 5};

    // Adding Elements
    numbers.push_back(6);
    numbers.emplace_back(7);

    // Accessing Elements
    cout << "Element at index 2: " << numbers.at(2) << endl;
    cout << "Element at index 3: " << numbers[3] << endl;
    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;

    // Size and Capacity
    cout << "Size: " << numbers.size() << endl;
    cout << "Capacity: " << numbers.capacity() << endl;
    cout << "Empty? " << (numbers.empty() ? "Yes" : "No") << endl;

    // Iterating through the vector
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Modifying Elements
    numbers.insert(numbers.begin() + 2, 10);
    numbers.erase(numbers.begin() + 4);

    // Resizing and Clearing
    numbers.resize(8);
    numbers.clear();

    return 0;
}
