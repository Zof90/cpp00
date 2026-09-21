/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 14:11:22 by schouite          #+#    #+#             */
/*   Updated: 2026/09/21 13:20:34 by schouite         ###   ########.fr       */
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
		if (name == "EXIT")
			break ;
		else if (name == "ADD")
			phoneBook.add();
		else if (name == "SEARCH")
			phoneBook.search();
	}
	return (0);
}