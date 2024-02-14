#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>


template <typename T>
typename T::iterator	easyfind(T &first, int second){//typename T::iterator: to indicate that iterator is a type name
//C++ syntax allows for both types and static member variables to be accessed using the :: operator.
	typename T::iterator	iter;
	iter = std::find(first.begin(), first.end(), second);//std::find returns an iterator to the first occurrence of the value within the range [first, last) if the value is found.
//If the value is not found, std::find returns the last iterator.
	if (iter == first.end())
		throw(std::out_of_range("No occurence found"));
	return (iter);
}
#endif
//An iterator in C++ is an object that behaves like a pointer and is used to iterate through the elements of a container (like an array, vector, list, etc.). 
//Iterators provide a way to access and traverse the elements of a container in a sequential manner.
//begin() returns a location you can dereference. end() does not. Dereferencing the end pointer is an error. The end pointer is only to be used to see when you've reached it.