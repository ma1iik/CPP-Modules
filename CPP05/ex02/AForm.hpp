/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 02:31:47 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/07 05:23:28 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <typeinfo>
#include <fstream>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_sign_grade;
		const int			_exec_grade;
		
	public:
		AForm(void);
		AForm(std::string const name, const int grade1, const int grade2);
		virtual ~AForm();
		AForm(const AForm &cpy);

		AForm	&operator=(const AForm &rfr);

		std::string		get_name() const;
		bool			get_signed() const;
		int				get_signgrade() const;
		int				get_execgrade() const;

		void			beSigned(const Bureaucrat &rfr);
		void			execute(Bureaucrat const & executor);
		virtual void	perform_execute(Bureaucrat const & executor) const = 0;
		
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

		class FormNotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};


std::ostream	&operator<<(std::ostream &str, const AForm &rfr);