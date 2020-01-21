// 4_4_1_1_Convert_to_dollars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Try this exercise from p.105, Chapter 4 of
// Stroustrup's PPP with C++
// Program to convert a given amount and currency
// to dollars

#include <iostream>
#include"../std_lib_facilities.h"

int main() {

    double currency_amount{};
    char currency_unit{ ' ' };
    double dollar_amount{};

    cout << "Please enter an amount and a currency (y, k, p) separated by a space: ";
    cin >> currency_amount >> currency_unit;

    constexpr double yen_dollar{ 0.0091 };
    constexpr double krone_dollar{ 0.15 };
    constexpr double pound_dollar{ 1.31 };

    if (currency_unit == 'y') {
        dollar_amount = currency_amount * yen_dollar;
        cout << currency_amount << " yen is equal to " << dollar_amount << " dollars" << endl;
    }
    else if (currency_unit == 'k') {
        dollar_amount = currency_amount * krone_dollar;
        cout << currency_amount << " krone is equal to " << dollar_amount << " dollars" << endl;
    }
    else if (currency_unit == 'p') {
        dollar_amount = currency_amount * pound_dollar;
        cout << currency_amount << " pounds is equal to " << dollar_amount << " dollars " << endl;
    }
    else {
        cout << "Sorry, I don't know that currency" << endl;
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
