/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 08:13:52 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/20 14:19:33 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
		ScavTrap(void);
		~ScavTrap(void);
		ScavTrap(std::string target_name);
		ScavTrap(ScavTrap const &cpy);

		void            attack(const std::string &target);
		void 			guardGate();
};

#endif