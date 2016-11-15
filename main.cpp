#include <gtest/gtest.h>
#include "foo.hpp"

class BankAccount : public testing::Test {
public:

    int balance;

    void deposit(int amount)
    {
        balance += amount;
    }
};

// create Test Here

int main(int argc, char*argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
