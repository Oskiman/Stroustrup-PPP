// Exercise 11 from Chapter 3 of
// Stroustrup's PPP with C++
// Program prompts user to enter
// various denominations of currency
// then outputs the total

#include <iostream>
#include"../std_lib_facilities.h"

int main(){
    
    cout << "Enter an amount of pennies:";
    int pennies{};
    cin >> pennies;
    
    cout << "Enter an amount of nickels:";
    int nickels{};
    cin >> nickels;
    
    cout << "Enter an amount of dimes:";
    int dimes{};
    cin >> dimes;
    
    cout << "Enter an amount of quarters:";
    int quarters{};
    cin >> quarters;
    
    cout << "Enter an amount of half-dollars:";
    int half_dollars{};
    cin >> half_dollars;
    
    cout << "Enter an amount of dollars:";
    int dollars{};
    cin >> dollars;
    
    cout << "You have " << pennies << " pennies" << endl;
    cout << "You have " << nickels << " nickels" << endl;
    cout << "You have " << dimes << " dimes" << endl;
    cout << "You have " << quarters << " quarters" << endl;
    cout << "You have " << half_dollars << " half-dollars" << endl;
    cout << "You have " << dollars << " dollars" << endl;
    
    double total_pennies{};
    total_pennies = (pennies) + (nickels * 5) + (dimes * 10) + (quarters * 25) + (half_dollars * 50) + (dollars * 100);
    
    cout << "The value of all of your coins in cents is: " << total_pennies << " cents" << endl;
    cout << "Which is $ " << total_pennies / 100 << endl;
    
    
    std::cout << std::endl;
    return 0;
}