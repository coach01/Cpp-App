#include "Employees.h"
#include <iomanip>

using namespace std;

void Employees::setProperties(std::string fname, std::string lname, std::string pos)
{
	firstName = fname;
	lastName = lname;
	position = pos;
}
void Employees::setSalary(double amount) {
	if (amount <= 0) {
		salary = 0;
	}
	else {
		salary = amount;
	}

}
double Employees::getSalary()const
{
	return salary;
}

void Employees::printInfo()
{
	cout << "\nEmployee Information" << endl;
	cout << left << setw(15) << "First name " << ":" + firstName << endl;
	cout << left << setw(15) << "Last name " << ":" + lastName << endl;
	cout << left << setw(15) << "Position " << ":" + position << endl;
	cout << left << setw(15) << "Salary " << ":$" << getSalary() << endl;

}
void Employees::overTime()
{	
	double fullSalary = 0;
	double forOneHour = 20;
	double overTime = 0;
	int counter = 0;

	while (counter < 7)
	{
		float hour = 0;
		cout << "Enter overtime hour of " << day[counter] << ":";
		cin >> hour;
		overTime += static_cast<double>(forOneHour * hour);
		counter++;
		cout << overTime << endl;
	}
	fullSalary = overTime + getSalary();
	cout << "Your overtime :$" << overTime << endl;

	setSalary(fullSalary);
	cout << "Your full salary : $" << getSalary() << endl;


}