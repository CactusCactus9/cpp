/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:52:32 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/28 16:58:52 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat();
	Cat(const Cat& obj);
	Cat&	operator=(const Cat& obj);
	std::string	getType()const;
	void	makeSound();
	~Cat();
};
#endif