/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:50:40 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/03 11:55:20 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	std::string input;
	Harl harl;

	do {
		std::cout << "Enter a level: ";
		std::cin >> input;
		harl.complain(input);
	} while (input.compare("exit"));

	return EXIT_SUCCESS;
}
