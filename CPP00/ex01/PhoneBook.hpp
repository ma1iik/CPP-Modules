/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:55:56 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/06 15:58:17 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
	private:
		static const int MAX_CONTACTS = 9;
    	Contact contacts[MAX_CONTACTS];
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void	add_contact(int index);
    	void	search_contact(int index);
    	void	return_contact(int index);
		
};

#endif