/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:50:23 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/20 14:42:20 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
    public:
		ClapTrap(void);
		~ClapTrap(void);
		ClapTrap(std::string target_name);
		ClapTrap(ClapTrap const &cpy);

		void            attack(const std::string &target);
		void            takeDamage(unsigned int amount);
		void            beRepaired(unsigned int amount);
		
		ClapTrap        &operator=(ClapTrap const& eq);
		
    protected:
		std::string     _name;
		int             _health;
		int             _energy;
		int             _attack_damage;
};

#endif