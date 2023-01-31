/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 21:44:23 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 22:08:46 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	std::string _name;
	Weapon& _weapon;

public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack(void) const;
};

#endif
