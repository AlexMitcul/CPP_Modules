/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:42:06 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/01 11:17:40 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string firstName, std::string lastName, std::string nickname,
		std::string phoneNumber, std::string darkestSecret) {
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickname = nickname;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

Contact::~Contact() {}

std::string customResizeString(std::string oldString) {
	oldString.resize(9);
	oldString.append(1, '.');
	return oldString;
}

std::string Contact::getFirstName(void) const {
	if (this->_firstName.size() >= 10)
		return customResizeString(this->_firstName);
	return this->_firstName;
}

std::string Contact::getLastName(void) const {
	if (this->_lastName.size() >= 10)
		return customResizeString(this->_lastName);
	return this->_lastName;
}

std::string Contact::getDarkestSecret(void) const {
	if (this->_darkestSecret.size() >= 10)
		return customResizeString(this->_darkestSecret);
	return this->_darkestSecret;
}

void Contact::displayFullInfo(void) const {
	std::cout << std::setw(15) << "First name: " << this->_firstName << std::endl;
	std::cout << std::setw(15) << "Last name: " << this->_lastName << std::endl;
	std::cout << std::setw(15) << "Nickname: " << this->_nickname << std::endl;
	std::cout << std::setw(15) << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << std::setw(15) << "Darkest secret: " << this->_darkestSecret << std::endl;
}

