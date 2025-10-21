/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:32:11 by nseon             #+#    #+#             */
/*   Updated: 2025/10/21 18:17:57 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *z1 = newZombie("NotFoo");
	Zombie *z2 = newZombie("Foo");

	randomChump("random");
	z1->announce();
	z2->announce();
	delete z1;
	delete z2;
	return (0);
}