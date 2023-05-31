/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:13:02 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/08 20:00:19 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &Wep) : _name(name), _weapon(Wep){
}

HumanA::~HumanA(){}

void	HumanA::attack() const{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}