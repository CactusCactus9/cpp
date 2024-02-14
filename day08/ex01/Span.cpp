#include "Span.hpp"

Span::Span(){}
Span::Span(unsigned int N) : _size(N){}
Span::Span(const Span &obj) : _size(obj._size), _vect(obj._vect){}
Span    &Span::operator=(const Span &other){
	if (this != &other){
		this->_size = other._size;
		this->_vect = other._vect;
	}
	return *this;
}

std::vector<int>	&Span::getVect(){
	return (_vect);
}

void	Span::addNumber(int num){
	if (_vect.size() >= _size)
		throw("Error!");
	_vect.push_back(num);
}

unsigned long	&Span::getSize(){
	return(this->_size);
}

int	Span::shortestSpan(){
	int	temp;
	if (_vect.size() <= 1)
		throw ("Not enough elements!");
	sort(_vect.begin(), _vect.end());
	int	result = _vect[1] - _vect[0];
	for (unsigned long i = 0; i < _vect.size() - 2; i++){
		temp = _vect[i + 1] - _vect[i];
		if (temp < result)
			result = temp;
		}
		return (result);
}

int	Span::longestSpan() {
	if (_vect.size() <= 1)
		throw ("Not enough elements!");
	sort(_vect.begin(), _vect.end());
	int	result = _vect[_vect.size() - 1] - _vect[0];
		return (result);
}

std::vector<int>	Span::insert_range(std::vector<int>::iterator beginn, std::vector<int>::iterator final){
	if (_size < (unsigned long)(final - beginn) + _vect.size())
		throw ("error");
	_vect.insert(_vect.begin(), beginn, final);
	return (_vect);
}
Span::~Span(){};