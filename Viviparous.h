#pragma once

#include <iostream>

class Viviparous
{
	public:
		void bornAlive();

		// virtual methods and overriding
		// TWO CONCEPTS WE NEED TO GET A HANG ON:
		// - Overloading (sobrecarga) - defining several versions of the same method
		// (we already did this on the animal constructor)
		// - Overriding (sobreescritura) - redefine a method
		// in a subclass
		virtual void sayHello();
};

