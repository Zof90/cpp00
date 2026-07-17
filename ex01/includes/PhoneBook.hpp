/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/14 18:00:34 by schouite          #+#    #+#             */
/*   Updated: 2026/07/16 17:38:49 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"
# include <iostream>
# include <string>

class PhoneBook
{
  private:
	Contact _contacts[8];
	int _nextIndex;
	std::string _formatField(std::string str) const;

  public:
	PhoneBook(void);
	void add();
	void search() const;
	void display(const int i) const;
};

#endif