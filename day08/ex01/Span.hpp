#ifndef SPAN_H
#define SPAN_H
#include <vector>
#include <exception>
#include <iostream>
#include <algorithm>

class	Span{
	private:
		unsigned long		_size;
		std::vector<int	>	_vect;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &obj);
		Span				&operator=(const Span &other);
		std::vector<int>	&getVect();
		unsigned long		&getSize();
		void				addNumber(int num);
		int					shortestSpan();
		int					longestSpan();
		std::vector<int>	insert_range(std::vector<int>::iterator beginn, std::vector<int>::iterator final);
		~Span();
};


#endif