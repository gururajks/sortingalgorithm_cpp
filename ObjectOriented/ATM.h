#pragma once
#include "Common.h"

class Account
{
public:
	Account(int id, int amount) : id(id), balance(balance) {}
	void withdraw(int amount)
	{
		balance -= amount;
	}
	int getBalance() const
	{
		return balance;
	}

private:
	int id;
	int balance;

};

class ATM
{
public:
	ATM(int totalCash) : totalCash(totalCash)
	{
	}

	int withdraw(Account* account, int amount)
	{
		if (canWithdraw(account, amount))
		{
			totalCash -= amount;
			account->withdraw(amount);
			return amount;
		}		
		throw new exception("No Balance");		
	}
	
protected:
	bool canWithdraw(Account* account, int amount)
	{
		if (totalCash >= amount && account->getBalance() >= amount)
		{
			return true;
		}
		return false;
	}
	
private:
	int totalCash;

};