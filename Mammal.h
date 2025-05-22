#pragma once

// inheritance
// inheritance in OOP?
// a class inherits members from a superclass
// meaning the subclass can use members of the superclass
#include <iostream>
#include "Animal.h"
#include "Viviparous.h"

// when doing inheritance you specify a modifier which 
// changes the members access modifiers

// remember: we only inherit public and protected members
// public - public remains public, protected remains protected
// protected - public becomes protected
// private - everything becomes private

// C++ has multiple inheritance which means 
// a class can be a subclass of several superclasses
class Mammal : public Animal, public Viviparous
{
	private:
		std::string name;

	public:
		Mammal(int age, int weight, std::string name);

		// when overriding a virtual method we need 
		// to specify with the "override" keyword
		void sayHello() override;
};

