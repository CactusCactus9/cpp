#include "Iter.hpp"
#include <iostream>

template <typename T>
void	ft_print(T &i){
	std::cout << i << std::endl;
}

int main(){
    //array of int
	int array[] = {1, 2, 3};
    int size = sizeof(array) / sizeof(int);
    std::cout << "Array of int incremented: " <<std::endl;
	iter(array, size, ft_print<int>);
    //array of stringwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwxwwwwwwwww
    std::string array_str[] = {"48", "49", "50"};
    size_t size_str = sizeof(array_str) / sizeof(std::string);
    std::cout << "Array of string incremented: " <<std::endl;
	iter(array_str, size_str, ft_print<std::string>);
}