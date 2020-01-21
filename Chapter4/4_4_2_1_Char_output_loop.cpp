// 4_4_2_1_Char_output_loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Try this exercise from p.111, Chapter 4 of
// Stroustrup's PPP with C++
// Program to output chars in a loop
// Have added a bit more code, user input etc.

#include <iostream>
#include"../std_lib_facilities.h"

int main() {

    //int i{97};
    //char c{'A'};

    char start{}, end{};
    cout << "Letter to start & end separated by a space:";
    cin >> start >> end;

    // Use a while loop    
    //    while(c < 'z'){
    //        cout << c << " " << i << endl;
    //        ++c;
    //        ++i;
    //    }

    // Use a for loop
    for (int j{ start }; j <= end; ++j) {
        //cout << c << " " << int(c) << endl;
        cout << start << " " << int(start) << endl;
        ++start;
        //++i;

    }

    std::cout << std::endl;
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
