#include "Account.h"

using namespace std;

Account::Account()
{
	balance = 0;
}


Account::~Account()
{
}

vector<string> Account::Report()
{
	vector<string> report;
	report.push_back("Balance is " + to_string(balance));
	report.push_back("Transaction: ");
	for (auto t:log)
	{
		report.push_back(t.Report());
	}
	report.push_back("------------------------------");

	return report;
}

bool Account::Deposit(int amt)
{
	if (amt >= 0)
	{
		balance += amt;
		log.push_back(Transaction(amt, "Deposit"));
		return true;
	}
	else
	{
		return false;
	}
}

bool Account::WithDraw(int amt)
{
	if (amt >= 0)
	{
		if (amt <= balance)
		{
			balance -= amt;
			log.push_back(Transaction(amt, "Withdraw"));
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

//int Account::GetBalance()
//{
//	return balance;
//}
