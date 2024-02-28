#include "BitcoinExchange.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

int	main(int ac,char **av){
	if (ac != 2){
		std::cout << "Error! Check the arguments!" << std::endl;
		return (1);
	}
	read_file(av);
}