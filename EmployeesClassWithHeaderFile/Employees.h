#include <iostream>
#include <string>
#include <iomanip>

class Employees {
public:
	void setProperties(std::string fname, std::string lname, std::string pos)
	{
		firstName = fname;
		lastName = lname;
		position = pos;

	}
	void setSalary(int amount) {
		salary = amount;
	}
	int getSalary()const
	{
		return salary;
	}

	void printInfo()
	{
		std::cout << "Employee Information" << std::endl;
		std::cout << std::left << std::setw(15) << "First name " << ":" + firstName << std::endl;
		std::cout << std::left << std::setw(15) << "Last name " << ":" + lastName << std::endl;
		std::cout << std::left << std::setw(15) << "Position " << ":" + position << std::endl;
		std::cout << std::left << std::setw(15) << "Salary " << ":$"  <<  getSalary()<< std::endl;

	}
private:
	std::string firstName;
	std::string lastName;
	std::string position;
	int salary = 0;
};
