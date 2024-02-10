#include "Serializer.hpp"
#include <iostream>

int	main(){
	Data	*deser;
	uintptr_t raw;
	Data	data;

	data.num = 2;
	raw = Serializer::serialize(&data);
	deser = Serializer::deserialize(raw);
	std::cout << "Data number: " << data.num << std::endl;
	std::cout << "Deserialized: " << deser->num << std::endl;
}