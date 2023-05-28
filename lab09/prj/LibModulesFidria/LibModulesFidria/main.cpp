#include <iostream>
#include <string>
#include "library.h"

int main() {
    char choice;

    do {
        std::cout << "Select an option (n, m, q): ";
        std::cin >> choice;

        if (choice == 'n') {
            double depositAmount;
            int durationMonths;

            std::cout << "Enter the deposit amount: ";
            std::cin >> depositAmount;

            std::cout << "Enter the term of the agreement (number of months): ";
            std::cin >> durationMonths;

            depositCalculation(depositAmount, durationMonths);
        }
        else if (choice == 'm') {
            std::string size;

            std::cout << "Enter the men's skirt size according to the Slovak system: ";
            std::cin >> size;

            sizeConversion(size);
        }
        else if (choice == 'q') {
            int number;

            std::cout << "Enter a natural number from 0 to 7483650: ";
            std::cin >> number;

            binaryCount(number);
        }
        else {
            std::cout << "Wrong choice. Try again." << std::endl;
            std::cout << '\a';  // Звуковий сигнал про помилку введення
        }

        std::cout << "Want to continue (w/W - exit, anything else - continue): ";
        std::cin >> choice;

    } while (choice != 'w' && choice != 'W');

    return 0;
}
