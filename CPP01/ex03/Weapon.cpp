/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:12:23 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/08 18:41:05 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const	std::string& Weapon::getType() const{
	return _type;
}
	
void	Weapon::setType(std::string WeapType){
	_type = WeapType;
}
		
Weapon::Weapon(std::string weapon) : _type(weapon){	
}
		
Weapon::~Weapon(){
}