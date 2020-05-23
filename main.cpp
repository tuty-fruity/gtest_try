#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "BankAccount.hpp"
#include "DataBase.hpp"

class DataBaseMock : public IDataBase 
{
public:
    MOCK_METHOD1(connect, bool(const std::string& hostname));
};

class BankAccountTest : public testing::Test
{
public:
    BankAccountTest()
    {
    }

    void SetUp()
    {
        dbMock = new DataBaseMock();
        bankAccount = new BankAccount(dbMock);
    }

    void TearDown()
    {
        delete bankAccount;
    }

    BankAccount *bankAccount;
    DataBaseMock *dbMock;
};


TEST_F(BankAccountTest, testDeposit)
{
}

/*
 * TODO DO DO
 * TODO DO DO
 * TODO DO DO DO DO DO DO DO DO
 * * Let me hear you sing it.!
 */
int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
