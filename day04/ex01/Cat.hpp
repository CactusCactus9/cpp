/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 10:52:32 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/29 10:41:36 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
private:
	Brain	*_braincat;
public:
	Cat();
	Cat(const Cat& obj);
	Cat&	operator=(const Cat& obj);
	std::string	getType()const;
	void	makeSound()const;
	~Cat();
};
#endif