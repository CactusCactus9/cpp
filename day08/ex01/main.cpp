#include "Span.hpp"
#include <iostream>

int main()
{
	try{
		Span sp = Span(100);
		std::srand(std::time(0));
		for(int i = 0; i < 100; i++){
			sp.addNumber(std::rand());
		}
		const std::vector<int> &vect = sp.getVect();
		std::cout << "Vector elements: ";
		for (unsigned int i = 0; i < vect.size(); i++){
			std::cout << vect[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longuest span : " << sp.longestSpan() << std::endl;
		std::vector<int>	ve;
		ve.push_back(7);
		ve.push_back(-9);
		ve.push_back(3);
		sp.insert_range(ve);
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