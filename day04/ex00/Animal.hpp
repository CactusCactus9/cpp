/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 09:16:08 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/28 12:25:19 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(const Animal& obj);
    Animal& operator=(const Animal& obj);
    const std::string getType()const;
    void    makeSound();
    ~Animal();
};
#endif