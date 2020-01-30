// ch4_ex2_find_median.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Updated version of 4_6_3_Vector_temp_example.cpp
// with code altered to find a proper median 
//

// Code copied from p.121-122 of
// Stroustrup's PPP with C++
// Adding elements to a vector

#include <iostream>
#include"../std_lib_facilities.h"

int main() {

    vector<double> temps{};
    for (double temp; cin >> temp;) {     // Read input into temp
        temps.push_back(temp);
    }

    // Compute mean temperature
    double sum{ 0 };
    for (double x : temps) {
        sum += x;
    }
    cout << "Average temperature is: " << sum / temps.size() << endl;

    // Compute median temperature

    sort(temps);

    cout << "Median temperature is: " << temps[temps.size() / 2 + ((temps.size() / 2) - 1)];
    
    std::cout << std::endl;
    return 0;
}


