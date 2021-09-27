// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user to enter a year and
// tells them if the year is a leap year

#include <iostream>
#include <string>

int main() {
    // this tells the user if the year is a leap year
    std::string leap_year;
    int integerAsNumber;

    // input
    std::cout << "Please enter the year: ";
    std::cin >> leap_year;
    std::cout << "" << std::endl;

    // process & output
    try {
         integerAsNumber = std::stoi(leap_year);

        if (integerAsNumber % 4 == 0)
            if (integerAsNumber % 100 == 0)
                if (integerAsNumber % 400 == 0) {
        // output
                std::cout << "This is a leap year!";
            } else {
            std::cout << "This is a common year!";
        } else {
            std::cout << "This is a leap year!";
    } else {
        std::cout << "This is a common year!";
    }
            std::cout << std::endl;
         } catch (std::invalid_argument) {
        std::cout << "This is not a year!";
    }
    std::cout << "\nDone.";
}
