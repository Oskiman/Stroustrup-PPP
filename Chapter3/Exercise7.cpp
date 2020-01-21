// Exercise 7 (adapted from exercise 6) from Chapter 3 of
// Stroustrup's PPP with C++
// Program to get 3 string values from input
// then output in alphabetical order

#include <iostream>
#include"../std_lib_facilities.h"

int main(){
    
    cout << "Please enter 3 strings separated by spaces:";
    string val1{}, val2{}, val3{};
    cin >> val1 >> val2 >> val3;
    
    string top{}, middle{}, bottom{};
    
    if(val1 > val2 && val1 > val3){
        top = val1;
        if(val2 > val3){
            middle = val2;
            bottom = val3;
        }
        else{
            middle = val3;
            bottom = val2;
        }
    }
    
    if(val1 > val2 && val1 < val3){
        top = val3;
        middle = val1;
        bottom = val2;
    }
    
    if(val1 < val2 && val1 < val3){
        bottom = val1;
        if(val2 > val3){
            top = val2;
            middle = val3;
        }
        else{
            top = val3;
            middle = val2;
        }
    }
    
    cout << "In alphabetical order the strings are " << bottom << ", " << middle << ", " << top << endl;
        
    
    std::cout << std::endl;
    return 0;
}