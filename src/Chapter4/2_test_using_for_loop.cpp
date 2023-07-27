#include "employee.h"
#include <gtest/gtest.h>

// Create a test fixture.
class EmployeeTestFixture : public ::testing::Test {
  public:
    Employee employee{"John", 25, 8000, 3, 2000};
};

// Test net bonus works fine for different number of years.
TEST_F(EmployeeTestFixture, NetBonusIsCorrectForDifferentYears) {
    auto input = std::vector<unsigned int>{5, 15};
    auto expected_output = std::vector<double>{2000, 3000};
    for (size_t i = 0; i < input.size(); i++) {
        employee.setNumberYearsEmployed(input[i]);
        EXPECT_DOUBLE_EQ(employee.getNetBonus(), expected_output[i]);
    }
}
