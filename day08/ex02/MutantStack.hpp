#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H
#include <stack>
#include <deque>
#include <iostream>

template <typename T,typename container = std::deque<T> >
class	MutantStack : public std::stack<T, container>{
	public:
		MutantStack() : std::stack<T, container>(){};
		MutantStack(size_t num) : std::stack<T, container>(num){};
		MutantStack(const MutantStack &obj) : std::stack<T, container>(obj){};
		MutantStack	&operator=(const MutantStack &other){
			if (this != &other){
				std::stack<T, container>::operator=(other);
			}
			return (*this);
		};
		~MutantStack(){};
		typedef typename std::stack<T, container>::container_type::iterator	iterator;
		iterator	begin(){
			return (this->c.begin());
		}
		iterator	end(){
			return (this->c.end());
		}
		typedef typename std::stack<T, container>::container_type::const_iterator	iter;
		iter	beginning(){
			return (this->c.begin());
		}
		iter	ending(){
			return (this->c.end());
		}
};
#endif
