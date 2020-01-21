// Program to detect repeated words, with added count
// Code copied from stroustrup ppp in C++
// Chapter 3

#include <iostream>
#include"../std_lib_facilities.h"   // Include file from stroustrup.com

//using namespace std;      // No need for this, we are using another include

int main(){
    
    int number_of_words{};
    string previous{" "};
    string current;
    while(cin >> current){
        ++number_of_words;
        if(previous == current){
            cout << "Word number: " << number_of_words << ", " "Repeated word: " << current << endl;
        }
        
        previous = current;
    }
    std::cout << std::endl;
    return 0;
}