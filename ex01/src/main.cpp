/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:11:22 by schouite          #+#    #+#             */
/*   Updated: 2026/09/21 15:57:54 by schouite         ###   ########.fr       */
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
		if (!std::getline(std::cin, name))
			break;
		if (name == "EXIT")
			break ;
		else if (name == "ADD")
			phoneBook.add();
		else if (name == "SEARCH")
			phoneBook.search();
	}
	return (0);
}