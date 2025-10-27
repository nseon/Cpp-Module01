/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:57:33 by nseon             #+#    #+#             */
/*   Updated: 2025/10/23 12:44:15 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(): _name("A nobody"), _weapon(NULL)
{}

HumanB::HumanB(const std::string &name): _name(name), _weapon(NULL)
{}

HumanB::HumanB(const std::string &name, Weapon &weapon) : _name(name), _weapon(&weapon)
{}

void HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << " attacks with his bare hands " << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
