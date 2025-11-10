/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:41:16 by nseon             #+#    #+#             */
/*   Updated: 2025/11/10 15:23:18 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie() : _name("Zombie")
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << _name << " has been destroyed" << std::endl;
}

void Zombie::announce( void )
{
	if (!_name.compare("Foo"))
		std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	else
		std::cout << '<' << _name << '>' << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	_name = name;
}
