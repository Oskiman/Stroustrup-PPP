// ch4_ex3_distance_vector.cpp
// Read doubles into a vector
// Compute total distance, find smallest & greatest distance between two elements
// Calculate mean distance between two elements

#include <iostream>
#include"../std_lib_facilities.h"

int main()
{
    double distance_between{ 0 }, greatest{ 0 }, smallest{ 0 }, mean_distance{ 0 }, total_distance{ 0 }, input_distance{ 0 };
    int count{ 0 };
    vector <double> distances{};

    while (cin >> input_distance) {

        // Assign initial input value to greatest & smallest on first pass through loop
        if (count == 0) {
            greatest = input_distance;
            smallest = input_distance;    
        }
       
        // Check if input value is new greatest or smallest
        if (input_distance > greatest) {
            greatest = input_distance;
        }

        if (input_distance < smallest) {
            smallest = input_distance;
        }

        // Add element to vector
        distances.push_back(input_distance);

        // Increment count to keep track of number of elements entered
        ++count;

    }
    
    // Calculate the total distance
    for (auto val : distances) {
        total_distance += val;
    }

    // Calculate the mean distance
    mean_distance = total_distance / count;


    // Output smallest, greatest, total and mean distances
    cout << "The greatest is: " << greatest << endl;
    cout << "The smallest is: " << smallest << endl;
    cout << "The total is: " << total_distance << endl;
    cout << "The mean is: " << mean_distance << endl;
}

