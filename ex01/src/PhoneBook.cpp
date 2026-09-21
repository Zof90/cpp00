/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:04:13 by schouite          #+#    #+#             */
/*   Updated: 2026/09/21 16:00:53 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <PhoneBook.hpp>
#include <iomanip>
#include <iostream>
#include <string>

PhoneBook::PhoneBook(void) : _nextIndex(0), _count(0)
{
}
void PhoneBook::add(void)
{
	Contact	contact;

	std::string str;
	while (str == "")
	{
		std::cout << "enter your first name" << std::endl;
		if (!std::getline(std::cin, str))
			return;
		contact.chFirstName(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "enter your last name" << std::endl;
		if (!std::getline(std::cin, str))
			return;
		contact.chLastName(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "enter your nick name" << std::endl;
		if (!std::getline(std::cin, str))
			return;
		contact.chNickName(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "enter your phone number" << std::endl;
		if (!std::getline(std::cin, str))
			return;
		contact.chPhoneNumber(str);
	}
	str = "";
	while (str == "")
	{
		std::cout << "enter your darkest secret" << std::endl;
		if (!std::getline(std::cin, str))
			return;
		contact.chDarkestSecret(str);
	}
	_contacts[_nextIndex] = contact;
	_nextIndex = (_nextIndex + 1) % 8;
	if (_count < 8)
		_count++;
}

void PhoneBook::search() const
{
	int i = 0;
	int nb = -1;
	std::string input = "";

	if (_count == 0)
	{
		std::cout << "Phonebook is empty. Please add a contact first." << std::endl;
		return ;
	}
	while (i < _count)
	{
		std::cout << std::setw(10) << std::right << i << "|";
		std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << _formatField(_contacts[i].getNickName()) << "|";
		std::cout << std::endl;
		i++;
	}
	while (nb < 0 || nb >= _count)
	{
		std::cout << "enter index of contact" << std::endl;
		if (!std::getline(std::cin, input))
			return ;
		if (input.length() == 1 && input[0] >= '0' && input[0] <= '7')
			nb = input[0] - '0';
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
	std::cout << "First name: " << _contacts[i].getFirstName() << std::endl;
	std::cout << "Last name: " << _contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[i].getNickName() << std::endl;
	std::cout << "Phone number: " << _contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[i].getDarkestSecret() << std::endl;
}
