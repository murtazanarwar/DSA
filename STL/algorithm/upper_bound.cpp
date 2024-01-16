#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> vec = {1, 3, 5, 7, 9};

    // Finding the upper bound of 6 in the vector
    auto it = std::upper_bound(vec.begin(), vec.end(), 6);

    if (it != vec.end()) {
        std::cout << "First element greater than 6 is: " << *it << std::endl;
    } else {
        std::cout << "No element greater than 6 found" << std::endl;
    }

    return 0;
}
