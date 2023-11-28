/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:55:23 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/28 23:49:01 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	this->_braincat = new Brain();
}

Cat::Cat(const Cat& obj) : Animal(obj){
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat&	Cat::operator=(const Cat& obj){
	if (this != &obj)
	{
		Animal::operator=(obj);
	}
	return (*this);
}

std::string	Cat::getType()const{
	return (this->_type);
}

void	Cat::makeSound(){   
	std::cout << "miaw" << std::endl;
}

Cat::~Cat(){
	std::cout << "Cat default deconstructor called" << std::endl;
	delete _braincat;
}