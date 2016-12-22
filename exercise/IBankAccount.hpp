#pragma once
class IBankAccount
{
public:
    virtual ~IBankAccount() = default;
    virtual int checkBalance() = 0;
    virtual void deposit(const int& amount) = 0;
};

