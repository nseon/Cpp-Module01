/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:57:20 by nseon             #+#    #+#             */
/*   Updated: 2025/10/23 10:56:15 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <string>

# include "Weapon.hpp"

class HumanB {
	private:
		std::string _name;
		Weapon *_weapon;
	public:
		HumanB();
		HumanB(const std::string &name);
		HumanB(const std::string &name, Weapon &weapon);
		void setWeapon(Weapon &weapon);
		void attack();
};

#endif