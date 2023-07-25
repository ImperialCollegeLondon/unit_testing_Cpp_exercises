#include "employee.h"
#include <iostream>
#include <string>

const double extraBonus = 1000.0;
const int yearsExpForExtraBonus = 10;

Employee::Employee(const std::string &name, unsigned int age, double baseSalary,
                   unsigned int numberYearsEmployed, double basicBonus)
    : name_(name), age_(age), baseSalary_(baseSalary), numberYearsEmployed_(numberYearsEmployed),
      basicBonus_(basicBonus), netBonus_(0), taxAmount_(0), netSalary_(0) {
    calcNetBonus();
    calcTaxAmount();
    calcNetSalary();
}

void Employee::setName(const std::string &name) {
    if (name.empty()) {
        throw std::invalid_argument("Name cannot be empty");
    }
    name_ = name;
}

void Employee::setAge(unsigned int age) {
    age_ = age;
}

void Employee::setBaseSalary(double baseSalary) {
    baseSalary_ = baseSalary;

    // Calculate new tax based on new base salary
    calcTaxAmount();

    // Changing base salary will change net salary.
    calcNetSalary();
}

void Employee::setNumberYearsEmployed(unsigned int numberYearsEmployed) {
    numberYearsEmployed_ = numberYearsEmployed;

    // Changing number of years employed will change net bonus.
    calcNetBonus();

    // Get the new tax.
    calcTaxAmount();

    // Changing net bonus will change net salary.
    calcNetSalary();
}

void Employee::setBasicBonus(double basicBonus) {
    basicBonus_ = basicBonus;

    // Changing basic bonus will change net bonus.
    calcNetBonus();

    // Get the new tax.
    calcTaxAmount();

    // Changing net bonus will affect net salary.
    calcNetSalary();
}

// Employee gets additional £1000 bonus if they have been employed for more than 10 years.
void Employee::calcNetBonus() {
    if (numberYearsEmployed_ > yearsExpForExtraBonus) {
        netBonus_ = basicBonus_ + extraBonus;
    } else {
        netBonus_ = basicBonus_;
    }
}

void Employee::calcTaxAmount() {
    double salary_with_bonus = baseSalary_ + netBonus_;
    if (salary_with_bonus <= 10000) {
        taxAmount_ = 0.0;
    } else if (salary_with_bonus > 10000 && salary_with_bonus <= 20000) {
        taxAmount_ = 0.1 * (salary_with_bonus - 10000);
    } else if (salary_with_bonus > 20000 && salary_with_bonus <= 50000) {
        taxAmount_ = 0.1 * 10000 + 0.2 * (salary_with_bonus - 20000);
    } else if (salary_with_bonus > 50000) {
        taxAmount_ = 0.1 * 10000 + 0.2 * 30000 + 0.5 * (salary_with_bonus - 50000);
    }
}

void Employee::calcNetSalary() {
    netSalary_ = baseSalary_ + netBonus_ - taxAmount_;
}

std::string Employee::getName() const {
    return name_;
}

unsigned int Employee::getAge() const {
    return age_;
}

double Employee::getBasicSalary() const {
    return baseSalary_;
}

unsigned int Employee::getNumberYearsEmployed() const {
    return numberYearsEmployed_;
}

double Employee::getBasicBonus() const {
    return basicBonus_;
}

double Employee::getNetBonus() const {
    return netBonus_;
}

double Employee::getTaxAmount() const {
    return taxAmount_;
}

double Employee::getNetSalary() const {
    return netSalary_;
}

void Employee::displayInfo() const {
    std::cout << "Name: " << name_ << std::endl;
    std::cout << "Age: " << age_ << std::endl;
    std::cout << "Base_Salary: £" << baseSalary_ << std::endl;
    std::cout << "Number of Years Employed: " << numberYearsEmployed_ << std::endl;

    std::cout << "Basic_Bonus: £" << basicBonus_ << std::endl;
    std::cout << "Net_Bonus: £" << netBonus_ << std::endl;

    std::cout << "Tax to be paid: £" << taxAmount_ << std::endl;
    std::cout << "Net_Salary: £" << netSalary_ << std::endl;
}
