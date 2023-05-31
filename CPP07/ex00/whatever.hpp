/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 08:02:14 by ma1iik            #+#    #+#             */
/*   Updated: 2023/05/25 08:48:20 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <iostream>
#include <ostream>

template <typename T>
void	swap(T &a, T &b) {
	T	c = a;
	a = b;
	b = c;
}

template <typename T>
const T		&min(const T &a, const T &b) {
	return ((a > b) ? b : a);
}

template <typename T>
const T		&max(const T &a, const T &b) {
	return ((a > b)? a : b);
}