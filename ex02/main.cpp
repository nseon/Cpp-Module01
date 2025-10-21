/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 18:47:27 by nseon             #+#    #+#             */
/*   Updated: 2025/10/21 19:01:31 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string stringREF = &str;

	return (0);
}
