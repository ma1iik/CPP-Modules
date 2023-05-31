/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:51:34 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/16 14:50:22 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define	FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
    int fixed;
    static const int bits = 8;

public:
    Fixed();
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed &other);
    ~Fixed();
    float toFloat( void ) const;
    int toInt(void) const;

	
    Fixed &operator=(const Fixed &other);
    
	int getRawBits() const;
    void setRawBits(const int raw);
};

std::ostream &	operator<<(std::ostream &o, Fixed const & ref);

#endif