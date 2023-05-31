/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 09:27:47 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/11 04:17:10 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"
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