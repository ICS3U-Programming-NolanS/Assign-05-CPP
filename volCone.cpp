// Copyright (c) 2022 Nolan Shami All rights reserved.
//
// Created by: Nolan Shami
// Created on: Dec 11th, 2022
// This program This program calculates the volume
// of the user 's cone through the user' s given radius and height.

#include <cmath>
#include <iostream>

float calCone(float radius, float height) {
    float volume;
    // Calculates the volume through using user's given radius and height
    volume = M_PI * (radius * radius) * (height / 3);
    // Return the volume back to the main function
    return volume;
}

int main() {
    // Declare the variables
    std::string userRadiusString, userHeightString;
    float userRadiusFloat, userHeightFloat, volume;

    // Asks user's given radius of their cone
    std::cout << "Please enter your chosen radius of your cone: ";
    std::cin >> userRadiusString;

    // Asks user's given height of their cone
    std::cout << "Please enter your chosen height of your cone: ";
    std::cin >> userHeightString;
    
    try {
        // Converts user's given radius to float
        userRadiusFloat = stof(userRadiusString);

        // Converts user's given height to float
        userHeightFloat = stof(userHeightString);

        // catch any erroneous/invalid input
    } catch (std::invalid_argument) {
        std::cout << "I feel like you did not enter a number...YOU MUST ENTER A NUMBER!!!" << std::endl;
    }

    volume = calCone(userRadiusFloat, userHeightFloat);
    // Print the output to the user
    std::cout << "With " << userRadiusFloat << " being the radius and " << userHeightFloat << " being the height, the volume of your cone is : " << volume << " cubed !" << std::endl;
        // Final message to thank the user
        std::cout
              << "Thank you so much for playing this game!"
              << std::endl;
}