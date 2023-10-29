#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    // Create operation: Adding an element at the end of the vector
    numbers.push_back(6);

    // Read operation: Accessing elements by index
    int element = numbers[2];

    // Update operation: Modifying an element by index
    numbers[1] = 7;

    // Delete operation: Removing an element by index (without additional data structures)
    int index_to_delete = 3;
    numbers.erase(numbers.begin() + index_to_delete);

    // Display the vector
    std::cout << "Original Vector: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
