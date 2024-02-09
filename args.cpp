#include <iostream>

int main(int argc, char* argv[]) {
    // Print the program name
    std::cout << "Program name: '" << argv[0] << "'" << std::endl;

    // Print the number of arguments
    std::cout << "called with " << argc - 1 << " arguments:" << std::endl;

    // Print the command line arguments
    for (int i = 1; i < argc; ++i) {
        std::cout << "'" << argv[i] << "' ";
    }

    std::cout << std::endl;

    return 0;
}
