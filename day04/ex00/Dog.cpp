/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:37:47 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/28 13:09:10 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : _type("Dog"){
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& obj) : Animal(obj){
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog&	Dog::operator=(const Dog& obj){
	if (this != &obj)
	{
		Animal::operator=(obj);
	}
	return (*this);
}

// void	Dog::setType(const std::string &typ){
// 	this->_type = 
// }

const std::string	Dog::getType()const{
	return (this->_type);
}

void	Dog::makeSound(){
	std::cout << "miaw" << std::endl;
}

Dog::~Dog(){
	std::cout << "Dog default deconstructor called" << std::endl;
}