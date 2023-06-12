/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 05:11:32 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/12 17:11:41 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
#include <typeinfo>
#include <fstream>
#include <unistd.h>
#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& target);
        ~RobotomyRequestForm();

        RobotomyRequestForm	&operator=(const RobotomyRequestForm &rfr);
        virtual void	perform_execute(Bureaucrat const & executor) const;

    private:
        std::string     _target;
};