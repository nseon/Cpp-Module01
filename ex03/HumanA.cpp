/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:55:58 by nseon             #+#    #+#             */
/*   Updated: 2025/10/22 16:18:15 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon)
{}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
