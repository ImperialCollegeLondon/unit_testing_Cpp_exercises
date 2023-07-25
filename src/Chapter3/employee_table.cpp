#include "employee_table.h"
#include "employee.h"
#include <iostream>
#include <string>
#include <vector>

void EmployeeTable::addEmployee(const Employee &employee) {
    employees_.push_back(employee);
}

void EmployeeTable::removeEmployee(const std::string &name) {
    for (auto it = employees_.begin(); it != employees_.end(); ++it) {
        if (it->getName() == name) {
            employees_.erase(it);
            break;
        }
    }
}

void EmployeeTable::displayEmployeesName(std::ostream &output) const {
    output << "-------------------------------------------------- " << std::endl;
    for (const auto &employee : employees_) {
        output << employee.getName() << std::endl;
    }
    output << "-------------------------------------------------- " << std::endl;
}

bool EmployeeTable::isEmpty() const {
    return employees_.empty();
}

size_t EmployeeTable::getEntryCount() const {
    return employees_.size();
}
