// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Created on: May 10 2021
// This program checks if ther is over 30 students

#include <iostream>

int main() {
    // this function checks if ther is over 30 students
    const int CORRECT_GUESS = 4;
    int user_guess;

    // get the user's guess
    std::cout << "Enter a number between 0 to 9: ";
    std::cin >> user_guess;
    std::cout << "" << std::endl;

    // check to see if the user guess is correct or wrong
    if (user_guess == CORRECT_GUESS) {
            // output
            std::cout << "You are correct!";
    }

    // check to see if the user guess is correct or wrong
    if (user_guess != CORRECT_GUESS) {
            // output
            std::cout << "You are wrong!";
    }
}
