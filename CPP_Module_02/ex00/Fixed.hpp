/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:47:33 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/09 21:59:10 by amitcul          ###   ########.fr       */
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
	~Fixed();
	Fixed(const Fixed& old);
	Fixed& operator=(const Fixed& old);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
