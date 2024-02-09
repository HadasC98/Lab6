//this is the swap array function
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

// Function to swap values at two given positions in an array
void swap(int arr[], int pos1, int pos2) {
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

int main() {
    int numbers[] = {1, 2, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Print the array before swapping
    std::cout << "Before swapping: ";
    printArray(numbers, size);

    // Call the swap function to swap values at positions 0 and 1
    swap(numbers, 0, 1);

    // Print the array after swapping
    std::cout << "After swapping: ";
    printArray(numbers, size);

    return 0;
}
