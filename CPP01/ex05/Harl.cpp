/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 12:50:58 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/10 13:26:32 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Constructor Harl called" << std::endl;
}

Harl::~Harl()
{
    std::cout << "Harl is destroyed" << std::endl;
}
    
void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*f[])() = {&Harl::debug, &Harl::info,&Harl::warning, &Harl::error};
	std::string curlevel[] = {"DEBUG","INFO","WARNING","ERROR"};
	for(int i = 0; i < 4; i++) {
		if (level == curlevel[i]) {
			(this->*f[i])();
			return ;
		}
	}
	std::cout<<"Nothing to say."<<std::endl;
}