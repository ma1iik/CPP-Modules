/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:04:42 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/12 22:23:19 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat Malik("Malik", 30);
	Bureaucrat Evaluator("Evaluator", 150);
	try{
		Intern someRandomIntern;
		AForm* rrf = someRandomIntern.makeForm("presidential pardon", "tender");
		std::cout << *rrf;
		Malik.signForm(*rrf);
		Malik.executeForm(*rrf);
		std::cout << *rrf;
		delete rrf;
	}
	catch (std::exception &e){
		std::cerr<<"exception caught : "<<e.what()<<std::endl;
	}
}