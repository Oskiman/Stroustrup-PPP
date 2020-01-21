// Exercise 8 from Chapter 3 of
// Stroustrup's PPP with C++
// Program to determine if a given value
// is odd or even

#include <iostream>
#include"../std_lib_facilities.h"

int main(){
    
    cout << "Please enter an integer: ";
    int val1{};
    cin >> val1;
    
    if(val1 % 2 == 0)
        cout << val1 << " is an even number" << endl;
    else
        cout << val1 << " is an odd number" << endl;
        
    std::cout << std::endl;
    return 0;
}