/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:08:59 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/28 21:19:06 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv) {
	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	} else {
		for (int i=1; i < argc; ++i) {
			for (int j=0; argv[i][j]; ++j) {
				std::cout << (char) toupper(argv[i][j]);
			}
		}
	}
	std::cout << std::endl;
	return (0);
}
