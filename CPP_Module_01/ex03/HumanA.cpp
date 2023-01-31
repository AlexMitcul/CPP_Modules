/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:44:24 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 22:11:01 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void HumanA::attack() const {
	std::cout << this->_name << " attacks with their " \
		<< this->_weapon.getType() << std::endl;
}
