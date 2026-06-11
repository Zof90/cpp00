/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 14:27:30 by schouite          #+#    #+#             */
/*   Updated: 2026/06/11 13:35:27 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		std::string str(argv[i]);
		while (str[j])
		{
			std::cout << (char)std::toupper(str[j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
