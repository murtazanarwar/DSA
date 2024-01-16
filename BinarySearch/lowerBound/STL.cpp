#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 4, 4, 5, 7, 9};

    int target = 6;

    // Using std::lower_bound to find the iterator pointing to the first element not less than the target
    auto it = std::lower_bound(vec.begin(), vec.end(), target);

    if (it != vec.end()) {
        // Calculating the index using iterator subtraction
        std::size_t index = it - vec.begin();
        std::cout << "Index of the first element not less than " << target << ": " << index << std::endl;
    } else {
        std::cout << "No element not less than " << target << " found in the vector." << std::endl;
    }

    return 0;
}
