#ifndef SPAN_H
#define SPAN_H
#include <vector>
#include <stdexcept>

class	Span{
	private:
		unsigned long		_size;
		std::vector<int	>	_vect;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &obj);
		Span	&operator=(const Span &other);
		std::vector<int>	&getVect();
		void	addNumber(int num);
		int	shortestSpan();
		int	longestSpan();
		std::vector<int>	insert_range(int val);
		~Span();
};


#endif