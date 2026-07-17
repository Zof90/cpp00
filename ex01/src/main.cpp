/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:11:22 by schouite          #+#    #+#             */
/*   Updated: 2026/07/16 17:45:25 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <PhoneBook.hpp>
int	main(void)
{
	PhoneBook phoneBook;
	std::string name;

	while (true)
	{
		std::cout << "Enter command: ";
		std::getline(std::cin, name);
		if (name == "exit")
		{
			std::cout << "Bye" << std::endl;
			break ;
		}
		else if (name == "add")
		{
			phoneBook.add();
		}
		else if (name == "search")
		{
			phoneBook.search();
		}
		else
			std::cout << "unknown command" << std::endl;
	}
	return (0);
}