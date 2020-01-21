// Ch4_Drill1_while_loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"../std_lib_facilities.h"

int main()
{
    // I know it's not best practice to define all variables here but it'll do for now
    double input_value{ 0 }, smallest_so_far{ 0 }, largest_so_far{ 0 }, current{ 0 }, previous{ 0 }, smallest{ 0 }, largest{ 0 };
    double diff{ 0 }, percent_diff{ 0 }, metres_amount{ 0 }, total_metres{ 0 };
    string unit{};
    int count{ 0 };

    // Consts for conversion purposes
    const double cm_metre{ 100.0 };         // Centimetres in a metre
    const double in_metre{ 39.37007 };      // Inches in a metre
    const double ft_metre{ 3.28084 };       // Feet in a metre

    // Bool to check if unit is valid
    bool unit_valid{ true };

    // Vector to store input after conversion into metres
    vector <double> metre_values{};

    while (cin >> input_value >> unit) {

        if (unit == "M" || unit == "m") {
            metres_amount = input_value;
            metre_values.push_back(metres_amount);
        }
        else if (unit == "CM" || unit == "cm") {
            metres_amount = input_value / cm_metre;
            metre_values.push_back(metres_amount);
        }
        else if (unit == "IN" || unit == "in") {
            metres_amount = input_value / in_metre;
            metre_values.push_back(metres_amount);
        }
        else if (unit == "FT" || unit == "ft") {
            metres_amount = input_value / ft_metre;
            metre_values.push_back(metres_amount);
        }
        else {
            unit_valid = false;
            
        }

        // If/else wrapper for bool check to stop input_value if unit invalid
        if (unit_valid) {
            // Code to initialise smallest & largest to first number input on first pass through loop
            if (count == 0) {
                smallest_so_far = input_value;
                largest_so_far = input_value;
            }

            if (input_value < smallest_so_far) {
                smallest_so_far = input_value;
            }
            if (input_value > largest_so_far) {
                largest_so_far = input_value;
            }

            // Current/previous
            previous = current;
            current = input_value;

            // Compare current & previous
            if (previous == current) {
                cout << "The numbers are equal" << endl;
            }
            else if (previous < current) {
                smallest = previous;
                largest = current;
                cout << "The smaller value is: " << previous << " and the larger value is: " << current << endl;
            }
            else {
                cout << "The smaller value is: " << current << " and the larger value is: " << previous << endl;
                smallest = current;
                largest = previous;
            }

            diff = (largest - smallest);
            percent_diff = (diff / smallest * 100);

            if (percent_diff <= 0.01) {
                cout << "The numbers are almost equal!" << endl;
            }

            // Increment count
            ++count;

            // Sum total metres
            total_metres += metres_amount;

            cout << "You entered: " << input_value << endl;
            cout << "The smallest so far is: " << smallest_so_far << endl;
            cout << "The largest so far is: " << largest_so_far << endl;
        }
        else {
            cout << "Sorry, I don't recognise that unit of measurement!" << endl;

            // Reset bool to true so we can go again!
            unit_valid = true;
        }
    }

    cout << "The smallest number entered was: " << smallest_so_far << endl;
    cout << "The largest number entered was: " << largest_so_far << endl;
    cout << "The number of values entered was: " << count << endl;
    cout << "The sum of all the values entered(converted into metres) was: " << total_metres << " metres" << endl;
   
    // Sort values in vector
    sort(metre_values);

    for (auto value : metre_values) {
        cout << value << ", ";
    }

    cout << endl;

    cout << "Goodbye" << endl;
}


