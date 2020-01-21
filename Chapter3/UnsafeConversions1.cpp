// Program to demonstrate unsafe conversions
// Code copied from Strustrups ppp in C++
// Chapter 3

#include <iostream>
#include"../std_lib_facilities.h"

int main(){
    
    int a = 2000;
    char c = a;
    int b = c;
    if(a != b)
        cout << "Ooops!: " << a << "!=" << b << endl;
    else
        cout << "Wow! We have largwe characters!" << endl;
    
    std::cout << std::endl;
    return 0;
}