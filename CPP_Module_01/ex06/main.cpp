/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 11:50:40 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/03 12:33:11 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./harl_filter \"level\"\n";
		return EXIT_FAILURE;
	}

	Harl harl;
	harl.complain(argv[1]);

	return EXIT_SUCCESS;
}
