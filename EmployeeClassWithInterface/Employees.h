#include <iostream>
#include <string>

class Employees {
public:
	void setProperties(std::string, std::string, std::string);
	void setSalary(int amount);
	int getSalary()const;
	void printInfo();
private:
	std::string firstName;
	std::string lastName;
	std::string position;
	int salary = 0;
};
