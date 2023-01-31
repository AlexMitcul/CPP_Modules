/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amitcul <amitcul@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:26:06 by amitcul           #+#    #+#             */
/*   Updated: 2023/01/31 16:44:43 by amitcul          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>

#include "Account.hpp"

// [19920104_091532] index:4;amount:1234;created

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_amount = initial_deposit;
	this->_accountIndex = this->getNbAccounts();
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;

	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";created" << std::endl;
}

// [19920104_091532] index:7;amount:8942;closed

Account::~Account() {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;

	Account::_nbAccounts--;
}

int Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

// [19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
void Account::displayAccountsInfos(void) {
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

// [19920104_091532] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1

void Account::makeDeposit(int deposit) {
	this->_displayTimestamp();
	this->_nbDeposits++;
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;

	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

// [19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
// [19920104_091532] index:0;p_amount:47;withdrawal:refused

bool Account::makeWithdrawal(int withdrawal) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	if (this->checkAmount() >= withdrawal) {
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;

		this->_nbWithdrawals++;
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		std::cout << ";amount:" << this->checkAmount();
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return true;
	}
	std::cout << ";withdrawal:refused" << std::endl;
	return false;
}

int Account::checkAmount(void) const {
	return this->_amount;
}

// [19920104_091532] index:0;amount:47;deposits:1;withdrawals:0

void Account::displayStatus(void) const {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
	std::time_t timeNow;
	char timeString[100];

	timeNow = std::time(nullptr);
	std::strftime(timeString, sizeof(timeString),
		"%Y%m%d_%H%M%S", std::localtime(&timeNow));
	std::cout << "[" << timeString << "] ";
}


