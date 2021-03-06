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


