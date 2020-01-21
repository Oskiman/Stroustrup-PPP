// Drill no.1 from Chapter 3 of
// ppp with c++
// Program to create a simple form letter based on user input
// Some code copied from the book

#include <iostream>
#include"../std_lib_facilities.h"

int main(){
    
    // Ask user for input(s)
    cout << "Enter the name of the person you want to write to: ";
    string first_name{};
    cin >> first_name;
    cout << "Enter the name of a friend: ";
    string friend_name{};
    cin >> friend_name;
    cout << "Is the friend Male(m) of Female(f)?:";
    char friend_sex{};
    cin >> friend_sex;
    cout << "How old are you?:";
    double age{};
    cin >> age;
    
    // Output letter
    cout << "Dear " << first_name << "," << endl;
    cout << "\tHow are you?.  I am well. I miss you!" << endl;
    cout << "Tell me, have you seen " << friend_name << " lately?" << endl;
    if(friend_sex == 'm'){
        cout << "If you see " << friend_name << " please ask him to call me" << endl;
    }
    if(friend_sex == 'f'){
        cout << "If you see " << friend_name << " please ask her to call me" << endl;
    }
    cout << "I hear you just had a birthday and are " << age << " years old!" << endl;
    if(age < 0 || age > 110){
        simple_error("you're kidding!");
    }
    if(age < 12){
        cout << "Next year you will be " << age + 1 << endl;
    }
    if(age == 17){
        cout << "Next year you will be able to vote." << endl;
    }
    if(age > 70){
        cout << "I hope you are enjoying retirement!" << endl;
    }
    
    cout << endl;
    cout << endl;
    cout << "Yours" << endl;
    std::cout << std::endl;
    return 0;
}