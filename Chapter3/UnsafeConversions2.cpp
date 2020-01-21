// Program to demonstrate unsafe conversions 2
// Code copied from Stroustrups PPP in C++
// Chapter 3

#include <iostream>
#include"../std_lib_facilities.h"

int main(){
    
    double d{0};
    while(cin >> d){        // repeat following statements
        int i = d;          // try to squeeze a double into an int
        char c = i;         // try int into char
        int i2 = c;         // get integer value of char
        
        cout << "d == " << d << endl;           // original double
        cout << "i == " << i << endl;           // converted to int
        cout << "i2 == " << i2 << endl;         // int value of char
        cout << "char (" << c << ")" << endl;   // char
    }
    
    std::cout << std::endl;
    return 0;
}