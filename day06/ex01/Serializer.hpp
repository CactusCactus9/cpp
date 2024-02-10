#ifndef SERIALIZER_H
#define SERIALIZER_H
#include <cstdint>
#include <string>

typedef struct Data{
	int			num;
}Data;

class	Serializer{
	private:
		Serializer();
		Serializer(const Serializer &obj);
		Serializer	&operator=(const Serializer &other);
		~Serializer();
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);
};

#endif