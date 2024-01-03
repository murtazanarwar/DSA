#include <iostream>
#include <vector>
#include <string>

class HashTableDoubleHashing {
private:
    int size;
    std::vector<std::pair<std::string, int>> table;
    int primeSize;

    int hash(const std::string& key, int attempt) {
        // Primary hash function
        int hashValue = 0;
        for (char c : key) {
            hashValue += c;
        }
        return (hashValue + attempt * secondaryHash(key)) % size;
    }

    int secondaryHash(const std::string& key) {
        // Secondary hash function (using a prime number for better distribution)
        int hash = 0;
        const int prime = 31;
        for (char c : key) {
            hash = (hash * prime) + c;
        }
        return hash % primeSize;
    }

public:
    HashTableDoubleHashing(int tableSize) : size(tableSize), table(tableSize), primeSize(13) {}

    void insert(const std::string& key, int value) {
        int attempt = 0;
        int index = hash(key, attempt);
        
        while (!table[index].first.empty() && table[index].first != key) {
            // Collision occurred, rehash using double hashing
            attempt++;
            index = hash(key, attempt);
        }
        
        table[index] = std::make_pair(key, value);
    }

    int search(const std::string& key) {
        int attempt = 0;
        int index = hash(key, attempt);
        
        while (!table[index].first.empty()) {
            if (table[index].first == key) {
                return table[index].second;
            }
            attempt++;
            index = hash(key, attempt);
        }
        
        return -1; // Not found
    }
};

int main() {
    HashTableDoubleHashing hashTable(10);

    hashTable.insert("apple", 5);
    hashTable.insert("orange", 10);
    hashTable.insert("banana", 7);
    hashTable.insert("grape", 3);
    hashTable.insert("apple", 8); // Update value for "apple"

    std::cout << "Value of 'orange': " << hashTable.search("orange") << std::endl;
    std::cout << "Value of 'banana': " << hashTable.search("banana") << std::endl;
    std::cout << "Value of 'apple': " << hashTable.search("apple") << std::endl;
    std::cout << "Value of 'watermelon': " << hashTable.search("watermelon") << std::endl;

    return 0;
}
