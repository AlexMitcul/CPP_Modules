/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:29:58 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 22:19:16 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <iomanip>
#include <iostream>

class PhoneBook {
private:
	size_t	_size;
	Contact* _contacts;

public:
	int size(void) const;
	void add(Contact contact);
	void search(void) const;
	const Contact& getContact(size_t index) const;
};

#endif
