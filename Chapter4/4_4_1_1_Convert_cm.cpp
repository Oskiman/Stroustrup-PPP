// 4_4_1_1_Convert_cm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Code copied from Chapter 4 of
// Stroustrup's PPP with C++
// Program to convert from inches to cm
// or cm to inches

#include <iostream>
#include"../std_lib_facilities.h"

int main() {

    constexpr double cm_per_inch{ 2.54 };

    double length{ 1 };

    char unit = { ' ' };;

    cout << "Please enter a length followed by a unit(c or i): ";
    cin >> length >> unit;

    if (unit == 'i') {
        cout << length << " in = " << cm_per_inch * length << "cm" << endl;
    }
    else if (unit == 'c') {
        cout << length << " cm = " << length / cm_per_inch << "in" << endl;
    }
    else {
        cout << "Sorry, I don't know a unit called " << unit << endl;
    }

    std::cout << std::endl;
    return 0;
}


