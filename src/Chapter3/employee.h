#pragma once

#include <iostream>
#include <stdexcept>
#include <string>

class Employee {
  private:
    std::string name;
    unsigned int age;
    double base_salary; // salary before calculating tax and adjusting bonus.
    double number_years_employed;

    double basic_bonus; // bonus for current year.
    double net_bonus;   // bonus after adjusting for experience.

    double tax_amount;
    double net_salary; // salary after calculating tax and adjusting bonus.

  public:
    // Constructor.
    Employee(const std::string &employee_name, unsigned int employee_age, double employeeSalary,
             double employeeNumberYearsEmployed, double employeeBonus);

    // Public member functions to set values.
    void setName(const std::string &employee_name);
    void setAge(unsigned int employee_age);
    void setBaseSalary(double employeeSalary);
    void setNumberYearsEmployed(double employeeNumberYearsEmployed);
    void setBasicBonus(double employeeBonus);

    void calcNetBonus();  // To calculate net bonus while considering experience.
    void calcTaxAmount(); // To calculate tax to be paid based on salary with bonus
    void calcNetSalary(); // To calculate net salary after adjusting tax and bonus.

    // Getter functions.
    std::string getName() const;
    unsigned int getAge() const;
    double getBasicSalary() const;
    double getNumberYearsEmployed() const;
    double getBasicBonus() const;
    double getNetBonus() const;
    double getTaxAmount() const;
    double getNetSalary() const;

    void displayInfo() const;

    // Destructor
    ~Employee();
};
