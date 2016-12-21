#include "BankAccount.hpp"

BankAccount::BankAccount() : balance(0)
{
}

BankAccount::~BankAccount()
{
}

void BankAccount::deposit(const int& amount)
{
    balance += amount;
}
