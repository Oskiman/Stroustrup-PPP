// 4_6_4_Bleep_out_words.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"../std_lib_facilities.h"

int main()
{
    // Vector of forbidden words
    vector <string> forbidden{ "Broccoli", "Tuna", "Rice" };

    // Ask for input & read in to vector
    vector <string> user_input{};
    cout << "Please enter some words: ";
    for (string input_word; cin >> input_word;) {
        user_input.push_back(input_word);
    }

    // Read through vector & check against forbidden list
    // If on forbidden list, replace word in user_input vector
    // with BLEEP!
    for (size_t i{}; i < user_input.size(); ++i) {
        for (size_t j{}; j < forbidden.size(); ++j) {
            if (user_input[i] == forbidden[j]) {
                user_input[i] = "BLEEP!";
            }
     
        }

    }

    // Output vector user_input, now with added BLEEP!
    for (string word : user_input)
        cout << word << endl;

  

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

