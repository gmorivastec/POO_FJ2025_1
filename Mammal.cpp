#include "Mammal.h"

Mammal::Mammal(int age, int weight, std::string name) : Animal(age, weight), name(name) {

	// a super constructor is ALWAYS invoked
	// if its not done explicitely it will invoke the default

	std::cout << "THE MAMMAL CONSTRUCTOR!" << std::endl;
}

void Mammal::sayHello() {

	// you CAN invoke the version of the superclass if you wish
	Viviparous::sayHello();

	std::cout << "HELLO FROM MAMMAL!" << std::endl;
}