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
#include <string>
#include "Animal.h"
#include "Mammal.h"
#include "Viviparous.h"

// main function - 
// in c++ we have a main entry point that will run when we "press play"
// that is the main method
// io - input / output
int previousMain()
{
    // when we show something 
    // we call it "print"

    // :: - scope resolution operator
    // \n - line break
    std::cout << "Hello World 2!" << std::endl; // a sample comment 

    // creating an object
    Animal animal1;
    Animal animal2(5, 10);
    std::cout << animal1.add(2, 3) << std::endl;
    std::cout << animal1.getAge() << std::endl;
    
    // CANNOT DO THIS
    // std::cout << animal1.age << std::endl;
    //animal1.age = 4;

    // flow control structures review
    // estructuras de control de flujo

    // conditions
    
    if (animal1.getAge() < 2) {
        std::cout << "BABY ANIMAL" << std::endl;
    }
    else if (animal1.getAge() < 5) {
        std::cout << "YOUNG ANIMAL" << std::endl;
    }
    else {
        std::cout << "ADULT ANIMAL" << std::endl;
    }

    switch (animal1.getAge()) {
        case 1:
            std::cout << "ONE YEAR OLD!" << std::endl;
            break;
        case 2:
            std::cout << "TWO YEAR OLD!" << std::endl;
            break;
        default:
            std::cout << "SOME OTHER AGE" << std::endl;
            break;
    }


    // loops

    // for
    // for (initial value; condition; change) {}
    // i++ - increments by 1 
    // ++i
    // i = i + 1
    // i += 1


    for (int i = 0; i < 10; i++) {
        std::cout << i << std::endl;
    }

    for (int i = 0; i < 10; i+= 2) {
        std::cout << i << std::endl;
    }

    for (int i = 10; i > 0; i--) {
        std::cout << i << std::endl;
    }

    // while

    int i = 0;
    while (i < 10) {
        // SUPER IMPORTANT
        // if you are using a number for the condition in a while
        // ensure you are doing a change
        std::cout << i << std::endl;
        i++;

        // we normally don't use while with a numeric condition
    }

    // do - while
    i = 0;
    do {
        std::cout << i << std::endl;
        i++;
    } while (i < 10);

    return -1;
}

int main() {
    
    Animal animal1;
    Mammal mammal1(5, 20, "Fifi"); 
    Viviparous viviparous1;

    animal1.eat();
    mammal1.eat();
    //viviparous1.eat();

    viviparous1.bornAlive();
    mammal1.bornAlive();

    viviparous1.sayHello();
    mammal1.sayHello();

    std::cout << mammal1.getAge() << std::endl;

    std::string value2;
    std::string value3;

    /*
    // how to capture input from user
    int userInput = 0;
    do {
        std::cout << "give me a number!" << std::endl;
        std::cin >> userInput;

        std::cout << "give me a string!" << std::endl;
        std::cin >> value2;

        //std::cout << "give me another string!" << std::endl;
        //std::getline(std::cin, value3);

    } while (userInput != 9);
    */
}