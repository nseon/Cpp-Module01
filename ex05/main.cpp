/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nseon <nseon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:34:00 by nseon             #+#    #+#             */
/*   Updated: 2025/10/27 18:53:17 by nseon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl harl;

	harl.complain("error");
	harl.complain("info");
	harl.complain("oiusfh");
	harl.complain("debug");
	harl.complain("warning");
	harl.complain("");
}