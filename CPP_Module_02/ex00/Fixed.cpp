/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:47:29 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/09 22:00:23 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//* MAKR: Constructors

Fixed::Fixed(): _fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
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
		_fixedValue = old.getRawBits();
	return *this;
}

//* MARK: Public functions

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedValue;
}

void Fixed::setRawBits(int const raw) {
	this->_fixedValue = raw;
}

//* MARK: Private functions
