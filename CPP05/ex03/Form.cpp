/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 02:30:58 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/07 05:26:17 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("Undefined"), _signed(false), _sign_grade(150), _exec_grade(150) {}

AForm::AForm(std::string const name, const int grade1, const int grade2) : _name(name), _signed(false), _sign_grade(grade1), _exec_grade(grade2)
{
	if (grade1 > 150 || grade2 > 150)
	{
		std::cout << "Wrong Grade!" << std::endl;
		throw AForm::GradeTooLowException();
	}
	if (grade1 < 1 || grade2 < 1)
	{
		std::cout << "Wrong Grade!" << std::endl;
		throw AForm::GradeTooHighException();
	}
}

AForm::~AForm() {}

AForm::AForm(const AForm &cpy) : _name(cpy.get_name()), _signed(cpy.get_signed()), _sign_grade(cpy.get_signgrade()), _exec_grade(cpy.get_execgrade()) {}

AForm &AForm::operator=(const AForm &rfr) {
    if (this == &rfr)
	{
        return *this;
	}
	this->_signed = rfr._signed;
    return *this;
}


std::string		AForm::get_name() const
{
	return this->_name;
}

bool				AForm::get_signed() const
{
	return this->_signed;
}

int				AForm::get_signgrade() const
{
	return this->_sign_grade;
}

int				AForm::get_execgrade() const
{
	return this->_exec_grade;
}

void			AForm::beSigned(const Bureaucrat &rfr)
{
	if (rfr.getGrade() <= this->_sign_grade)
	{
		std::cout << rfr.getName() << " signed " << this->_name << std::endl;
		this->_signed = true;
	}
	else
	{
		std::cout << rfr.getName() << " couldnt sign " << this->_name << std::endl;
		throw AForm::GradeTooLowException();
	}
}

std::ostream	&operator<<(std::ostream &str, const AForm &rfr)
{
	str << "AForm named " << rfr.get_name();
	if (rfr.get_signed() == true)
		str << " is signed" << std::endl;
	else
		str << " is not signed" << std::endl;
	return (str);
}

const char *AForm::GradeTooHighException::what() const throw () 
{
	return ("The grade is too high");
}
const char *AForm::GradeTooLowException::what() const throw () 
{
	return ("The grade is too low");
}

const char *AForm::FormNotSigned::what() const throw () 
{
	return ("Form not signed");
}

void			AForm::execute(Bureaucrat const & executor) {
    if (this->_exec_grade < executor.getGrade()) {
		std::cout << executor.getName() << " failed executing " << this->_name << std::endl;
        throw (GradeTooLowException());
    }
    if (!this->get_signed()) {
        std::cout << executor.getName() << " failed executing " << this->_name << std::endl;
		throw (FormNotSigned());
    }
    this->perform_execute(executor);
}
