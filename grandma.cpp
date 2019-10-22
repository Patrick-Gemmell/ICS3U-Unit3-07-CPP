// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: October 2019
// This program gets user to input their age with user input

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    const int MIN_AGE = 25;
    const int MAX_AGE = 40;
    std::string age_as_string;
    int age_as_number;


    while (true) {
        // input
        std::cout << "What is your age?: ";
        std::cin >> age_as_string;
        try {
            age_as_number = std::stoi(age_as_string);
            if (age_as_number > MIN_AGE && age_as_number < MAX_AGE) {
                std::cout << "You are of a valid age to date my grandchild"
                << std::endl;
                break;
            } else {
                std::cout << "You are not a valid age to date my grandchild"
                << std::endl;
                break;
            }
        } catch (std::invalid_argument) {
            std::cout << "Not a valid age" << std::endl;
        }
    }
}
