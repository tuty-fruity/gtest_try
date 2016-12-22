#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "BankAccount.hpp"
#include "IDataBase.hpp"

class BankAccountTest : public testing::Test 
{
public:
    BankAccountTest()
    {
        db = new DataBaseMock();
        bankAccount = new BankAccount(db);
    }

    void SetUp()
    {
    }

    void TearDown()
    {
        delete bankAccount;
    }

    BankAccount *bankAccount;
    DataBaseMock *db;
};


// create Test for deposit Here
TEST_F(BankAccountTest, testDeposit)
{
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
