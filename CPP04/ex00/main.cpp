/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 02:00:12 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/08 17:15:47 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"

int	main()
{
	const Animal* meta = new Animal();
    const Animal* i = new Cat();
    const Animal* j = new Dog();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

	delete meta;
	delete i;
	delete j;

	const WrongAnimal* metaa = new WrongCat();
    metaa->makeSound();
    delete metaa;
	
	return 0;
}