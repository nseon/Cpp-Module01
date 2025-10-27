/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 11:56:12 by nseon             #+#    #+#             */
/*   Updated: 2025/10/23 11:03:19 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string>

# include "Weapon.hpp"


class HumanA {
	private:
		std::string _name;
		Weapon &_weapon;
	public:
		HumanA(const std::string &name, Weapon &weapon);
		void attack();
};

#endif