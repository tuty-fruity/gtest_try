#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "foo.hpp"

class FooTest : public testing::Test
{
public:
    Foo foo;
    
    FooTest() : foo(std::string("Peter"))
    {
    }

    virtual void SetUp()
    {
    }

    virtual void TearDown()
    {
    }
};


TEST_F(FooTest, testFooCreation)
{
    EXPECT_TRUE(&foo);
}

TEST_F(FooTest, testGetName)
{
    std::string expected("Peter");
    EXPECT_EQ(expected, foo.getName());
}

int main(int argc, char*argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
