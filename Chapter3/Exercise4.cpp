// Exercise 4 from Chapter 3 of
// Stroustrup ppp with c++
// Program to take two integers from user
// Determine smallest, largest, sum, difference, product & ratio

#include <iostream>
#include"../std_lib_facilities.h"

int main(){
    
    cout << "Please enter two integers separated by a space: ";
    int val1{}, val2{};
    cin >> val1 >> val2;
    
    // Determine smallest & largest
    int smallest{};
    int largest{};
    if(val1 < val2){
        cout << val1 << " is the smallest and " << val2 << " is the largest" << endl;
        smallest = val1;
        largest = val2;
    }
    else{
        cout << val2 << " is the smallest and " << val1 << " is the largest" << endl;
        smallest = val2;
        largest = val1;
    }
    
    // Determine sum
    cout << "The sum of " << val1 << " and " << val2 << " is: " << val1 + val2 << endl;
    
    // Determine difference
    cout << "The difference between " << smallest << " and " << largest << " is: " << largest - smallest << endl;
    
    // Determine product
    cout << "The product of " << val1 << " and " << val2 << " is " << val1 * val2 << endl;
    
    // Determine ration
    cout << "The ratio of " << val1 << " and " << val2 << " is " << largest / smallest << endl;
    
    
    
    
    
    
    
    std::cout << std::endl;
    return 0;
}