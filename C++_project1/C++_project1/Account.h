#pragma once
#include<string>
#include<vector>
#include "Transaction.h"

class Account
{
public:
	Account();
	~Account();
	std::vector<std::string> Report();
	bool Deposit(int amt);
	bool WithDraw(int amt);
	int GetBalance() { return balance; }

private:
	int balance;
	std::vector<Transaction> log;
};

