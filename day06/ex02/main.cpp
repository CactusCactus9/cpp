#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void){
	Base *p;
	int	seed;

	std::srand(std::time(0));
	seed = std::rand() % 3;
	switch (seed)
	{
		case 0:
			p = new A();
			break;
		case 1:
			p = new B();
			break;
		case 2:
			p = new C();
			break;
		default:
			p = NULL;
	}
	return p;
}

void	identify(Base *p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B"<< std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "NULL" << std::endl;
}

void	identify(Base &p){
	try{
		if (dynamic_cast<A*>(&p))
			std::cout << "A" << std::endl;
	}
	catch(const std::bad_cast){};
	try{
		if (dynamic_cast<B*>(&p))
			std::cout << "B" << std::endl;
	}
	catch(const std::bad_cast){};
	try{
		if (dynamic_cast<C*>(&p))
			std::cout << "C" << std::endl;
	}
		catch(const std::bad_cast){};	
}

int	main(){
	Base	Obj;
	Base	*p;

	p = &Obj;
	p = generate();
	identify(p);
	identify (*p);
	delete p;
}