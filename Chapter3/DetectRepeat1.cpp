// Program to detect repeated words
// Code copied from Stroustrup PPP in C++
// Chapter 3

#include <iostream>
#include"../std_lib_facilities.h"   // Include file from stroustrup.com

//using namespace std;

int main(){
    
    string previous{" "};
    string current;
    while(cin >> current){
        if(previous == current){
            cout << "Repeated word: " << current << endl;
        }
        
        previous = current;
    }
    std::cout << std::endl;
    return 0;
}