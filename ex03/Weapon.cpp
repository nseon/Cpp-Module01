/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:38:36 by nseon             #+#    #+#             */
/*   Updated: 2025/10/23 12:20:49 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): _type("short stick")
{}

Weapon::Weapon(const std::string &type): _type(type)
{}

const std::string &Weapon::getType()
{
	const std::string &ref = _type;
	
	return (ref);
}

void Weapon::setType(const std::string new_type)
{
	_type = new_type;
}
