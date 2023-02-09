/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:47:29 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/09 22:53:18 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//* MAKR: Constructors

Fixed::Fixed(): _fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value): _fixedValue(value << _fractionalBits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value):
	_fixedValue(std::roundf(value * (1 << _fractionalBits))) {
	std::cout << "Float constructor called" << std::endl;

	(void)value;
	return ;
}

Fixed::Fixed(const Fixed& old) {
	std::cout << "Copy constructor called" << std::endl;

	*this = old;
}

//* MARK: Destructor

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

//* MARK: Opeators

Fixed& Fixed::operator=(const Fixed& old) {
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &old)
		this->_fixedValue = old.getRawBits();
	return *this;
}

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

//* MARK: Private functions
