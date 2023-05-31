/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:13:49 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/20 14:54:12 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) {
	_name = "";
	_health = 100;
	_energy = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap default constructor called " << std::endl;
}

ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called " << std::endl;
}

ScavTrap::ScavTrap(std::string target_name) {
	_name = target_name;
	_health = 100;
	_energy = 50;
	_attack_damage = 20;
	std::cout << "ScavTrap constructor called " << std::endl;
    std::cout << "Player " << target_name << " spawned" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &cpy) : ClapTrap(cpy) {
	std::cout << "ScavTrap constructor copy called " << std::endl;
    *this = cpy;
}

void	ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(std::string const &target)
{
	std::cout << "     ATTACK" << std::endl;
	if (this->_energy == 0)
	{
		std::cout << this->_name << "has no Energy left, attack failed" << std::endl;
		return;
	}
	this->_energy--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	std::cout << this->_name << " has " << this->_energy << " energy left." << std::endl;
	return;
}

