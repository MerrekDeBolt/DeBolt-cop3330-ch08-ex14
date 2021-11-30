/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Merrek DeBolt
 */

#include <iostream>
#include "std_lib_facilities.h"

/*
    1. Yes, you can.
    2. It would mean that the variable would not be changed ever.
    3. To prevent the variable from being changed in execution.
    4. Because if you don't want to change a value of a variable, just don't change it.
*/

void f(const int value)
{
    // Can't put this line because code doesn't allow
    // value = 2;
    cout << value;
}

void g(int value)
{
    value = 2;
    cout << value;
}

int main() 
{
    int value = 5;
    g(value);
    cout << "\n";
    f(value);
    return 0;
}