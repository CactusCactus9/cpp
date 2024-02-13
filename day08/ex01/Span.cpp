#include "Span.hpp"

Span::Span(){};
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

std::vector<int>	Span::insert_range(std::vector<int> v){
	_vect.insert(_vect.begin(), v.begin(), v.end());
	return (_vect);
}
Span::~Span(){};