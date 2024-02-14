#include "easyfind.hpp"
#include <vector>

int	main(){
	try{
		std::vector<int> vect;
		vect.push_back(3);
		vect.push_back(2);
		vect.push_back(-8);

		std::vector<int>::iterator result = easyfind(vect, 0);
		std::cout << "element is found in : " << std::distance(vect.begin(), result) << std::endl;
	}
	catch(...){
		std::cout << "Element not found!" << std::endl;
	};

	}