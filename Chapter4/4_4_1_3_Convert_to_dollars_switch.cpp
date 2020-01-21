// 4_4_1_3_Convert_to_dollars_switch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Try this exercise from p.109, Chapter 4 of
// Stroustrup's PPP with C++
// Currency converter using the switch statement

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

    switch (currency_unit) {
    case 'y':
        dollar_amount = currency_amount * yen_dollar;
        cout << currency_amount << " yen is equal to " << dollar_amount << " dollars" << endl;
        break;
    case 'k':
        dollar_amount = currency_amount * krone_dollar;
        cout << currency_amount << " krone is equal to " << dollar_amount << " dollars" << endl;
        break;
    case 'p':
        dollar_amount = currency_amount * pound_dollar;
        cout << currency_amount << " pounds is equal to " << dollar_amount << " dollars " << endl;
        break;
    default:
        cout << "Sorry, I don't know that currency" << endl;
        break;
    }


    std::cout << std::endl;
    return 0;
}


