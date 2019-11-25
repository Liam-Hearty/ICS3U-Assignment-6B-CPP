// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program calculates perimeter of a triangle.


#include <iostream>

void calculate_perimeter(float L1, float L2, float L3) {
    // calculate perimeter
    float perimeter;

    // process
    perimeter = L1 + L2 + L3;

    // output
    std::cout << "The perimeter is " << perimeter << "cm" << std::endl;
}


main() {
    // this function gets radius and width

    std::string length1_as_string;
    float length1;
    std::string length2_as_string;
    float length2;
    std::string length3_as_string;
    float length3;

    try {
        // input
        std::cout << "Enter a length of the triangle (cm): " << std::endl;
        std::cin >> length1_as_string;
        length1 = std::stof(length1_as_string);
        std::cout << "Enter a length of the triangle (cm): " << std::endl;
        std::cin >> length2_as_string;
        length2 = std::stof(length2_as_string);
        std::cout << "Enter a length of the triangle (cm): " << std::endl;
        std::cin >> length3_as_string;
        length3 = std::stof(length3_as_string);

        if (length1 <= 0 || length2 <= 0 || length3 <= 0) {
            std::cout << "One of your values were less than 0, try again."
                      << std::endl;
            exit(0);
}
        // call functions
        calculate_perimeter(length1, length2, length3);
    } catch(std::invalid_argument) {
        std::cout << "Please input a proper value." << std::endl;
}
}
