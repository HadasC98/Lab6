//this is cube function
#include <iostream>

// Function to calculate the cube of a number
double calculateCube(double number) {
    return number * number * number;
}

int main() {
    double userInput;

    // Get input from the user
    std::cout << "Enter a number: ";
    std::cin >> userInput;

    // Calculate and output the cube using the function
    double cubeResult = calculateCube(userInput);
    std::cout << "The cube of " << userInput << " is: " << cubeResult << std::endl;

    return 0;
}
