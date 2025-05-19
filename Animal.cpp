// source file (.cpp)
// contains the specific implementation
// here is where we define the HOW

// SUPER IMPORTANT
// they must be related EXPLICITILY
#include "Animal.h"

Animal::Animal() {

	std::cout << "DEFAULT CONSTRUCTOR INVOKED!" << std::endl;
}

// we are using initialization list
Animal::Animal(int age, int weight) : age(age), weight(weight) {

	// initialization can also happen here!
	//this->age = age;
	//this->weight = weight;

	std::cout << "NON-DEFAULT CONSTRUCTOR INVOKED!" << std::endl;
}

void Animal::eat() {
	std::cout << "NOM NOM" << std::endl;
}

int Animal::add(int firstValue, int secondValue) {
	return firstValue + secondValue;
}

int Animal::getAge() {
	return age;
}

void Animal::setAge(int newAge) {
	age = newAge;
}