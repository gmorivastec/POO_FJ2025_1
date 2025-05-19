// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// COMMENTS - notes that the programmer adds to the code but
// are not code themselves

// single line - // 

/*

YOU CAN ALSO HAVE
MULTILINE 
COMMENTS!

*/

// compiler????
// a program that "translates" source code into binary

// there are several different compilers for c++
// - msvc
// - g++ (gcc)
// - clang

// IDE - integrated development environment 
// visual tool that helps us develop
// - visual studio 
// - xcode
// - visual studio code 

// include 
// import a header into my current source code 

// < > used for standard library headers or libraries installed in your OS path
// " " for your own headers and files in your source tree
#include <iostream>
#include "Animal.h"

// main function - 
// in c++ we have a main entry point that will run when we "press play"
// that is the main method
// io - input / output
int main()
{
    // when we show something 
    // we call it "print"

    // :: - scope resolution operator
    // \n - line break
    std::cout << "Hello World!" << std::endl; // a sample comment 

    // creating an object
    Animal animal1;
    Animal animal2(5, 10);
    std::cout << animal1.add(2, 3) << std::endl;
}