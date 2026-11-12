// Copyright (c) 2026 Bryson G All rights reserved.
// .
// Created by: Bryson G
// Date: 11,10,2026
// This program gets a number then uses
// factorial and gives you the product

#include <string>
#include <iostream>

int main() {
    int counter;
    int factorial_ans;
    int userNumInt;
    std::string userNumStr;
    float userNumFlo;
    counter = 1;
    factorial_ans = 1;

    std::cout << "Enter your number: ";
    std::cin >> userNumStr;
    try {
        userNumInt = std::stoi(userNumStr);
        userNumFlo = std::stof(userNumStr);
        if (userNumInt == userNumFlo) {
            if (userNumInt >= 0) {
                do {
                    factorial_ans = factorial_ans * counter;
                    counter = counter + 1;
                } while (userNumInt >= counter);
                std::cout << userNumInt << "! = " << factorial_ans << "\n";
            } else {
                std::cout << userNumInt << " is not a positive integer";
            }
        } else {
            std::cout << userNumFlo << " is not an integer \n";
        }
            }
            catch (std::invalid_argument) {
            std::cout << userNumStr << " is not an integer \n";
            }
}
