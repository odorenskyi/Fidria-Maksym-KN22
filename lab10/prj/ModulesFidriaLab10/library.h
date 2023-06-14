#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>

int countDigits(const std::string& text);
std::string getCurrentDateTime();
void appendToFile(const std::string& fileName, const std::string& content);
void processInputFile(const std::string& inputFileName, const std::string& outputFileName);

int s_calculation(int x, int y, int z);

#endif  // LIBRARY_H
