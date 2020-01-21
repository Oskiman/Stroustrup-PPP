// 4_6_4_Vector_text_example.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Code copied from p.123 of
// Stroustrup's PPP with C++
// Program to add text elements to a vector

#include <iostream>
#include"../std_lib_facilities.h"

int main() {

    vector<string> words;
    for (string temp; cin >> temp;) {  // Read input into temp
        words.push_back(temp);
    }

    cout << "Number of words: " << words.size() << endl;

    sort(words);

    for (size_t i{ 0 }; i < words.size(); ++i) {
        if (i == 0 || words[i - 1] != words[i]) {
            cout << words[i] << endl;
        }
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
