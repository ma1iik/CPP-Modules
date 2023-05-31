/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 14:20:00 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/06 18:22:29 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{
    PhoneBook	phonebook;
    std::string str;
    int i = 1;
    
	std::cout << std::endl;
	std::cout << "~ PHONEBOOK ~" << std::endl << std::endl;
	std::cout << "Enter a command" << std::endl << std::endl;
    while (1)
    {
		std::cout << "\033[32m" << "~ ADD ~ SEARCH ~ EXIT ~" << "\033[0m" << std::endl << std::endl;
        getline(std::cin, str);
        if (feof(stdin))
        {
            std::cout << "Enter a command" << std::endl << std::endl;
            return (0);
        }
        if (!str[0])
            std::cout << "Enter a command" << std::endl << std::endl;
        else if (str.compare("ADD") == 0)
		{
			if (i == 9)
			{
				std::cout << std::endl << "Phonebook is full, you will delete the oldest contact if you continue, are you sure ?" << std::endl;
                while (str.compare("yes") != 0 && str.compare("no") != 0)
                {
                    getline(std::cin, str);
                    if (str.compare("yes") == 0)
                    {
                        i = 1;
                        phonebook.add_contact(i);
                        i++;
                        std::cout << "New contact added" << std::endl << std::endl;
						i = 9;
                    }
                    else if (str.compare("no") == 0)
                        std::cout << std::endl << "Nothing changed" << std::endl << std::endl;
                    else
                        std::cout << std::endl << "Please write yes or no." << std::endl;
                }
				std::cout << std::endl;
			}
            else
            {
                phonebook.add_contact(i);
                std::cout << "New contact added" << std::endl << std::endl;
                i++;
            }
		}
        /////////////////////////////////////////////////////////////////////////////////
        else if (str.compare("SEARCH") == 0)
            phonebook.search_contact(i);
        /////////////////////////////////////////////////////////////////////////////////
        else if (str.compare("EXIT") == 0)
            break ;
        else
			std::cout << std::endl << "Wrong argument try again..." << std::endl << std::endl;
    }
}