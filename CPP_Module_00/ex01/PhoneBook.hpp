/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:29:58 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 19:31:54 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <vector>
#include <iterator>
#include <iomanip>
#include <iostream>

class PhoneBook {
private:
	std::vector<Contact> _contacts;

public:
	int size(void);
	void add(const Contact& contact);
	void search(void) const;
	const Contact& getContact(size_t index) const;
};

#endif
