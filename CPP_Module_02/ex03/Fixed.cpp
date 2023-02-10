/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:47:29 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/10 00:03:34 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//* MAKR: Constructors

Fixed::Fixed(): _fixedValue(0) {}

Fixed::Fixed(const int value): _fixedValue(value << _fractionalBits) {}

Fixed::Fixed(const float value):
	_fixedValue(std::roundf(value * (1 << _fractionalBits))) {}

Fixed::Fixed(const Fixed& old) {
	*this = old;
}

//* MARK: Destructor

Fixed::~Fixed() {}

//* MARK: Opeators

Fixed& Fixed::operator=(const Fixed& old) {
	if (this != &old)
		this->_fixedValue = old.getRawBits();
	return *this;
}

/*
 * Comparison operators
*/
bool Fixed::operator<(const Fixed& rhs) const {
	return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>(const Fixed& rhs) const {
	return rhs < *this;
}

bool Fixed::operator<=(const Fixed& rhs) const {
	return !(*this > rhs);
}

bool Fixed::operator>=(const Fixed& rhs) const {
	return !(*this < rhs);
}

bool Fixed::operator==(const Fixed& rhs) const {
	return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!=(const Fixed& rhs) const {
	return !(*this == rhs);
}

/*
 * Binary arithmetic operators
*/

Fixed Fixed::operator+(const Fixed& rhs) const {
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const {
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const {
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const {
	return Fixed(this->toFloat() / rhs.toFloat());
}

/*
 * Increment and decrement
*/

Fixed& Fixed::operator++(void) {
	++(this->_fixedValue);
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed old = *this;
	this->operator++();
	return old;
}

Fixed& Fixed::operator--(void) {
	--(this->_fixedValue);
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed old = *this;
	this->operator--();
	return old;
}

/*
 * Stream insertion
*/

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}

//* MARK: Public functions

int Fixed::getRawBits(void) const {
	return this->_fixedValue;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedValue = raw;
}

float Fixed::toFloat(void) const {
	return static_cast<float>(this->getRawBits()) / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
	return this->_fixedValue >> _fractionalBits;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return a < b ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return a > b ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return a > b ? a : b;
}

//* MARK: Private functions
