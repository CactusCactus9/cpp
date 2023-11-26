/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 23:11:42 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/27 00:02:01 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
FragTrap::FragTrap(){
	std::cout << "default constructor" << std::endl;
	setName("default");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(const std::string &name){
	std::cout << "para constructor" << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::FragTrap(FragTrap const &obj){
	std::cout << "copy constructor" << std::endl;
	*this = obj;
}

FragTrap&	FragTrap::operator=(FragTrap const &other){
	setName()
}