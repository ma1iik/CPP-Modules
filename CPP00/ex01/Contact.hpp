/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 02:38:45 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/06 15:56:54 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
	private:
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_phonenumber;
		std::string		_darkestsecret;
	public:
		Contact(void);
		~Contact(void);
		
		void	setfirstname(std::string firstname);
		void	setlastname(std::string lastname);
		void	setnickname(std::string nickname);
		void	setphonenumber(std::string number);
		void	setdarkestsecret(std::string darksecret);

		std::string	getfirstname(void) const;
		std::string	getlastname(void) const;
		std::string	getnickname(void) const;
		std::string	getphonenumber(void) const;
		std::string	getdarkestsecret(void) const;
};

#endif
