/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 02:00:37 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/08 21:40:55 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Brain.hpp"
#include "WrongAnimal.hpp"


class Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const std::string& target_name);
		Animal(Animal const &cpy);
		Animal &operator=(Animal const &rhs);

		virtual void        makeSound() const = 0;
        std::string const   getType() const;
};

class Cat : public Animal
{
	public:
		Cat(void);
		~Cat(void);
		Cat(const std::string& target_name);
		Cat(Cat const &cpy);
		Cat &operator=(Cat const &rhs);
	
		void makeSound() const;
		
		private:
        	Brain *brain;
};

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(const std::string& target_name);
		Dog(Dog const &cpy);
		Dog &operator=(Dog const &rhs);

		void makeSound() const;
		
		private:
        	Brain *brain;
};
