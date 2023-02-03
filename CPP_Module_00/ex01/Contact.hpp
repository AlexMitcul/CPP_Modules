/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:31:13 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/03 11:38:15 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Contact {

private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string _phoneNumber;
	std::string	_darkestSecret;

	std::string _readFromInput(std::string prompt);

public:
	Contact();
	// Contact(std::string firstName, std::string lastName, std::string nickname,
	// 	std::string phoneNumber, std::string darkestSecret);
	~Contact();

	void		fillData(void);

	void		displayFullInfo(void) const;
	std::string	getFirstName(void) const;
	std::string	getLastName(void) const;
	std::string	getDarkestSecret(void) const;

};


#endif
