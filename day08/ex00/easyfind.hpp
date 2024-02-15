#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <algorithm>


template <typename T>
typename T::iterator	easyfind(T &first, int second){
	typename T::iterator	iter;
	iter = std::find(first.begin(), first.end(), second);
	if (iter == first.end())
		throw("No occurence found");
	return (iter);
}
#endif
