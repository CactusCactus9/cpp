/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:08:24 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/28 12:50:34 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

 int main()
{
	Animal	a;
	Dog	b;
	Dog	d(b);
	Cat	c;

	std::cout << b.getType() << std::endl;
	std::cout << "fetgb"<<d.getType() << std::endl;
	std::cout << c.getType() << std::endl;
	

	
// const Animal* meta = new Animal();
// const Animal* j = new Dog();
// const Animal* i = new Cat();
// std::cout << j->getType() << " " << std::endl;
// std::cout << i->getType() << " " << std::endl;
// i->makeSound(); //will output the cat sound!
// j->makeSound();
// meta->makeSound();
// ...
// return 0;
}