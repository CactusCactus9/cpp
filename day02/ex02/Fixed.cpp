/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:25:51 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/24 23:47:16 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _num(0){
}

//Comparison Operators
bool	Fixed::operator>(const Fixed& other)const{
	return (this->getRawBits() > other.getRawBits());
}
bool	Fixed::operator<(const Fixed& other)const{
	return (this->getRawBits() < other.getRawBits());
}
bool	Fixed::operator>=(const Fixed& other)const{
	return (this->getRawBits() >= other.getRawBits());
}
bool	Fixed::operator<=(const Fixed& other)const{
	return (this->getRawBits() <= other.getRawBits());
}
bool	Fixed::operator==(const Fixed& other)const{
	return (this->getRawBits() == other.getRawBits());
}
bool	Fixed::operator!=(const Fixed& other)const{
	return (this->getRawBits() != other.getRawBits());
}


//Arithmetic Operators
Fixed	Fixed::operator*(Fixed const &ref) const{
	Fixed	res(this->toFloat() * ref.toFloat());
	return (res);
}
Fixed	Fixed::operator+(Fixed const &ref) const{
	Fixed	res(this->toFloat() + ref.toFloat());
	return (res);
}
Fixed	Fixed::operator-(Fixed const &ref) const{
	Fixed	res(this->toFloat() - ref.toFloat());
	return (res);
}
Fixed	Fixed::operator/(Fixed const &ref) const{
	Fixed	res(this->toFloat() / ref.toFloat());
	return (res);
}


//Increment-Decrement Operators
Fixed	&Fixed::operator++(){
	this->_num++;
	return (*this); //increment directly and returns reference to the obj
}
Fixed	Fixed::operator++(int/*dummy parameter*/){
	Fixed	tmp(*this);
	this->_num++;
	return (tmp); //returns the value 
}
Fixed	&Fixed::operator--(){
	this->_num--;
	return (*this);
}
Fixed	Fixed::operator--(int){
	Fixed	tmp(*this);//copy const
	this->_num--;
	return (tmp);
}


//min-max
Fixed& Fixed::min(Fixed &ref1, Fixed &ref2){
	return (ref1 < ref2) ? ref1 : ref2;
}
const Fixed&	Fixed::min(const Fixed &ref1, const Fixed &ref2){
	return (ref1.getRawBits() < ref2.getRawBits()) ? ref1 : ref2;
}
Fixed&	Fixed::max(Fixed &ref1, Fixed &ref2){
	return (ref1.getRawBits() > ref2.getRawBits()) ? ref1 : ref2;
}
const Fixed&	Fixed::max(const Fixed &ref1, const Fixed &ref2){
	return (ref1.getRawBits() > ref2.getRawBits()) ? ref1 : ref2;
}
Fixed::Fixed(const int n){
	this->_num = n << this->_n;
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n){
	_num = roundf( n * (1 << _n));
	// std::cout << "Float constructor called" << std::endl;
}

int	Fixed::getRawBits() const{
	return (_num);
}

void	Fixed::setRawBits(int const raw){
	this->_num = raw;
}

float	Fixed::toFloat(void)const{
	return ((float)(this->getRawBits()) / (1 << this->_n));
}

// int		Fixed::toInt(void) const{
// 	return ((int)roundf(this->_num >> this->_n));
// }


Fixed::Fixed(const Fixed &obj)
{
	*this = obj;//same class..call Copy assignment operator called
}

Fixed&	Fixed::operator=(const Fixed &src){
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_num = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(){};

std::ostream&	operator<<(std::ostream& os, const Fixed& other){
	os << other.toFloat();
	return (os);
}




