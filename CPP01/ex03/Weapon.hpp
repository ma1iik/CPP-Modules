/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:12:09 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/08 19:59:17 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>

class Weapon {
	private:
		std::string		_type;
	public:
		const	std::string& getType() const;
		void	setType(std::string);
		Weapon(std::string weapon);
		~Weapon();
};