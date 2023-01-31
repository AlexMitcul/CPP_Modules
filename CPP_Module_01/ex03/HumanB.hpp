/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:52:00 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 22:09:40 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	std::string _name;
	Weapon* _weapon;

public:
	HumanB(std::string name);
	~HumanB();

	void attack(void) const;
	void setWeapon(Weapon& weapon);
};

#endif
