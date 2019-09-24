// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program calculates the cost of a pizza according to its diameter

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the cost of a pizza

    // Constants and variables
    const float LABOR = 0.75;
    const float RENT = 1;
    const float COST_PER_INCH = 0.5;
    const float HST = 0.13;
    float diameter;
    float sub_total;
    float total;

    // Input
    std::cout << "Enter the diameter of the pizza in inches here: "
    << std::endl;
    std::cin >> diameter;

    // Process
    sub_total = LABOR + RENT + (diameter*COST_PER_INCH);
    total = sub_total + (sub_total*HST);

    // Output
    std::cout << "" << std::endl;
    std::cout << "The cost for a " << diameter << " inch pizza is $"
    << std::fixed << std::setprecision(2) << std::setfill('0')
    << total << "." << std::endl;
}
