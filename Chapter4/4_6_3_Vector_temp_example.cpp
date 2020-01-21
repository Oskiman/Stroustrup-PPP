// 4_6_3_Vector_temp_example.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
    // Note: The below code causes some kind of error, no idea what
    sort(temps);
    cout << "Median temperature is: " << temps[temps.size() / 2] << endl;




    std::cout << std::endl;
    return 0;
}


