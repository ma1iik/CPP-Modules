/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:49:36 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/20 14:55:06 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap robot1("Evaluator");
    ScavTrap robot2("Malik");
    robot1.attack("Malik");
    robot2.takeDamage(20);
    robot2.beRepaired(10);
    robot2.guardGate();
    
    return (0);
}