/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:27:50 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/03 11:36:09 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void) {
	PhoneBook phoneBook;
	// std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
	std::string command = "";

	do {
		std::cout << "Enter command:\n\tADD: add new user.\n\t" \
			<< "SEARCH: search user in phonebook.\n\tEXIT: exit from program.\n";
		std::cin >> command;
		if (command == "ADD") {
			phoneBook.add();
		} else if (command == "SEARCH") {
			int index;
			phoneBook.search();
			do {
				std::cout << "Select index of user: ";
				std::cin >> index;
			} while (index < 0 || index >= phoneBook.size());
			phoneBook.getContact(index).displayFullInfo();
		}
	} while (command != "EXIT");
	return (0);
}
