/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misrailo <misrailo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 05:11:21 by ma1iik            #+#    #+#             */
/*   Updated: 2023/06/10 09:49:54 by misrailo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)  : AForm("RobotomyRequestForm", 72, 45) {
	this->_target = "Undefined";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm("RobotomyRequestForm", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm("RobotomyRequestForm", 72, 45)
{
	*this = cpy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &rfr) {
	if (this != &rfr)
	{
		AForm::operator=(rfr);
        this->_target = rfr._target;
	}
	return *this;
}

void RobotomyRequestForm::perform_execute(Bureaucrat const &executor) const {
    const int i = 5;

    srand(time(0)); // wonder if times will be same up there
    for (int c = 0; c < i; c++) {
        int random_wait_time = rand() % 1000;
        //std::cout << random_wait_time << std::endl;
        usleep(random_wait_time * 3000); // Sleep for the random_wait_time in microseconds
        std::cout << "Drilling noises..." << std::endl;
    }
    if (rand() % 2) {
        std::cout << executor.getName() << " has robotomised " << this->_target << " succesfully!" << std::endl;
    } else {
        std::cout << executor.getName() << " failed robotomising " << this->_target << std::endl;
    }
}
