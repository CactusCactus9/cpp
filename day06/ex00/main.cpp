#include "ScalarConverter.hpp"

int	pseudo_literal(std::string str){
	if (str == "+inf" ||  str == "-inf" || str == "nan" || str == "nanf")
		return (1);
	return (0);
}
int	ft_validate(std::string &str){
	if (str.length() == 1 && isprint(str[0]))
		return (1);
	if (pseudo_literal(str))
		return (1);
	int i = 0;
	if (str[0] == '+' || str[0] == '-'){
		i++;
	}
	for(; i < str.length(); i++){
		if (!isdigit(str[i]) && str[i] != '.' && str[i] != 'f')
			return (0);
		if (str[i] == 'f' && i != (str.length() - 1))
			return (0);
	}
	

	return (0);
}
int	main(int ac, char **av)
{
	if (ac == 2)
	{
		// if (strlen(av[1]))
		// 	std::cout << "try displayable characters!" << std::endl;
		ScalarConverter::convert(av[1]);
	}
}