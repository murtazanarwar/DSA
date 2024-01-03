#include <iostream>
#include <string>
using namespace std;

int main() {
    // Declaration and Initialization
    string str = "Hello, world!";

    // Accessing and Modifying Elements
    cout << "String: " << str << endl;
    cout << "Character at index 4: " << str[4] << endl;
    
    str[7] = 'W';
    cout << "Modified string: " << str << endl;

    // Size and Empty check
    cout << "Size: " << str.size() << endl;
    cout << "Empty? " << (str.empty() ? "Yes" : "No") << endl;

    // Substring
    string substring = str.substr(0, 5);
    cout << "Substring: " << substring << endl;

    // Concatenation
    string concat = str + " Have a nice day!";
    cout << "Concatenated string: " << concat << endl;

    // Clearing the string
    str.clear();
    cout << "Cleared string: " << str << endl;

    return 0;
}
