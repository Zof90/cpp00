/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:27:30 by schouite          #+#    #+#             */
/*   Updated: 2026/07/09 13:05:20 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{

	int i = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		size_t j = 0;
		std::string str(argv[i]);
		while (j < str.length())
		{
			std::cout << (char)std::toupper(str[j]);
			j++;
		}
		if (i < argc - 1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
