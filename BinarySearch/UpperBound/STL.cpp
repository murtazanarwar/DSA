#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 4, 4, 5, 7, 9};

    int target = 6;

    // Using std::upper_bound to find the iterator pointing to the first element greater than the target
    auto it = std::upper_bound(vec.begin(), vec.end(), target);

    if (it != vec.end()) {
        // Calculating the index by subtracting the beginning iterator from the found iterator
        std::size_t index = it - vec.begin();
        std::cout << "Index of the first element greater than " << target << ": " << index << std::endl;
    } else {
        std::cout << "No element greater than " << target << " found in the vector." << std::endl;
    }

    return 0;
}
