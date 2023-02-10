/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:57:59 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/10 00:22:56 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

//* MAKR: Constructors

Point::Point(): _x(0), _y(0) {}

Point::Point(const float x, const float y): _x(x), _y(y) {}

Point::Point(const Point& old) {
	*this = old;
}

//* MARK: Destructor

Point::~Point() {}

//* MARK: Opeators

Point& Point::operator=(const Point& old) {
	if (this != &old) {
		(Fixed) this->_x = old.getX();
		(Fixed) this->_y = old.getY();
	}
	return *this;
}

//* MARK: Public functions

Fixed Point::getX(void) const {
	return this->_x;
}

Fixed Point::getY(void) const {
	return this->_y;
}

//* MARK: Private functions
