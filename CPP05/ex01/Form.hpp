/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 02:31:47 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/04 08:33:37 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <typeinfo>


class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_sign_grade;
		const int			_exec_grade;
		
	public:
		Form(void);
		Form(std::string const name, const int grade1, const int grade2);
		~Form();
		Form(const Form &cpy);

		Form	&operator=(const Form &rfr);

		std::string		get_name() const;
		bool				get_signed() const;
		int				get_signgrade() const;
		int				get_execgrade() const;

		void			beSigned(const Bureaucrat &rfr);
		
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

std::ostream	&operator<<(std::ostream &str, const Form &rfr);