#include <iostream>

// Function to print the contents of an array with square brackets
void printArray(const int arr[], int size) {
    std::cout << "[";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    int numbers[] = {1, 2, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Call the function to print the array
    printArray(numbers, size);

    return 0;
}
