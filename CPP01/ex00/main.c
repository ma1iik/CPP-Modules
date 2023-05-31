/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:24:59 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/07 15:24:20 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	Zombie	bob("Bob");
	Zombie	*luke;
	luke = newZombie("luke");
	bob.announce();
	luke->announce();
	randomChump("Chuck");
	delete luke;
}