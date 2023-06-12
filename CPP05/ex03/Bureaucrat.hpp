/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:05:10 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/12 19:09:38 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
// #include "AForm.hpp"
#include <typeinfo>

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
		
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string &nm, int gr);
		~Bureaucrat(void);
		Bureaucrat(const Bureaucrat &cpy);
		
		Bureaucrat &operator=(const Bureaucrat  &rfr);

		const std::string&	getName() const;
		int					getGrade() const;
		void				incrementGrade();
		void				decrementGrade();

		void				signForm(AForm &myform);
		void				executeForm(AForm const & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &stream_output);
