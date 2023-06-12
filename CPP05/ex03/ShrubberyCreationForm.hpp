/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 05:10:06 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/12 17:11:48 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <typeinfo>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& target);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rfr);
        virtual void	perform_execute(Bureaucrat const & executor) const;

    private:
        std::string     _target;        
};