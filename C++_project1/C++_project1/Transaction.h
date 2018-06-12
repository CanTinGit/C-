#pragma once
#include<string>

class Transaction
{
public:
	Transaction(int amt, std::string kind);
	~Transaction();
	std::string Report() const;

private:
	int amount;
	std::string type;
};

