#include "Employees.h"
#include <iomanip>

using namespace std;

void Employees::setProperties(std::string fname, std::string lname, std::string pos)
{
	firstName = fname;
	lastName = lname;
	position = pos;
}
void Employees::setSalary(int amount) {
	salary = amount;
}
int Employees::getSalary()const
{
	return salary;
}

void Employees::printInfo()
{
	cout << "Employee Information" << endl;
	cout << left << setw(15) << "First name " << ":" + firstName << endl;
	cout << left << setw(15) << "Last name " << ":" + lastName << endl;
	cout << left << setw(15) << "Position " << ":" + position << endl;
	cout << left << setw(15) << "Salary " << ":$" << getSalary() << endl;

}
