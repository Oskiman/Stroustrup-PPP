// 4_5_1_Func_square.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Try this exercise from Chapter 4 of
// Stroustrup's PPP with C++
// Implement square() without multiplication

#include <iostream>
#include"../std_lib_facilities.h"


// Function declaration
int square(int x);

int main() {

    int val1{};
    cout << "Enter an integer, i'll return the square: ";
    cin >> val1;
    cout << square(val1);

    std::cout << std::endl;
    return 0;
}

// Function definition
int square(int x) {

    int j{ 0 };

    for (int i{ 0 }; i < x; ++i) {
        j += x;
    }

    return j;
}


