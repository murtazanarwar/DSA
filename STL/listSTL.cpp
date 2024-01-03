#include <iostream>
#include <list>
using namespace std;

int main() {
    // Declaration and Initialization
    list<int> numbers = {1, 2, 3, 4, 5};

    // Adding Elements
    numbers.push_back(6);
    numbers.push_front(0);

    // Accessing Elements
    cout << "First element: " << numbers.front() << endl;
    cout << "Last element: " << numbers.back() << endl;

    // Iterating through the list
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // Size and Empty check
    cout << "Size: " << numbers.size() << endl;
    cout << "Empty? " << (numbers.empty() ? "Yes" : "No") << endl;

    // Removing Elements
    numbers.pop_back();
    numbers.pop_front();

    // Clearing the list
    numbers.clear();

    return 0;
}
