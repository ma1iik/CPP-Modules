/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:51:16 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/07 15:54:20 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << this->_name << " has been 💀 eliminated 🔪" << std::endl;
}

void	Zombie::announce() const{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;	
}

void	Zombie::namezmb(std::string name, int num){
	std::stringstream ss;
    ss << name << num;
    _name = ss.str();
}