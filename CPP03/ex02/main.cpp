/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:49:36 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/20 15:55:08 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    // ClapTrap gamer1("Asma");
    // ClapTrap gamer2("Zac");
    // gamer1.attack("Zac");
    // gamer2.takeDamage(1);
    // gamer2.beRepaired(1);
    // gamer2.beRepaired(1);
    // gamer1.attack("Soukaina");
    ScavTrap robot1("Bryan");
    ScavTrap robot2("Malik");
    robot1.attack("Malik");
    robot2.takeDamage(1);
    robot2.beRepaired(1);
    robot2.guardGate();
    
    return (0);
}