/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelkace <abelkace@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:08:51 by abelkace          #+#    #+#             */
/*   Updated: 2023/11/26 21:00:21 by abelkace         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default Constructor called" << std::endl;
	this->_Name = "def";
	std::cout << this->_Name << std::endl;
	this->_Hit = 10;
	std::cout << this->_Hit << std::endl;
	this->_Energy = 10;
	std::cout << this->_Energy << std::endl;
	this->_Attack = 0;
	std::cout << this->_Attack << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _Name(name){
	std::cout << "parameterized constructor" << std::endl;
	this->_Hit = 10;
	this->_Energy = 10;
	this->_Attack = 0;
}

ClapTrap::ClapTrap(ClapTrap const &  obj){
	std::cout << "Copy Constructor Called" << std::endl;
	*this = obj;
}
void	ClapTrap::setName(const std::string& name){ //shallow copy
	_Name = name;
}
void	ClapTrap::setHitPoints(unsigned int hit){
	_Hit = hit;
}
void	ClapTrap::setEnergyPoints(unsigned int energy){
	_Energy = energy;
}
void	ClapTrap::setAttackDamage(unsigned int attack){
	_Attack = attack;
}
std::string	ClapTrap::getName(){
	return(this->_Name);
}

unsigned int	ClapTrap::getHitPoint(){
	return(this->_Hit);
}

unsigned int	ClapTrap::getEnergyPoint(){
	return(this->_Energy);
}

unsigned int	ClapTrap::getAttackDamage()const{
	return(this->_Attack);
}


ClapTrap&	ClapTrap::operator=(ClapTrap const &  obj){
	std::cout << "Copy Assignement Called" << std::endl;
	if (this != &obj)
	{
		this->_Name = obj._Name;
		this->_Hit = obj._Hit;
		this->_Energy = obj._Energy;
		this->_Attack = obj._Attack;
	}
	return (*this);
}

void		ClapTrap::attack(const std::string& target){
	if (!this->_Energy || !this->_Hit)
		return ;
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack << " points of damage and lost 1 energy point" << std::endl;
	this->_Energy--;
}

void		ClapTrap::takeDamage(unsigned int amount){
	if (!this->_Energy || !this->_Hit)
		return ;
	if (this->_Hit < amount)
		this->_Hit = 0;
	else
		this->_Hit-= amount;
	std::cout <<  _Name << " lost " << amount << " hit points"<< std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount){
		if (!this->_Energy || !this->_Hit)
		return ;
		this->_Hit += amount;
		this->_Energy--;
		std::cout <<  _Name << " got back " << amount << " hit points" << " and lost 1 energy point" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "Deconstructor called" << std::endl;
};
