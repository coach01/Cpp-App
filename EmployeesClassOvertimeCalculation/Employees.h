#include <iostream>
#include <string>

class Employees {
public:
	void setProperties(std::string, std::string, std::string);
	void setSalary(double amount);
	double getSalary()const;
	void printInfo();
	void overTime();
private:
	std::string firstName;
	std::string lastName;
	std::string position;
	double salary = 0;
	std::string day[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
};
