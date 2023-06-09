/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 05:12:27 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/12 17:11:22 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5){
	this->_target = "Undefined";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm("PresidentialPardonForm", 25, 5) {
	this->_target = target;
	
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cpy) : AForm("PresidentialPardonForm", 25, 5) {
	*this = cpy;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &rfr) {
	if (this != &rfr)
	{
		AForm::operator=(rfr);
        this->_target = rfr._target;

	}
	return *this;
}
	
void	PresidentialPardonForm::perform_execute(Bureaucrat const & executor) const {
	(void)executor;
	std::cout <<_target <<" has been forgiven by Zaphod Beeblerox\n";
}