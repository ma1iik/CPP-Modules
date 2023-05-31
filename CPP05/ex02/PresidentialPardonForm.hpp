/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 05:12:35 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/07 04:34:14 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <typeinfo>
#include <fstream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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