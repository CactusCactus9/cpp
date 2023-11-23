/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:09:44 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/23 17:28:01 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
}

Fixed::Fixed(const int n){
	this->_num = n << this->_n;
	std::cout << "Int to fixed point" << std::endl;
}

Fixed::Fixed(const float n){
	_num = roundf( n * (1 << _n));
	std::cout << "float to fixed" << std::endl;
}

int	Fixed::getNum()const{
	return (_num);
}

float	Fixed::toFoloat(void)const{
	return (this->_num / (1 << this->_n));
}

int		Fixed::toInt(void) const{
	return ((int)roundf(this->_num >> this->_n));
}


Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_num = obj.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed &src){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		this->_num = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_num);
}

void	Fixed::setRawBits(int const raw){
	this->_num = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& other){
	os << other.toFoloat();
	return (os);
}