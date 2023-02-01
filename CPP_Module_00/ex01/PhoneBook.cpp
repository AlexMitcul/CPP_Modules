/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:33:56 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/01 11:17:44 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(Contact contact) {

}

int PhoneBook::size(void) const {
	return this->_size;
}

const Contact& PhoneBook::getContact(size_t index) const {
	return this->_contacts[index];
}

void PhoneBook::search(void) const {
	for (size_t i = 0; i < this->_size; ++i) {
		std::cout << std::setw(10) << i << "|";
		Contact contact = this->_contacts[i];
		std::cout << std::setw(10) << contact.getFirstName() << "|";
		std::cout << std::setw(10) << contact.getLastName() << "|";
		std::cout << std::setw(10) << contact.getDarkestSecret() << std::endl;
	}
}
