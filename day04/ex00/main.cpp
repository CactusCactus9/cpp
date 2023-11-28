/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:08:24 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/28 23:24:21 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


int main()
{
Animal* meta/*pointer in parent class = uplasting*/ = new Animal(); // virtual allows oerriding the parent methods
Animal* pp[2];
Animal* j = new Dog(); //you create a virtual function table, and if a class has a virtual keyword, 
Animal* i = new Cat(); //you will save the address pointed to by that function, then refer to that address when you call the function.
WrongAnimal* k = new WrongAnimal();
WrongAnimal* l = new WrongCat();
std::cout << "what does a " << meta->getType() << " say " << std::endl;
std::cout << "what does a " << i->getType() << " say " << std::endl;
std::cout << "what does a " << j->getType() << " say " << std::endl;
std::cout << "what does a " << k->getType() << " say " << std::endl;
std::cout << "what does a " << l->getType() << " say " << std::endl;
meta->makeSound();
i->makeSound();
j->makeSound();
k->makeSound();
l->makeSound();
delete meta;
delete i;//virtual destructor destructs derived then base
delete j;
delete k;
delete l;
return 0;
}