/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 09:27:47 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/12 18:13:07 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
	private:
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();

		Intern&	operator=(const Intern &rhs);

	class FormNotFound : public std::exception
	{
		public :
			virtual const char* what() const throw();
	};

	AForm*	makeForm(std::string s1, std::string s2);
};