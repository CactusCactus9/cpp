#include "easyfind.hpp"


int	main(){
	try{
		std::vector<int> vect = {0, 8, -5};
		std::vector<int>::iterator result = easyfind(vect, 0);
		std::cout << "element is found in : " << std::distance(vect.begin(), result) << std::endl;
	}
	catch(...){
		std::cout << "Element not found!" << std::endl;
	};

	}