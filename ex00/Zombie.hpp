/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 14:41:18 by nseon             #+#    #+#             */
/*   Updated: 2025/10/21 18:02:49 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string _name;
	public:
		~Zombie();
		void announce( void );
		void setName(std::string name);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
