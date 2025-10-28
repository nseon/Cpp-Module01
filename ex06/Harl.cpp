/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:36:52 by nseon             #+#    #+#             */
/*   Updated: 2025/10/28 14:18:39 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

void Harl::debug( void )
{
	std::cout <<  "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
}

void Harl::info( void )
{
	std::cout <<  "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning( void )
{
	std::cout <<  "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month.\n" << std::endl;
}

void Harl::error( void )
{
	std::cout <<  "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now\n" << std::endl;
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
