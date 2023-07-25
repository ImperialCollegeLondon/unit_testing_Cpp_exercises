#pragma once

#include <iostream>
#include <stdexcept>
#include <string>

class Employee {
  private:
    std::string name_;
    unsigned int age_;
    double baseSalary_; // salary before calculating tax and adjusting bonus.
    unsigned int numberYearsEmployed_;

    double basicBonus_; // bonus for current year.
    double netBonus_;   // bonus after adjusting for experience.

    double taxAmount_;
    double netSalary_; // salary after calculating tax and adjusting bonus.

  public:
    // Constructor.
    Employee(const std::string &name, unsigned int age, double baseSalary,
             unsigned int numberYearsEmployed, double basicBonus);

    // Public member functions to set values.
    void setName(const std::string &name);
    void setAge(unsigned int age);
    void setBaseSalary(double baseSalary);
    void setNumberYearsEmployed(unsigned int numberYearsEmployed);
    void setBasicBonus(double basicBonus);

    void calcNetBonus();  // To calculate net bonus while considering experience.
    void calcTaxAmount(); // To calculate tax to be paid based on salary with bonus
    void calcNetSalary(); // To calculate net salary after adjusting tax and bonus.

    // Getter functions.
    const std::string &getName() const;
    unsigned int getAge() const;
    double getBasicSalary() const;
    unsigned int getNumberYearsEmployed() const;
    double getBasicBonus() const;
    double getNetBonus() const;
    double getTaxAmount() const;
    double getNetSalary() const;

    void displayInfo() const;
};
