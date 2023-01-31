/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 19:40:37 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 21:12:21 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
private:
	std::string _name;

public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
