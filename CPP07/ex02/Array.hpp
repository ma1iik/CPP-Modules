/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 20:27:54 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/28 14:44:32 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iomanip>
#include <ostream>

template <typename T>
class Array {
	
	public:
		Array();
		Array(unsigned int const n);
		Array(const	Array &cpy);
		~Array();

		unsigned int size() const;
		
		Array& operator=(const Array &rhs);
		T& operator[](unsigned int index);

		class OutOfBounds : public std::exception {
			public:
				virtual const char* what() const throw ();
		};

	private:
		T*				_array;
		unsigned int	_size;
};

#include "Array.tpp"
