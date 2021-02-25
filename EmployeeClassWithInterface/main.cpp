#include "Employees.h"

using namespace std;
int main()
{
	Employees Engineer;
	string firstName, lastName, position;
	float salary = 0;
	cout << "Firstname:";
	cin >> firstName;
	cout << "Lastname:";
	cin >> lastName;
	cout << "Position:";
	cin >> position;
	cout << "Salary:";
	cin >> salary;
	Engineer.setProperties(firstName, lastName, position);
	Engineer.setSalary(salary);
	Engineer.printInfo();
}
