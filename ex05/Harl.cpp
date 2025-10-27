/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:36:52 by nseon             #+#    #+#             */
/*   Updated: 2025/10/27 18:52:27 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout << "Debug message" << std::endl;
}

void Harl::info( void )
{
	std::cout << "Info message" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "Warning message" << std::endl;
}

void Harl::error( void )
{
	std::cout << "Error message" << std::endl;
}

void Harl::complain( std::string level )
{
	void (Harl::* const ptrs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const std::string strs[4] = {"debug", "info", "warning", "error"};
	
	for (int i = 0; i < 4; i++)
	{
		if (strs[i] == level)
		{
			(this->*ptrs[i])();
			return ;		
		}
	}
	std::cout << "invalid level" << std::endl;
}
