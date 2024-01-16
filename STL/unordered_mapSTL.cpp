#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // Declaration and Initialization
    unordered_map<string, int> ages = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 35}};

    // Adding Elements
    ages["David"] = 28;
    ages.insert({"Emily", 27});

    // Accessing Elements
    cout << "Age of Alice: " << ages["Alice"] << endl;

    // Checking if an element exists
    if (ages.find("Bob") != ages.end()) {
        cout << "Age of Bob: " << ages["Bob"] << endl;
    } else {
        cout << "Bob not found" << endl;
    }

    // Iterating through the unordered_map
    for (const auto& pair : ages) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Size and Empty check
    cout << "Size: " << ages.size() << endl;
    cout << "Empty? " << (ages.empty() ? "Yes" : "No") << endl;

    // Erasing Elements
    ages.erase("Charlie");

    // Clearing the unordered_map
    ages.clear();

    //creat a frequency map
    // for (auto i: nums) {
    //         counts[i]++;
    // }
    return 0;
}
