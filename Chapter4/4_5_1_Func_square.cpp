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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
