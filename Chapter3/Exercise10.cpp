// Exercise 10 from Chapter 3 of
// Stroustrup's PPP with C++
// Program that takes an operation followed by
// two operands and outputs the result

#include <iostream>
#include"../std_lib_facilities.h"

int main(){
    
    cout << "Please enter an operation(+, -, *, /): ";
    string operation{};
    cin >> operation;
    
    cout << "Please enter two numbers separated by a space: ";
    double val1{}, val2{};
    cin >> val1 >> val2;
    
    if(operation == "+"){
        cout << val1 << " + " << val2 << " = " << val1 + val2 << endl;
    }
    if(operation == "-"){
        cout << val1 << " - " << val2 << " = " << val1 - val2 << endl;
    }
    if(operation == "*"){
        cout << val1 << " * " << val2 << " = " << val1 * val2 << endl;
    }
    if(operation == "/"){
        cout << val1 << " / " << val2 << " = " << val1 / val2 << endl;
    }
    
    std::cout << std::endl;
    return 0;
}