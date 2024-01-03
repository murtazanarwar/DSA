#include <iostream>
#include <stack>
using namespace std;

int main() {
    // Declaration
    stack<int> numbers;

    // Adding Elements
    numbers.push(5);
    numbers.push(10);
    numbers.push(15);

    // Accessing and Removing Elements
    cout << "Top element: " << numbers.top() << endl;

    numbers.pop();
    cout << "Top element after pop: " << numbers.top() << endl;

    // Size and Empty check
    cout << "Size: " << numbers.size() << endl;
    cout << "Empty? " << (numbers.empty() ? "Yes" : "No") << endl;

    // Clearing the stack
    while (!numbers.empty()) {
        numbers.pop();
    }

    return 0;
}
