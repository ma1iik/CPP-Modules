/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:47:12 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/06 15:55:08 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void	Contact::setfirstname(std::string firstname){
	Contact::_firstname = firstname;
}

void	Contact::setlastname(std::string lastname){
	Contact::_lastname = lastname;
}

void	Contact::setnickname(std::string nickname){
	Contact::_nickname = nickname;
}

void	Contact::setphonenumber(std::string number){
	Contact::_phonenumber = number;
}

void	Contact::setdarkestsecret(std::string darksecret){
	Contact::_darkestsecret = darksecret;
}

std::string	Contact::getfirstname(void) const{
	return this->_firstname;
}

std::string	Contact::getlastname(void) const{
	return this->_lastname;
}

std::string	Contact::getnickname(void) const{
	return this->_nickname;
}

std::string	Contact::getphonenumber(void) const{
	return this->_phonenumber;
}

std::string	Contact::getdarkestsecret(void) const{
	return this->_darkestsecret;
}