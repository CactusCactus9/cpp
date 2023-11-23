/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:11:25 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/23 18:36:53 by abelkace         ###   ########.fr       */
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
	Fixed(const Fixed &obj); 
	int		getNum()const;
	Fixed	&operator = (const Fixed& src);
	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	float	toFoloat(void)const;
	int		toInt(void) const;
	~Fixed();
};
std::ostream&	operator<<(std::ostream& os, const Fixed& other);

#endif



Default constructor called
Int constructor called
Float constructor called
Copy constructor called

Copy assignment operator called
Float constructor called

Copy assignment operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called