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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
