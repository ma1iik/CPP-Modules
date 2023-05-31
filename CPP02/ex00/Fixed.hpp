/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:51:34 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/15 19:18:56 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>

class Fixed {
private:
    int fixed;
    static const int bits = 8;

public:
    Fixed();
    Fixed(const Fixed &other);
    ~Fixed();
	
    Fixed &operator=(const Fixed &other);
    
	int getRawBits() const;
    void setRawBits(const int raw);
};

#endif