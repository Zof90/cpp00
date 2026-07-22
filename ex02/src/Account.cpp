/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schouite <schouite@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 15:46:21 by schouite          #+#    #+#             */
/*   Updated: 2026/07/22 18:20:45 by schouite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
};
Account::Account(void)
{
	_amount = 0;
	_accountIndex = _nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
};
Account::~Account()
{
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
	_nbAccounts--;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
};
void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
};
// [19920104_091532] index:7;amount:16596;deposits:1;withdrawals:0

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
};
void Account::_displayTimestamp(void)
{
	char buffer[64];
	std::tm *local;
	std::time_t now = std::time(NULL);
	local = std::localtime(&now);
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", local);
	std::cout << buffer;
};
// [19920104_091532] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:" << ++_nbDeposits << std::endl;
};
// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
// [19920104_091532] index:5;p_amount:23;withdrawal:refused
bool Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	if (_amount > withdrawal)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		std::cout << ";amount:" << _amount << ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
		return (true);
	}
	else
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
};
int Account::checkAmount(void) const
{
	return (_amount);
};
int Account::getNbAccounts(void)
{
	return (_nbAccounts);
};
int Account::getTotalAmount(void)
{
	return (_totalAmount);
};

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
};
int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
};
// cmd pour test facile
// > ./Account > mine.log
// > diff <(cut -d ' ' -f 2- 19920104_091532.log) <(cut -d ' ' -f 2- mine.log)