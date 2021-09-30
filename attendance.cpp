// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program calculates the attendance rate of students and if it is over
//    75% they are eligible to take the class exam

#include <iostream>
#include <string>

int main() {
    // this function is the program
    std:: string numberOfClassesAsString;
    std:: string classesAttendedAsString;
    int numberOfClasses;
    int classesAttended;
    float attendanceRate;

    // input
    std::cout << "Enter number of classes held : ";
    std::cin >> numberOfClassesAsString;
    std::cout << "Enter number of classes attended : ";
    std::cin >> classesAttendedAsString;

    // process & output
    numberOfClasses = std::stoi(numberOfClassesAsString);
    classesAttended = std::stoi(classesAttendedAsString);
    attendanceRate = (static_cast<float>(classesAttended) / static_cast<float>
    (numberOfClasses)) * 100;
    std::cout << "\nYou have a " "" << attendanceRate << "% attendance rate."
    << std::endl;
    if (attendanceRate >= 75)
        std::cout << "Therefore you are eligible to take the class exam."
        << std::endl;
    else
        std::cout << "Therefore you are not eligible to take the class exam."
        << std::endl;
    std::cout << "\nDone." << std::endl;
}
