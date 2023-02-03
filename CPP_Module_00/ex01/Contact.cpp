/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:42:06 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/03 11:38:07 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
}

Contact::~Contact() {}

std::string Contact::_readFromInput(std::string prompt) {
	std::string result;

	std::cout << prompt;
	std::cin >> result;
	return result;
}

void Contact::fillData(void) {
	this->_firstName = this->_readFromInput("Enter first name: ");
	this->_lastName = this->_readFromInput("Enter last name: ");
	this->_nickname = this->_readFromInput("Enter nickname: ");
	this->_phoneNumber = this->_readFromInput("Enter phone number: ");
	this->_darkestSecret = this->_readFromInput("Enter darkest secret: ");
}

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

