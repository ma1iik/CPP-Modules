/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 05:12:35 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/12 17:11:35 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <typeinfo>
#include <fstream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string& target);
        PresidentialPardonForm(const PresidentialPardonForm& target);
        ~PresidentialPardonForm();

        PresidentialPardonForm	&operator=(const PresidentialPardonForm &rfr);
        virtual void	perform_execute(Bureaucrat const & executor) const;

    private:
        std::string     _target;        
};