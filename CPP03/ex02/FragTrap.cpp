/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:58:19 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/20 15:57:26 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

//  CONSTRUCTOR / DESTRUCTOR //

FragTrap::FragTrap(void) {
	_name = "";
	_health = 100;
	_energy = 100;
	_attack_damage = 30;
	std::cout << "Default constructor called " << std::endl;
}

FragTrap::~FragTrap(void) {
    std::cout << "Destructor called " << std::endl;
}

FragTrap::FragTrap(std::string target_name) {
	_name = target_name;
	_health = 100;
	_energy = 100;
	_attack_damage = 30;
	std::cout << "Constructor called " << std::endl;
    std::cout << "Player " << this->_name << " spawned" << std::endl;
}

FragTrap::FragTrap(FragTrap const &cpy) : ClapTrap(cpy) {
	std::cout << "Constructor copy called " << std::endl;
    *this = cpy;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap" << this->_name << " ✋🏻 is high fiving you 🤚🏻 " << std::endl;
	return;
}
