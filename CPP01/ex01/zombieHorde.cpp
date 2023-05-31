/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 15:27:33 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/07 15:56:59 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie* zombieHorde( int N, std::string name ){
	int i = 0;
	if (N > 0)
	{
		Zombie	*horde = new Zombie[N];
		while (i < N){
			horde[i].namezmb(name, i);
			horde[i].announce();
			i++;
		}
		return (horde);
	}
	else
	{
		std::cout << "Wrong argument for zombieHorde!" << std::endl;
		return 0;
	}
}