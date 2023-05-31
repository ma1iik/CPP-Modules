/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:58:31 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/20 15:57:47 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HHP
#define FRAGTRAP_HHP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(std::string target_name);
		FragTrap(FragTrap const &cpy);

		void highFivesGuys(void);
};


#endif