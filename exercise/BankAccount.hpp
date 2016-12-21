#include "IBankAccount.hpp"

class BankAccount : public IBankAccount
{
public:
    BankAccount();
    ~BankAccount();

    int checkBalance() override;
    void deposit(const int& amount) override;

private:
    int balance;
};

