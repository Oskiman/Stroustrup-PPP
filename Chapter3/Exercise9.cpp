// Exercise 9 from Chapter 3 of
// Stroustrup's PPP with C++
// Program to convert spelled out numbers
// "zero" to output 0 for 0 - 4 inclusive

#include <iostream>
#include"../std_lib_facilities.h"

int main(){
    
    cout << "Please enter, in lower case text, a number from 0 - 4 (inclusive): ";
    string input_number{};
    cin >> input_number;
    
    if(input_number == "zero")
        cout << 0 << endl;
    if(input_number == "one")
        cout << 1 << endl;
    if(input_number == "two")
        cout << 2 << endl;
    if(input_number == "three")
        cout << 3 << endl;
    if(input_number == "four")
        cout << 4 << endl;
    if(input_number != "zero" || input_number != "one" || input_number != "two" || input_number != "three" || input_number != "four")
        cout << "Not a number I know!" << endl;
    
    std::cout << std::endl;
    return 0;
}