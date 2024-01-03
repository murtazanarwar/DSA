#include <iostream>

class DynamicArray {
private:
    int *arr;
    int capacity;
    int size;

public:
    DynamicArray() {
        capacity = 2; // Initial capacity
        size = 0;
        arr = new int[capacity];
    }

    // Function to add elements to the array
    void append(int element) {
        if (size == capacity) {
            // If array is full, double the capacity
            int *tempArr = new int[2 * capacity];
            for (int i = 0; i < capacity; ++i) {
                tempArr[i] = arr[i];
            }
            delete[] arr;
            arr = tempArr;
            capacity *= 2;
        }
        arr[size++] = element;
    }

    // Function to get an element at a particular index
    int get(int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cout << "Index out of bounds." << std::endl;
            return -1; // or throw an exception
        }
    }

    // Function to get the current size of the array
    int getSize() {
        return size;
    }

    // Function to get the current capacity of the array
    int getCapacity() {
        return capacity;
    }

    // Destructor to free the allocated memory
    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    DynamicArray dynArr;

    // Appending elements to the dynamic array
    for (int i = 0; i < 10; ++i) {
        dynArr.append(i);
    }

    // Displaying elements from the dynamic array
    std::cout << "Elements in the dynamic array: ";
    for (int i = 0; i < dynArr.getSize(); ++i) {
        std::cout << dynArr.get(i) << " ";
    }
    std::cout << std::endl;

    return 0;
}
