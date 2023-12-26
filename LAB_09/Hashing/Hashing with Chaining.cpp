#include <iostream>

class HashTable {
private:
    static const int tableSize = 10;
    int table[tableSize][10]; // Assuming a maximum of 10 elements in each slot

public:
    HashTable() {
        // Initialize the table
        for (int i = 0; i < tableSize; ++i) {
            for (int j = 0; j < 10; ++j) {
                table[i][j] = -1; // -1 indicates an empty slot
            }
        }
    }

    // Hash function
    int hashFunction(int key) {
        return key % tableSize;
    }

    // Insert a key into the hash table
    void insert(int key) {
        int index = hashFunction(key);

        // Find an empty slot in the array at the calculated index
        int i = 0;
        while (table[index][i] != -1) {
            ++i;
        }

        // Insert the key into the empty slot
        table[index][i] = key;
    }

    

    // Display the hash table
    void display() {
        for (int i = 0; i < tableSize; ++i) {
            std::cout << "[" << i << "]";
            for (int j = 0; j < 10; ++j) {
                if (table[i][j] != -1) {
                    std::cout << " -> " << table[i][j];
                }
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    HashTable hashTable;
  
    // Insert keys
    hashTable.insert(5);
    hashTable.insert(17);
    hashTable.insert(28);
    hashTable.insert(39);
    hashTable.insert(6);
    hashTable.insert(10);

    // Display the initial hash table
    std::cout << "Initial Hash Table:" << std::endl;
    hashTable.display();

  

   

    return 0;
}
