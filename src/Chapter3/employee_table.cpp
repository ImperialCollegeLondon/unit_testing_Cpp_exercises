#include "employee_table.h"
#include "employee.h"
#include <iostream>
#include <string>
#include <vector>

void EmployeeTable::addEmployee(const Employee &employee) {
    employees.push_back(employee);
}

void EmployeeTable::removeEmployee(const std::string &employeeName) {
    for (auto it = employees.begin(); it != employees.end(); ++it) {
        if (it->getName() == employeeName) {
            employees.erase(it);
            break;
        }
    }
}

void EmployeeTable::displayEmployeesName(std::ostream &output) const {
    output << "-------------------------------------------------- " << std::endl;
    for (const auto &employee : employees) {
        output << employee.getName() << std::endl;
    }
    output << "-------------------------------------------------- " << std::endl;
}

bool EmployeeTable::isEmpty() const {
    return employees.empty();
}

size_t EmployeeTable::getEntryCount() const {
    return employees.size();
}
