// Copyright (c) 2025 Volodymyr Kryzhanovskyi All rights reserved
// Created by: Volodymyr Kryzhanovskyi
// Created on: 03-04-2025
// In simple words, this program is dating simulator

#include <iostream>
#include <string>

int main() {
    // Gets input
    std::string ageOfUser;
    int ageOfUserInt;
    std::cout << "Please enter your age.";
    std::cin >> ageOfUser;
    // checks if input meets standards which is more than 0 and input is integer
    try {
        ageOfUserInt = std::stoi(ageOfUser);
         if (ageOfUserInt <= 0) {
             std::cout << "Not real age. \n";
         }
         // States that you can date person if you are more than 25 and below 40
        if (ageOfUserInt >= 25 && ageOfUserInt <= 40) {
            std::cout << "You can date my daughter." << std::endl;
        }
        // Says that the person is too young if he is younger than 25
        if (ageOfUserInt <= 25) {
            std::cout << "You are too young. \n";
        }
        // Says that the person is too old if he is older than 40
        if (ageOfUserInt >= 40) {
            std::cout << "You are too old to date. \n";
        }
        // If the variable is not an integer, it displays this message below
    } catch (std::invalid_argument) {
        std::cout << "Enter positive integer. \n";
    }
}
