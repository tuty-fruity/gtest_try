#include "BankAccount.hpp"
#include "IDataBase.hpp"

BankAccount::BankAccount(IDataBase *db) :
    balance(0),
    m_db(db)
{
}

BankAccount::~BankAccount()
{
    if (m_db) delete m_db;
}

void BankAccount::deposit(const int& amount)
{
    if (m_db->connect("some hostname"))
    {
        balance += amount;
    }
}

int BankAccount::checkBalance()
{
    return balance;
}
