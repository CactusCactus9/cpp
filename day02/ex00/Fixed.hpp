/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:55:13 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/20 14:57:16 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H
#include <iostream>
 

class	Fixed
{
private:
	int					_num;
	static const int	_n = 8;
public:
	Fixed();
	Fixed(const Fixed &obj); 
	Fixed &operator = (const Fixed& src);
	int	getRawBits(void)const;
	void	setRawBits(int const raw);
	~Fixed();
};

#endif
//The key role of the copy constructor is to create a new object
//initialized to the same state as the object being passed in. 
//Even though the parameter is a reference, 
//it's a different object in memory from the original object it references.

// COPY CONSTROCTOR //allows the copy constructor to accept both constant and non-constant objects for copying.

// COPY ASSIGNMENT OPERATOR//It's used when an object is already initialized and needs to be assigned the values of another object.

//deep copy : copy values
// shallow copy : copy address 