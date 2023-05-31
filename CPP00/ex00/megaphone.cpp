/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:50:07 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/04 21:12:51 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int 	j;
    int 	i;
	std::string	str;

    j = 1;
	if (ac <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (av[j])
	{
		i = 0;
		while (av[j][i])
		{
			str = toupper(av[j][i]);
			std::cout << str;
			i++;
		}
		j++;
	}
	std::cout << std::endl;
	return 0;
}