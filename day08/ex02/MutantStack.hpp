#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <stack>
#include <deque>
#include <iostream>
#include <list>

template <typename T>
class	MutantStack : public std::stack<T>{
	public:
		MutantStack(){};
		MutantStack(size_t num) : std::stack<T>(num){};
		MutantStack(const MutantStack &obj) : std::stack<T>(obj){
			*this = obj;
		};
		MutantStack	&operator=(const MutantStack &other){
			if (this != &other){
				std::stack<T>::operator=(other);
			}
			return (*this);
		};
		~MutantStack(){};
		typedef typename std::stack<T>::container_type::iterator	iterator;
		iterator	begin(){
			return (this->c.begin());
		}
		iterator	end(){
			return (this->c.end());
		}
};
#endif




//the standard library std::stack is a container adapter that provides a LIFO (Last In, First Out) data structure. 
//It doesn't have its own set of member functions //
//but rather provides an interface to the underlying container's member functions.