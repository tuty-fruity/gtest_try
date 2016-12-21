class IBankAccount
{
    virtual int checkBalance() = 0;
    virtual void deposit(const int& amount) = 0;
};

