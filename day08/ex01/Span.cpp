#include "Span.hpp"
#include <algorithm>

//Span::Span(unsigned int N) : _vect(N){}//vector with N elements

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
void    Span::addNumber(int num){
	if (_vect.size() >= _size)
		throw("Error!");
	_vect.push_back(num);
}

//  int Span::shortestSpan() {
//         if (_vect.size() <= 1) {
//             throw std::runtime_error("Cannot find span with less than 2 vect.");
//         }
//         std::sort(_vect.begin(), _vect.end());
//         int shortest = _vect[1] - _vect[0];
//         for (size_t i = 2; i < _vect.size(); ++i) {
//             int span = _vect[i] - _vect[i - 1];
//             if (span < shortest) {
//                 shortest = span;
//             }
//         }
//         return shortest;
//     }

//     int Span::longestSpan() {
//         if (_vect.size() <= 1) {
//             throw std::runtime_error("Cannot find span with less than 2 vect.");
//         }
//         std::sort(_vect.begin(), _vect.end());
//         return _vect.back() - _vect.front();
//     }

Span::~Span(){};