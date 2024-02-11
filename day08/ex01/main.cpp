#include "Span.hpp"
#include <iostream>

int main()
{
	try{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		const std::vector<int> &vect = sp.getVect();
		std::cout << "Vector elements: ";
		for (unsigned int i = 0; i < vect.size(); i++){
			std::cout << vect[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longuest span : " << sp.longestSpan() << std::endl;
		sp.insert_range(-9);
		std::cout << "New vector elements: ";
		for (unsigned int i = 0; i < vect.size(); i++){
			std::cout << vect[i] << " ";
		}
		std::cout << std::endl;
	}
	catch (...){
		std::cout << "la7" << std::endl;
	}
return 0;
}