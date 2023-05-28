#include "library.h"
#include <iostream>
#include <cmath>

void depositCalculation(double depositAmount, int durationMonths) {
    double monthlyInterestRate1 = 11.0 / 100 / 12;
    double monthlyInterestRate2 = 13.0 / 100 / 12;

    double totalInterest1 = depositAmount * monthlyInterestRate1 * durationMonths;
    double monthlyPayment1 = totalInterest1 / durationMonths;

    double totalInterest2 = depositAmount * monthlyInterestRate2 * durationMonths;
    double monthlyPayment2 = totalInterest2 / durationMonths;

    std::cout << "The amount of monthly interest payments at 11% per annum: " << monthlyPayment1 << " UAH." << std::endl;
    std::cout << "The total amount of interest at 11% per annum: " << totalInterest1 << " UAH." << std::endl;

    std::cout << "The amount of monthly interest payments at 13% per annum: " << monthlyPayment2 << " UAH." << std::endl;
    std::cout << "The total amount of interest at 13% per annum: " << totalInterest2 << " UAH." << std::endl;
}

void sizeConversion(std::string size) {
    std::string franceSize;
    std::string internationalSize;

    if (size == "XS") {
        franceSize = "34";
        internationalSize = "44";
    }
    else if (size == "S") {
        franceSize = "36";
        internationalSize = "46";
    }
    else if (size == "M") {
        franceSize = "38";
        internationalSize = "48";
    }
    else if (size == "L") {
        franceSize = "40";
        internationalSize = "50";
    }
    else if (size == "XL") {
        franceSize = "42";
        internationalSize = "52";
    }
    else if (size == "XXL") {
        franceSize = "44";
        internationalSize = "54";
    }
    else {
        std::cout << "Unknown size" << std::endl;
        return;
    }

    std::cout << "The size of men's underwear in the French system: " << franceSize << std::endl;
    std::cout << "The size of men's underwear in the international system: " << internationalSize << std::endl;
}

void binaryCount(int number) {
    int countZeros = 0;
    int countOnes = 0;

    int bitD0 = number & 1;

    if (bitD0 == 0) {
        while (number > 0) {
            if (number & 1)
                countOnes++;
            else
                countZeros++;

            number >>= 1;
        }

        std::cout << "Number of binary zeros: " << countZeros << std::endl;
    }
    else {
        while (number > 0) {
            if (number & 1)
                countOnes++;
            else
                countZeros++;

            number >>= 1;
        }

        std::cout << "Number of binary units: " << countOnes << std::endl;
    }
}
