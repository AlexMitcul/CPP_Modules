/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:27:50 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 22:16:48 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void) {
	PhoneBook phoneBook;
	std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	std::string command;

	do {
		if (command == "ADD") {
			std::cout << "Enter first name: ";
			std::cin >> firstName;
			std::cout << "Enter second name: ";
			std::cin >> lastName;
			std::cout << "Enter nickname: ";
			std::cin >> nickname;
			std::cout << "Enter phone number: ";
			std::cin >> phoneNumber;
			std::cout << "Enter darkest secret: ";
			std::cin >> darkestSecret;
			Contact contact = Contact(firstName, lastName, nickname,
					phoneNumber, darkestSecret);
			phoneBook.add(contact);
		} else if (command == "SEARCH") {
			int index;
			phoneBook.search();
			do {
				std::cout << "Select index of user: ";
				std::cin >> index;
			} while (index < 0 || index >= phoneBook.size());
			phoneBook.getContact(index).displayFullInfo();
		}
		std::cout << "Enter command:\n\tADD: add new user.\n\t" \
			<< "SEARCH: search user in phonebook.\n\tEXIT: exit from program.\n";
		std::cin >> command;
	} while (command != "EXIT");
	return (0);
}
