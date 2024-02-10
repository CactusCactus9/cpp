#include "easyfind.hpp"


int	main(){
	std::vector<int> vect = {0, 6, 8, -5, 6};
	std::vector<int>::iterator result = easyfind(vect, 6);
    if (result == vect.end())
		std::cout << "ERROR!" << std::endl;
	else
		std::cout << "element ifound in : " << std::distance(vect.begin(), result) << std::endl;
}