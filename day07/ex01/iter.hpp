#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>

template	<typename T, typename Funct, typename Arg>
void	iter(T *arr, int len, Funct (*function)(Arg)){
	if (!arr || !function)
		return ;
	for (int i = 0; i < len; i++){
		function(arr[i]);
	}
}
#endif