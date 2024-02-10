#include "Array.hpp"
#include <iostream>

int	main(){
	try{
		Array<int>	a;
		Array<float>	b(5);
		// Default constructor
		std::cout << "size of a: " << a.size() << std::endl;
		//parameterized constructor
		b[0] = 3;
		b[1] = 9;
		b[2] = -0.5;
		b[3] = 11;
		//copy constructor
		const Array<float>	c(b);
		std::cout << "array c elements :" << std::endl;
		std::cout << c[0] << std::endl;
		std::cout << c[1] << std::endl;
		std::cout << c[2] << std::endl;
		std::cout << c[3] << std::endl;
		std::cout << c[4] << std::endl;
		std::cout << c[5] << std::endl;
		// c[0] = 5;
	}
	catch(std::out_of_range){
		std::cout << "ERROR!" << std::endl;
	};
}