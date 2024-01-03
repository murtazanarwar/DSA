#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Declaration
    queue<int> numbers;

    // Adding Elements
    numbers.push(5);
    numbers.push(10);
    numbers.push(15);

    // Accessing and Removing Elements
    cout << "Front element: " << numbers.front() << endl;

    numbers.pop();
    cout << "Front element after pop: " << numbers.front() << endl;

    // Size and Empty check
    cout << "Size: " << numbers.size() << endl;
    cout << "Empty? " << (numbers.empty() ? "Yes" : "No") << endl;

    // Clearing the queue
    while (!numbers.empty()) {
        numbers.pop();
    }

    return 0;
}