#ifndef BASE_H
#define BASE_H
#include <cstdlib>
#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class	Base{
	public:
		virtual ~Base();
};
Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif