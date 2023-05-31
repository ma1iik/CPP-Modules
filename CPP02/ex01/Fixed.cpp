/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:51:31 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/18 18:32:40 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n)
{
	std::cout<<"Int constructor called\n";
	fixed = n << bits;
}

Fixed::Fixed(float const n)
{
	std::cout<<"Float constructor called\n";
	fixed = int(roundf(n * (1 << bits)));
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;	
}

float Fixed::toFloat( void ) const{
    return ((float)fixed / (1 << bits));
}

int Fixed::toInt(void) const{
    return fixed >> bits; 
}

Fixed& Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixed = other.getRawBits();
	return *this;
}

std::ostream &	operator<<(std::ostream &o, Fixed const & ref)
{
	o << ref.toFloat();
	return o;
}

int Fixed::getRawBits() const {
	return fixed;
}

void Fixed::setRawBits(const int raw) {
	fixed = raw;
}