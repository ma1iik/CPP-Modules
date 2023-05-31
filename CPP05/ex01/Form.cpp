/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 02:30:58 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/04 08:41:48 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Undefined"), _signed(false), _sign_grade(150), _exec_grade(150) {}

Form::Form(std::string const name, const int grade1, const int grade2) : _name(name), _signed(false), _sign_grade(grade1), _exec_grade(grade2)
{
	if (grade1 > 150 || grade2 > 150)
	{
		std::cout << "Wrong Grade!" << std::endl;
		throw Form::GradeTooLowException();
	}
	if (grade1 < 1 || grade2 < 1)
	{
		std::cout << "Wrong Grade!" << std::endl;
		throw Form::GradeTooHighException();
	}
}

Form::~Form() {}

Form::Form(const Form &cpy) : _name(cpy.get_name()), _signed(cpy.get_signed()), _sign_grade(cpy.get_signgrade()), _exec_grade(cpy.get_execgrade()) {}

Form &Form::operator=(const Form &rfr) {
    if (this == &rfr)
	{
        return *this;
	}
	this->_signed = rfr._signed;
    return *this;
}


std::string		Form::get_name() const
{
	return this->_name;
}

bool				Form::get_signed() const
{
	return this->_signed;
}

int				Form::get_signgrade() const
{
	return this->_sign_grade;
}

int				Form::get_execgrade() const
{
	return this->_exec_grade;
}

void			Form::beSigned(const Bureaucrat &rfr)
{
	if (rfr.getGrade() <= this->_sign_grade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &str, const Form &rfr)
{
	str << "Form named " << rfr.get_name();
	if (rfr.get_signed() == true)
		str << " is signed" << std::endl;
	else
		str << " is not signed" << std::endl;
	return (str);
}

const char *Form::GradeTooHighException::what() const throw () 
{
	return ("The grade is too high");
}
const char *Form::GradeTooLowException::what() const throw () 
{
	return ("The grade is too low");
}