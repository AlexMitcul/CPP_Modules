/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:05:17 by amitcul           #+#    #+#             */
/*   Updated: 2023/02/10 13:45:35 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Invalid input." << std::endl;
		return 1;
	}

	std::string input_filename = argv[1];
	std::ifstream read_stream;
	read_stream.open(input_filename.c_str());
	if (!read_stream.is_open()) {
		std::cout << "Wrong filename." << std::endl;
		return 1;
	}
	std::string output_filename = input_filename + ".replace";
	std::ofstream write_stream;
	write_stream.open(output_filename.c_str());
	if (!write_stream.is_open()) {
		read_stream.close();
		std::cout << "Error when open file." << std::endl;
		return 1;
	}

	std::string line;
	std::string from = argv[2];
	std::string to = argv[3];
	while (std::getline(read_stream, line)) {
		while (true) {
			int start_position = line.find(from);
			if (start_position == -1)
				break;
			line.erase(start_position, from.size());
			line.insert(start_position, to);
		}
		write_stream << line << std::endl;
	}

	return 0;
}
