/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 17:47:33 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/09 21:07:12 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {
private:
	int	fixed;
	static const int fractional_bits = 8;

public:
	Fixed(void);
	~Fixed();
	Fixed(const Fixed& old);
	Fixed& operator=(const Fixed& old);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};
