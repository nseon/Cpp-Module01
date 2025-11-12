/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:36:52 by nseon             #+#    #+#             */
/*   Updated: 2025/11/12 11:50:25 by nseon            ###   ########.fr       */
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

enum level {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NOTHING
};

void Harl::complain( std::string level )
{
	const std::string strs[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4 && strs[i] != level)
		++i;
	switch (i)
	{
		case NOTHING:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break ;
		case DEBUG:
			debug();
		case INFO:
			info();
		case WARNING:
			warning();
		case ERROR:
			error();
	}
}
