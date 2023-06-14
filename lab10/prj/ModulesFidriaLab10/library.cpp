#include "library.h"
#include <fstream>
#include <sstream>
#include <ctime>
#include <iostream>
#include <bitset>  

int countDigits(const std::string& text) {
    int digitCount = 0;
    for (char c : text) {
        if (isdigit(c)) {
            digitCount++;
        }
    }
    return digitCount;
}

std::string getCurrentDateTime() {
    std::time_t now = std::time(nullptr);
    char buffer[20];
    struct tm timeinfo;
    localtime_s(&timeinfo, &now);  
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &timeinfo);
    return buffer;
}

void appendToFile(const std::string& fileName, const std::string& content) {
    std::ofstream file(fileName, std::ios::app);
    if (file.is_open()) {
        file << content;
        file.close();
    }
    else {
        std::cout << "Unable to open file: " << fileName << std::endl;
    }
}

void processInputFile(const std::string& inputFileName, const std::string& outputFileName) {
    std::ifstream inputFile(inputFileName);
    if (!inputFile.is_open()) {
        std::cout << "Unable to open input file: " << inputFileName << std::endl;
        return;
    }

    std::string inputText((std::istreambuf_iterator<char>(inputFile)), std::istreambuf_iterator<char>());
    inputFile.close();

    int digitCount = countDigits(inputText);
    std::string dateTime = getCurrentDateTime();
    std::string fileInfo = "Digit count: " + std::to_string(digitCount) + "\n";
    fileInfo += "Date and time of update: " + dateTime + "\n";

    // Check if the input text contains specific words
    std::string words[] = { "program", "student", "module", "programer" };
    for (const std::string& word : words) {
        if (inputText.find(word) != std::string::npos) {
            fileInfo += "Contains word: " + word + "\n";
        }
    }

    appendToFile(inputFileName, fileInfo);

    int x, y, z;
    std::cout << "Enter values for x, y, and z: ";
    std::cin >> x >> y >> z;

    int result = s_calculation(x, y, z);

    int b;  
    std::cout << "Enter a natural number b: ";
    std::cin >> b;

    std::ofstream outputFile(outputFileName);
    if (outputFile.is_open()) {
        outputFile << "Author: Fidria Maksim" << std::endl;
        outputFile << "Organization: CNTU" << std::endl;
        outputFile << "City: Kropyvnytski" << std::endl;
        outputFile << "Country: Ukraine" << std::endl;
        outputFile << "Year of development: 2023" << std::endl;
        outputFile << "Input file character count: " << inputText.size() << std::endl;
        outputFile << "Result of s_calculation: " << result << std::endl;
        outputFile << "Number b in binary: " << std::bitset<32>(b).to_string() << std::endl;
        outputFile.close();
    }
    else {
        std::cout << "Unable to open output file: " << outputFileName << std::endl;
    }
}

int s_calculation(int x, int y, int z) {
    int result = x + y - z;
    return result;
}
