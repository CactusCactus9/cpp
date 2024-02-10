#ifndef SCALARCONVERTER_H
#define SCALARCONVERTER_H
#include <iostream>
#include <string>

class	ScalarConverter{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &obj);
		ScalarConverter	&operator=(const ScalarConverter &other);
		~ScalarConverter();
	public:
		static void	convert(std::string &str);
};
	int	pseudo_literal(std::string str);
#endif