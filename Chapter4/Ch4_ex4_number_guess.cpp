// Ch4_ex4_number_guess.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Program to ask questions & figure out a number 1 - 100
// asking no more than 7 questions

#include <iostream>
#include"../std_lib_facilities.h"

int main()
{

    int start_value{ 100 };
    cout << "Think of a number between 1 & " << start_value << " (inclusive) & I will try to guess it in seven questions or less!" << endl;
    cout << "Answer Y or N only." << endl;

    int my_guess{ start_value / 2 };    // Get to midpoint of start_value to ask the first question
    char user_input{};

    bool answer{ false };       // bool to break out of while loop when true (when we have the correct number!)

    while(!answer){
    cout << "Is the number you are thinking of less than " << my_guess << "?: ";
    cin >> user_input;

        user_input = toupper(user_input);       // Change user input to upper case, less checking to do

        if (user_input != 'Y' && user_input != 'N') {           // Check input is Y or N only
            cout << "Sorry, please use Y or N only" << endl;
        }
        else {

            if (user_input == 'Y') {
                my_guess = my_guess / 2;               // Find the midpoint in the lower half of the new range
                cout << my_guess << endl;      // Here for testing purposes
            }
            else {
                my_guess += (my_guess / 2);  // Find the midpoint in the upper half of the new range   
                cout << my_guess << endl;      // Here for testing purposes
            }

        }

        int final_answer{ 0 };
        // Calculate the number when we are down to the last couple of possibles
        // How to get to the last couple though?
        if (my_guess % 2 == 0) {
            // number must be even
            final_answer = my_guess / 2;
        }
        else {
            // number must be odd
            // No idea yet if this will work, the +1 is a placeholder & reminder
            final_answer = (my_guess / 2) + 1;
        }

        // Bool check
        // final_answer will have to be nonzero if correct, will break out of loop
        if (final_answer != 0){
        answer = true;
        cout << "Your number is: " << final_answer << endl;
        }
    }
}

