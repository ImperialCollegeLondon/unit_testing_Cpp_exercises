#include "fibonacci.hpp"
#include "gtest/gtest.h"
#include <iostream>

TEST(FibonacciTest, HandlesZeroInput)
{
    EXPECT_EQ(recursive_fibonacci(0), 0);
}

TEST(FibonacciTest, HandlesValueOneAsInput)
{
    EXPECT_EQ(recursive_fibonacci(1), 1);
}

TEST(FibonacciTest, HandlesPositiveInput)
{
    EXPECT_EQ(recursive_fibonacci(5), 5);
}

TEST(FibonacciTest, HandlesNegativeInput)
{
    EXPECT_EQ(recursive_fibonacci(-3), -3);
}
