#include "Base.hpp"
#include <exception>

Base	*generate(void){
	Base *p;
	int	seed;

	seed = std::rand() % 3;
	switch (seed)
	{
		case 0:
			p = new(std::nothrow) A;//polymorphism
		case 1:
			p = new(std::nothrow) A;//Because objects with an inheritance structure 
			//have a base class in memory, it was possible to refer 
			//to the derived class as a pointer to the base class, so there was no problem when upcasting
		case 2:
			p = new(std::nothrow) A;
		return NULL;
	}
}

void	identify(Base *p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))//dynamic_cast allows for detecting errors at compile time for base class to derived class casting.
		std::cout << "B"<< std::endl;//However, dynamic_cast is only allowed for polymorphic classes (those with one or more virtual functions).
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}
//The dynamic_cast operator is mainly used to perform downcasting (converting a pointer/reference of a base class to a derived class). 
//It ensures type safety by performing a runtime check to verify the validity of the conversion.

void	identify(Base &p){
	try{
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
		catch(const std::bad_cast){};
		if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
		catch(const std::bad_cast){};
		if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
		catch(const std::bad_cast){};
	}		
}