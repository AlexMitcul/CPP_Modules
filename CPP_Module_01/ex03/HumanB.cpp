/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:52:01 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 22:11:09 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	this->_weapon = NULL;
}
HumanB::~HumanB() {}

void HumanB::attack(void) const {
	if (this->_weapon != NULL)
		std::cout << this->_name << " attacks with their " \
			<< this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " doesn't have a weapon " << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->_weapon = &weapon;
}
