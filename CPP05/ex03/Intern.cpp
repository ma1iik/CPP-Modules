/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 09:27:26 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/11 04:52:39 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy){
	*this = copy;
}


Intern::~Intern(){}

Intern&	Intern::operator=(Intern const &rhs){
	(void)rhs;
	return *this;
}

AForm*	Intern::makeForm(std::string s1, std::string s2){

	std::string form[3] = {"robotomy request","presidential pardon","shrubbery creation"};
	int i;
	for (i = 0; i < 3; i++){
		if (!s1.compare(form[i]))
			break;
	}
	switch (i)
	{
	case 0:
		std::cout<<"Intern creates "<<s2<<std::endl;
		return new RobotomyRequestForm(s2);
	case 1:
		std::cout<<"Intern creates "<<s2<<std::endl;
		return new PresidentialPardonForm(s2);
	case 2:
		std::cout<<"Intern creates "<<s2<<std::endl;
		return new ShrubberyCreationForm(s2);
	default:
		throw(FormNotFound());
	}	
}

const char* Intern::FormNotFound::what() const throw()
{
	return ("There is no form matching this name\n");
}