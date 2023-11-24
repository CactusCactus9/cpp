/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 11:14:33 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/24 23:56:12 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;

std::cout << "max: " <<Fixed::max( a, b ) << std::endl;
std::cout << "min: " <<Fixed::min( a, b ) << std::endl;

std::cout << " *** \n";

Fixed d(22.33f);
Fixed c = d;

std::cout << "max: " <<Fixed::max( d, c ) << std::endl;//static function called by class
std::cout << "min: " <<Fixed::min( d, c ) << std::endl;
std::cout << d + c << std::endl;
std::cout << d - c << std::endl;
std::cout << d * c << std::endl;
std::cout << d / c << std::endl;

std::cout << " *** \n";

Fixed   x(9);
Fixed   y(0);
std::cout << "max;" << Fixed::max(x, y) << std::endl;
std::cout << "min;" << Fixed::min(x, y) << std::endl;
return 0;
}