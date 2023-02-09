/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:47:33 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/09 21:40:55 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int	_fixedValue;
	static const int _fractionalBits = 8;

public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();
	Fixed(const Fixed& old);

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	Fixed& operator=(const Fixed& old);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
