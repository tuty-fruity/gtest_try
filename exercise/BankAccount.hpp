#pragma once
#include "IBankAccount.hpp"

class IDataBase;

class BankAccount : public IBankAccount
{
public:
    BankAccount(IDataBase* db);
    ~BankAccount();

    int checkBalance();
    void deposit(const int& amount);

private:
    IDataBase *m_db;
    int balance;
};

