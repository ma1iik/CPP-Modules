/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 07:40:37 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/30 07:43:41 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

//BASE CLASS: Wrong ANIMAL

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Default  Wrong Animal constructor called" << std::endl;
	this->type = "Unspecified";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong Animal destructor called" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(const std::string& target_name)
{
	(void)target_name;
	std::cout << "Wrong Animal constructor  called" << std::endl;
	this->type = "Unspecified";
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy)
{
	std::cout << "Wrong Animal copy constructor called " << std::endl;
    *this = cpy;
}

std::string const   WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound???" << std::endl;
}

//SUBCLASS: CAT

WrongCat::WrongCat(void)
{
	std::cout << "Default Wrong Cat constructor called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "Wrong Cat destructor called" << std::endl;
	return;
}

WrongCat::WrongCat(const std::string& target_name)
{
	(void)target_name;
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

WrongCat::WrongCat(WrongCat const &cpy) : WrongAnimal(cpy)
{
	std::cout << "Wrong Cat copy constructor called " << std::endl;
    *this = cpy;
}
