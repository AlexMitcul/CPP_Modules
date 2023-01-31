/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:25:00 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 21:31:50 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
	std::string original = "HI THIS IS BRAIN";
	std::string* stringPTR = &original;
	std::string& stringREF = original;

	std::cout << &original << ": " << original << std::endl;
	std::cout << stringPTR << ": " << *stringPTR << std::endl;
	std::cout << &stringREF << ": " << stringREF << std::endl;
}
