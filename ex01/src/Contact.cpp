/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:49:46 by schouite          #+#    #+#             */
/*   Updated: 2026/07/15 17:16:29 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::chFirstName(const std::string &str)
{
	_firstName = str;
}
void Contact::chLastName(const std::string &str)
{
	_lastName = str;
}
void Contact::chNickName(const std::string &str)
{
	_nickName = str;
}
void Contact::chPhoneNumber(const std::string &str)
{
	_phoneNumber = str;
}
void Contact::chDarkestSecret(const std::string &str)
{
	_darkestSecret = str;
}
const std::string &Contact::getFirstName(void) const
{
	return (_firstName);
}
const std::string &Contact::getLastName(void) const
{
	return (_lastName);
}
const std::string &Contact::getNickName(void) const
{
	return (_nickName);
}
const std::string &Contact::getPhoneNumber(void) const
{
	return (_phoneNumber);
}
const std::string &Contact::getDarkestSecret(void) const
{
	return (_darkestSecret);
}