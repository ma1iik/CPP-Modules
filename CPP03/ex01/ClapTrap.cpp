/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:50:02 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/20 14:53:11 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//  CONSTRUCTOR / DESTRUCTOR //

ClapTrap::ClapTrap(void) : _name(""), _health(10), _energy(10), _attack_damage(0) {
	//std::cout << "Default constructor called " << std::endl;
}

ClapTrap::~ClapTrap(void) {
    //std::cout << "Destructor called " << std::endl;
}
ClapTrap::ClapTrap(std::string target_name) : _name(target_name),  _health(10), _energy(10), _attack_damage(1) {
	//std::cout << "Constructor called " << std::endl;
    //std::cout << "Player " << this->_name << " spawned" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy){
	//std::cout << "Constructor copy called " << std::endl;
    *this = cpy;
}

//  FUNCTIONS // 

void    ClapTrap::attack(std::string const &target)
{
	std::cout << "     ATTACK" << std::endl;
	if (this->_energy == 0)
	{
		std::cout << this->_name << "has no Energy left, attack failed" << std::endl;
		return;
	}
	this->_energy--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	std::cout << this->_name << " has " << this->_energy << " energy left." << std::endl;
	return;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	this->_health = this->_health - amount;
	std::cout << "     DAMAGE TAKEN" << std::endl;
	std::cout << this->_name << " lost " << amount << " of hit points" << std::endl;
	std::cout << this->_name << " has " << this->_health << " hit points left" << std::endl;
	return;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "     REPAIRING" << std::endl;
	if (this->_energy == 0)
	{
		std::cout << this->_name << "has no energy left, healing failed" << std::endl;
		return;
	}
	this->_health = this->_health + amount;
	this->_energy--;
	std::cout << this->_name << " is recovering" << std::endl;
	std::cout << this->_name << " now has " << this->_health << " it points" << std::endl;
	std::cout << this->_name << " has " << this->_energy << " energy left." << std::endl;
	return;
}

ClapTrap        &ClapTrap::operator=(ClapTrap const& clap){
	if (this != &clap)
	{
		this->_name				= clap._name;
		this->_health			= clap._health;
		this->_energy			= clap._energy;
		this->_attack_damage	= clap._attack_damage;
	}
	return (*this);
}