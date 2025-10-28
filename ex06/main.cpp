/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:34:00 by nseon             #+#    #+#             */
/*   Updated: 2025/10/28 14:12:06 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

enum level {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NOTHING
};

int get_level(std::string input)
{
	if (input == "DEBUG")
		return (DEBUG);
	if (input == "INFO")
		return (INFO);
	if (input == "WARNING")
		return (WARNING);
	if (input == "ERROR")
		return (ERROR);
	return (NOTHING);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong arguments\nUsage: ./harlFilter level" << std::endl;
		return (1);
	}
	Harl harl;
	int	level = get_level(argv[1]);

	switch (level)
	{
		case NOTHING:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
			break ;
		case DEBUG:
			harl.complain("debug");
		case INFO:
			harl.complain("info");
		case WARNING:
			harl.complain("warning");
		case ERROR:
			harl.complain("error");
	}
	return (0);
}