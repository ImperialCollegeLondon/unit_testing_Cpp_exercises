#include "fibonacci.h"
#include "gtest/gtest.h"

TEST(FibonacciTest, HandlesZeroInput) {
    EXPECT_EQ(recursive_fibonacci(0), 0);
}

TEST(FibonacciTest, HandlesValueOneAsInput) {
    EXPECT_EQ(recursive_fibonacci(1), 1);
}

TEST(FibonacciTest, HandlesPositiveInput) {
    EXPECT_EQ(recursive_fibonacci(5), 5);
}

TEST(FibonacciTest, ThrowsExceptionNegativeInput) {
    EXPECT_THROW(recursive_fibonacci(-3), std::invalid_argument);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
