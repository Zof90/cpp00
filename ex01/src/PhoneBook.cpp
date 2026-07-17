/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:04:13 by schouite          #+#    #+#             */
/*   Updated: 2026/07/16 18:14:26 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>
#include <iomanip>
#include <iostream>

PhoneBook::PhoneBook(void) : _nextIndex(0)
{
}
void PhoneBook::add(void)
{
	Contact	contact;

	std::string str;
	while (str == "")
	{
		std::cout << "enter your first name" << std::endl;
		std::getline(std::cin, str);
		contact.chFirstName(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "enter your last name" << std::endl;
		std::getline(std::cin, str);
		contact.chLastName(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "enter your nick name" << std::endl;
		std::getline(std::cin, str);
		contact.chNickName(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "enter your phone number" << std::endl;
		std::getline(std::cin, str);
		contact.chPhoneNumber(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "enter your darkest secret" << std::endl;
		std::getline(std::cin, str);
		contact.chDarkestSecret(str);
	}
	_contacts[_nextIndex] = contact;
	_nextIndex = (_nextIndex + 1) % 8;
}

void PhoneBook::search() const
{
	int i = 0;
	int nb = -1;

	if (_nextIndex == 0)
	{
		std::cout << "Phonebook is empty. Please add a contact first." << std::endl;
		return ;
	}
	while (i < _nextIndex)
	{
		std::cout << _nextIndex << std::endl;
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getNickName()) << "|";
		std::cout << std::endl;
		i++;
	}
	while (nb < 0 || nb > 7)
	{
		std::cout << "enter index of contact" << std::endl;
		std::cin >> nb;
		std::cin.ignore();
	}
	display(nb);
}

std::string PhoneBook::_formatField(std::string str) const
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
void PhoneBook::display(const int i) const
{
	std::cout << std::setw(10) << std::right << i << "|";
	std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getFirstName()) << "|";
	std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getLastName()) << "|";
	std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getNickName()) << "|";
	std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getPhoneNumber()) << "|";
	std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getDarkestSecret()) << "|";
	std::cout << std::endl;
}
