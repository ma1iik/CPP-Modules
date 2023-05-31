/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ma1iik <ma1iik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 14:51:31 by ma1iik            #+#    #+#             */
/*   Updated: 2023/04/18 18:40:09 by ma1iik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed(0) {
}

Fixed::Fixed(int const n)
{
	fixed = n << bits;
}

Fixed::Fixed(float const n)
{
	fixed = int(roundf(n * (1 << bits)));
}

Fixed::Fixed(const Fixed &other) {
	*this = other;
}

Fixed::~Fixed() {
}

float Fixed::toFloat( void ) const{
    return ((float)fixed / (1 << bits));
}

int Fixed::toInt(void) const{
    return fixed >> bits; 
}

Fixed& Fixed::operator=(const Fixed &other) {
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

bool Fixed::operator>(const Fixed &other) const{
	return this->toFloat() > other.toFloat();
}

bool Fixed::operator<(const Fixed &other) const{
	return this->toFloat() < other.toFloat();
}

bool Fixed::operator>=(const Fixed &other) const{
	return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=(const Fixed &other) const{
	return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(const Fixed &other) const{
	return this->toFloat() == other.toFloat();
}

bool Fixed::operator!=(const Fixed &other) const{
	return this->toFloat() != other.toFloat();
}

Fixed Fixed::operator+(const Fixed &other) const {
    Fixed result;
    result.fixed = this->fixed + other.fixed;
    return result;
}


Fixed Fixed::operator-(const Fixed &other) const{
    Fixed result;
    result.fixed = this->fixed - other.fixed;
    return result;
}

Fixed Fixed::operator*(const Fixed &other) const {
    Fixed result;
    result.fixed = (int)(((long long)(this->fixed) * (long long)(other.fixed)) >> bits);
    return result;
}

Fixed Fixed::operator/(const Fixed &other) const {
    if (other.fixed == 0) {
        std::cout << "Division by zero" << std::endl;
		return 0;
    }
    Fixed result;
    result.fixed = (int)(((long long)(this->fixed) << bits) / other.fixed);
    return result;
}

Fixed &Fixed::operator++() {
    fixed ++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp(*this);
    fixed ++;
    return temp;
}

Fixed &Fixed::operator--() {
    fixed --;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp(*this);           
    fixed --;
    return temp; 
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}