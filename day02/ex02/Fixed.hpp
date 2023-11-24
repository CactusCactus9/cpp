/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:15:02 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/24 19:45:00 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>
#include <cmath>
 

class	Fixed
{
private:
	int					_num;
	static const int	_n = 8;
public:
	Fixed();
	Fixed(const int n);
	Fixed(const float m);

	bool	operator>(const Fixed& other)const;
	bool	operator<(const Fixed& other)const;
	bool	operator>=(const Fixed& other)const;
	bool	operator<=(const Fixed& other)const;
	bool	operator==(const Fixed& other)const;
	bool	operator!=(const Fixed& other)const;

	Fixed	operator+(const Fixed& other)const;
	Fixed	operator-(const Fixed& other)const;
	Fixed	operator*(const Fixed& other)const;
	Fixed	operator/(const Fixed& other)const;

	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);

	static Fixed&	min(Fixed &ref1, Fixed &ref2);
	
	Fixed(const Fixed &obj);
	Fixed	&operator = (const Fixed& src);//fixed& cuz a = b = c
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	float	toFloat(void)const;
	int		toInt(void) const;
	
	~Fixed();
};
std::ostream&	operator<<(std::ostream& os, const Fixed& other);

#endif