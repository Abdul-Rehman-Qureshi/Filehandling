#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile;  // Output file stream

    // Open the file in write mode
    outputFile.open("output.txt");

    if (outputFile.is_open()) {
        // Write data to the file
        outputFile << "Hello, File Handling in C++!" << std::endl;
        outputFile << "This is a basic program for file handling." << std::endl;

        // Close the file
        outputFile.close();
        std::cout << "Data written to the file successfully." << std::endl;
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }

    std::ifstream inputFile;  // Input file stream

    // Open the file in read mode
    inputFile.open("output.txt");

    if (inputFile.is_open()) {
        std::string line;

        // Read and output each line from the file
        while (getline(inputFile, line)) {
            std::cout << line << std::endl;
        }

        // Close the file
        inputFile.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }

    return 0;
}

