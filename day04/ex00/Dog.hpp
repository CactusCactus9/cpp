/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:35:33 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/28 17:23:01 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog& obj);
	Dog&				operator=(const Dog& obj);
	void				makeSound();
	// const std::string	getType()const;
	// void				setType(const std::string &typ);
	~Dog();
};
#endif