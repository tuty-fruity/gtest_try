#include <gtest/gtest.h>
#include "foo.hpp"

class BankAccount
{
public:
    int balance;
    BankAccount()
    {
        balance = 0;
    }

    void deposit(int amount)
    {
        balance += amount;
    }
};

class BankAccountTest : public testing::Test 
{
public:
    
};

// create Test for deposit Here
TEST_F(BankAccountTest, testDeposit)
{

}

int main(int argc, char*argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
