/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:49:36 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/19 08:01:48 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
    ClapTrap gamer1("Malik");
    ClapTrap gamer2("Evaluator");
    
    gamer1.attack("Evaluator");
    gamer2.takeDamage(1);
    gamer2.beRepaired(1);
    //gamer2.beRepaired(1);
    //gamer1.attack("Soukaina");
    return (0);
}