/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:50:37 by schouite          #+#    #+#             */
/*   Updated: 2026/09/21 13:59:35 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
  private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;

  public:
	void chFirstName(const std::string &);
	void chLastName(const std::string &);
	void chNickName(const std::string &);
	void chPhoneNumber(const std::string &);
	void chDarkestSecret(const std::string &);
	const std::string &getFirstName(void) const;
	const std::string &getLastName(void) const;
	const std::string &getNickName(void) const;
	const std::string &getPhoneNumber(void) const;
	const std::string &getDarkestSecret(void) const;
};
#endif