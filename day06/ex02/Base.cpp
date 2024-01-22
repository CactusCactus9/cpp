#include "Base.hpp"
#include <exception>

Base	*generate(void){
	A	A_inst;
	B	B_inst;
	C	C_inst;
	int	seed;

	seed = std::rand() % 3;
	switch (seed)
	{
		case 0:
			return (new A);//polymorphism
		case 1:
			return (new B);//Because objects with an inheritance structure 
			//have a base class in memory, it was possible to refer to the derived class as a pointer to the base class, so there was no problem when upcasting
		case 2:
			return (new C);
		default:
			NULL;
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

void	identify(Base &p){
	try{
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
		if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
		if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
	}
	catch(const std::bad_cast){};
		
}