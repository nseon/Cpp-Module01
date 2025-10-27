/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:38:40 by nseon             #+#    #+#             */
/*   Updated: 2025/10/23 11:01:17 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon {
	private:
		std::string	_type;
	public:
		const std::string &getType();
		void setType(const std::string new_type);
		Weapon(const std::string &type);
		Weapon();
};

#endif