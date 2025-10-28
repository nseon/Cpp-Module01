/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 13:24:57 by nseon             #+#    #+#             */
/*   Updated: 2025/10/27 18:04:02 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int	main(int argc, char **argv)
{
	if (argc != 4 || argv[2][0] == 0)
	{
		std::cout << "Wrong arguments !\nUsage: ./sed filename s1 s2" << std::endl;
		return (1);
	}
	std::ostringstream ss;
	std::string filename(argv[1]);
	std::string s1(argv[2]);
	std::string s2(argv[3]);

	std::ifstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "failed to open: " << filename << std::endl;
		return (1);
	}
	ss << file.rdbuf();
	file.close();
	std::string str = ss.str();
	std::string::size_type i = 0;
	while ((i = str.find(s1, i)) != std::string::npos)
	{
		str.erase(i, s1.size());
		str.insert(i, s2);
		i += s2.size();
	}
	std::ofstream replace((filename + ".replace").c_str());
	replace << str;
	return (0);
}
