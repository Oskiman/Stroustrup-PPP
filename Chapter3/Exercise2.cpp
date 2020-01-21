// Exercise 2 from Chapter 3 of
// ppp with C++
// Program to convert miles to kilometres
// There are 1.609 km to 1 mile

#include <iostream>
#include"../std_lib_facilities.h"


int main(){
    
    cout << "Please enter a number of miles:";
    double miles{};
    cin >> miles;
    cout << miles << " miles is " << miles *1.609 << " kilometres" << endl;
    std::cout << std::endl;
    return 0;
}