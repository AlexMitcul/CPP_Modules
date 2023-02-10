/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 23:58:02 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/10 00:06:48 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point();
	Point(const float a, const float b);
	Point(const Point& old);
	~Point();

	Point& operator=(const Point& other);

	Fixed getX(void) const;
	Fixed getY(void) const;
};

#endif
