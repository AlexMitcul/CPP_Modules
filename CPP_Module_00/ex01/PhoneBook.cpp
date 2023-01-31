/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:33:56 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 19:29:53 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(const Contact& contact) {
	size_t index;
	std::vector<Contact>::iterator it;

	index = this->_contacts.size();
	it = this->_contacts.begin() + index % 8;
	this->_contacts.insert(it, contact);
}

int PhoneBook::size(void) {
	return this->_contacts.size();
}

const Contact& PhoneBook::getContact(size_t index) const {
	return this->_contacts[index];
}

void PhoneBook::search(void) const {
	for (size_t i = 0; i < this->_contacts.size(); ++i) {
		std::cout << std::setw(10) << i << "|";
		Contact contact = this->_contacts[i];
		std::cout << std::setw(10) << contact.getFirstName() << "|";
		std::cout << std::setw(10) << contact.getLastName() << "|";
		std::cout << std::setw(10) << contact.getDarkestSecret() << std::endl;
	}
}
