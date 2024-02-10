#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
typename T::iterator	easyfind(T &first, int second){
	typename T::iterator	iter;
	iter = std::find(first.begin(), first.end(), second);
	return (iter);
}

#endif
//An iterator in C++ is an object that behaves like a pointer and is used to iterate through the elements of a container (like an array, vector, list, etc.). 
//Iterators provide a way to access and traverse the elements of a container in a sequential manner.