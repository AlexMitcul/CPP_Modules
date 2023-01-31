/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:13:25 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 21:23:23 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ) {
	size_t N = 3;
	Zombie *zombiz = zombieHorde(N, "norminette");

	for (size_t i = 0; i < N; i++) {
		zombiz[i].announce();
	}

	delete [] zombiz;
	return 0;
}
