/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 18:17:07 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/08 22:03:14 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Brain::Brain(void) : _ideas(new std::string[100])
{
	std::cout << "		Default Brain constructor called" << std::endl;
	return;
}

Brain::~Brain(void)
{
	delete [] this->_ideas;
	std::cout << "		Brain destructor called" << std::endl;
	return;
}

Brain::Brain(const std::string& target_name) : _ideas(new std::string[100])
{
	(void)target_name;
	std::cout << "		Brain constructor called" << std::endl;
	return;
}

Brain::Brain(const Brain& cpy) : _ideas(new std::string[100])
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        _ideas[i] = cpy._ideas[i];
    }
}

Brain& Brain::operator=(const Brain& rhs)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &rhs) {
        delete[] _ideas;
        _ideas = new std::string[100];
        for (int i = 0; i < 100; i++) {
            _ideas[i] = rhs._ideas[i];
        }
    }
    return *this;
}

std::string     *Brain::get_ideas(void) const
{
	return (this->_ideas);
}