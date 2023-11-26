/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 18:14:10 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/26 23:44:34 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(){
	setName("default");
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
};

ScavTrap::ScavTrap(const std::string &name) {
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

void	ScavTrap::attack(const std::string& target){
	if (!getEnergyPoint() || !getHitPoint())
		return ;
	std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage and lost 1 energy point" << std::endl;
	setEnergyPoints(getEnergyPoint() - 1);
}

ScavTrap::~ScavTrap(){
		std::cout << "derived class default deconstructor" << std::endl;
}

void 		ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}