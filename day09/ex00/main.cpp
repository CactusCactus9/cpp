#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

bool isNumeric(const std::string& str) {
    for (char ch : str) {
        if (!std::isdigit(ch)) {
            return false;
        }
    }
    return true;
}

int	main(int ac,char **av){
	std::string	line;
	std::string	header;

	if (ac != 2){
		std::cout << "Error! Check the arguments!" << std::endl;
		return (1);
	}
	std::string argv = av[1];
	if (av[1][argv.length() - 1] != 't' || av[1][argv.length() - 2] != 'x' || 
	av[1][argv.length() - 3] != 't' || av[1][argv.length() - 4] != '.'){
		std::cout << "Error! Wrong extention!" << std::endl;
		return (1);
	}
	//Here's how std::ios::trunc works:
//If the file specified for output operations already exists, opening it with the std::ios::trunc flag will truncate the file, meaning that it will delete all existing content within the file.
//If the file does not exist, a new file with the specified name is created.
//If the file is successfully opened or created, output operations (such as writing data to the file) can be performed
	std::fstream   myFile(av[1], std::ios::out | std::ios::in | std::ios::trunc);
	if (!(myFile.is_open())){
		std::cout << "Failed to open the file!" <<std::endl;
		return (1);
	}
	// if (!getline(std::cin, header)){
	// 	std::cerr << "Failed to read!" << std::endl;
	// 	return (1);
	// }
	// if (header != "date | value"){
	// 	std::cout << "Invalid input!" << std::endl;
	// 	return (1);
	// }
	// myFile << header << std::endl;
	while (getline(std::cin, line)){
		for (size_t i = 0; i < line.length(); i++){
			if (line[i] != ' ' && line[i] != '-' && line[i] != '|' && line[i] != '.' && !isdigit(line[i])){
				std::cerr << "Invalid input!" << std::endl;
				return (1);
			}
			for (size_t i = 0; i < 4; i++){
				if (!isdigit(line[i])){
					std::cerr << "Invalid input!" << std::endl;
					return (1);
				}
			}
			if (line.length() >= 4 && line[4] != '-'){
				std::cerr << "Wrong" << std::endl;
				return (1);
			}
			for (size_t i = 5; i < 7; i++){
				if (!isdigit(line[i])){
					std::cerr << "Invalid input!" << std::endl;
					return (1);
				}
			}
			if (line.length() >= 7 && line[7] != '-'){
				std::cerr << "Invalid input!" << std::endl;
				return (1);
			}
			for (size_t i = 5; i < 7; i++){
				if (!isdigit(line[i])){
					std::cerr << "Invalid input!" << std::endl;
					return (1);
				}
			}
			if (line.length() >= 7 && line[7] != '-'){
				std::cerr << "Invalid input!" << std::endl;
				return (1);
			}
			for (size_t i = 8; i < 10; i++){
				if (!isdigit(line[i])){
					std::cerr << "Invalid input!" << std::endl;
					return (1);
				}
			}
			if (line.length() >= 10 && (line[10] != ' ' && line[10] != '\0')){
				std::cerr << "Invalid input!" << std::endl;
				return (1);
			}
			if (line.length() >= 11 && (line[11] != '|' || line[12] != ' ' || 
			(!isdigit(line[13]) && line[13] >= 0 && std::atoi(&line[13]) <= 1000))){
				std::cerr << "Wrong" << std::endl;
				return (1);
			}
			
		}
		std::cout << "lxcdfvbg: " << line[13] << std::endl;
		std::cout << "line: " << line << std::endl;
		myFile << line << std::endl;
		// std::cin.clear(); // Clear the error state
        // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	myFile.close();
}