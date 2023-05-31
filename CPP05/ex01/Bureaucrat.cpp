/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:05:03 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/04 06:21:41 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : _name("Undefined")
{
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string &nm, int gd) : _name(nm), _grade(gd)
{
	if (_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		this->_grade = _grade;
	}
}

Bureaucrat::~Bureaucrat(void) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
	this->_grade = other._grade;
	return *this;
}

const std::string& Bureaucrat::getName() const {
	return this->_name;
}

int Bureaucrat::getGrade() const {
	return this->_grade;
}

void Bureaucrat::incrementGrade() {
	if (this->_grade == 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else {
		this->_grade -= 1;
	}
}

void Bureaucrat::decrementGrade() {
	if (this->_grade == 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	else {
		this->_grade += 1;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low";
}

std::ostream &operator <<(std::ostream &stream, const Bureaucrat &stream_output)
{
	stream << stream_output.getName() << ", bureaucrat grade " << stream_output.getGrade();
	return (stream);
}

void Bureaucrat::signForm(Form &form) {
    try
	{
        form.beSigned(*this);
        std::cout << _name << " signed " << form.get_name() << std::endl;
    }
	catch (const Form::GradeTooLowException& e)
	{
        std::cout << _name << " couldn't sign " << form.get_name() << " because " << e.what() << std::endl;
    }
	catch (const Form::GradeTooHighException& e)
	{
        std::cout << _name << " couldn't sign " << form.get_name() << " because " << e.what() << std::endl;
    }
	catch (const std::exception& e)
	{
        std::cout << _name << " couldn't sign " << form.get_name() << " because an unknown error occurred: " << e.what() << std::endl;
    }
}

