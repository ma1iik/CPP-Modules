/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 15:43:27 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/06 17:08:55 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::add_contact(int index){
	std::string		firstname;
	std::string		lastname;
	std::string		nickname;
	std::string		phonenumber;
	std::string		darkestsecret;

	std::cout << std::endl;
	while (!firstname[0])
	{
		std::cout << "Enter first name: ";
		getline(std::cin, firstname);
		contacts[index].setfirstname(firstname);
	}
	while (!lastname[0])
	{
		std::cout << "Enter last name: ";
		getline(std::cin, lastname);
		contacts[index].setlastname(lastname);
	}
	while (!nickname[0])
	{
		std::cout << "Enter nickname: ";
		getline(std::cin, nickname);
		contacts[index].setnickname(nickname);
	}
	while (!phonenumber[0])
	{
		std::cout << "Enter phonenumber: ";
		getline(std::cin, phonenumber);
		contacts[index].setphonenumber(phonenumber);
	}
	while (!darkestsecret[0])
	{
		std::cout << "Enter darkest secret: ";
		getline(std::cin, darkestsecret);
		contacts[index].setdarkestsecret(darkestsecret);
	}
	std::cout << std::endl;
}

void	PhoneBook::search_contact(int index){
	int		i = 1;
	int		w = 0;
	std::string		firstname;
	std::string		lastname;
	std::string		nickname;
	
	if (index ==  1)
	{
		std::cout << std::endl << "Phonebook is empty!" << std::endl << std::endl;
		return;	
	}
	while (i < index)
	{
		std::cout << "|       " << i << " |";
		firstname = contacts[i].getfirstname();
		if (firstname.size() > 10)
		{
			firstname.resize(9);
			firstname.push_back('.');
		}
		else if (firstname.size() < 10)
		{
			w = 0;
			while (firstname.size() + w++ != 10)
				std::cout << " ";
		}
		std::cout << firstname << "|";
		lastname = contacts[i].getlastname();
		if (lastname.size() > 10)
		{
			lastname.resize(9);
			lastname.push_back('.');
		}
		else if (lastname.size() < 10)
		{
			w = 0;
			while (lastname.size() + w++ != 10)
				std::cout << " ";
		}
		std::cout << lastname << "|";
		nickname = contacts[i].getnickname();
		if (nickname.size() > 10)
		{
			nickname.resize(9);
			nickname.push_back('.');
		}
		else if (nickname.size() < 10)
		{
			w = 0;
			while (nickname.size() + w++ != 10)
				std::cout << " ";
		}
		std::cout << nickname << "|" << std::endl;
		i++;
	}
	PhoneBook::return_contact(index);
}

void	PhoneBook::return_contact(int index){
		int	i = 0;
		int	a = 1;

		while (a != 0)
		{
			std::cout << "Enter a number : ";
			if(!(std::cin >> i))
			{
				std::cout << "[Must be an integer]" << std::endl;
				std::cin.clear();
        		std::cin.ignore(100, '\n');
			}
			else
			{
				if (i > 0 && i <= index)
					a = 0;
			}
		}
		std::cout << std::endl ;
		std::cout << contacts[i].getfirstname() << " | ";
		std::cout << contacts[i].getlastname() << " | ";
		std::cout << contacts[i].getnickname() << " | ";
		std::cout << contacts[i].getphonenumber() << " | ";
		std::cout << contacts[i].getdarkestsecret();
		std::cout << std::endl << std::endl;
		std::cin.clear();
        std::cin.ignore(100, '\n');
}