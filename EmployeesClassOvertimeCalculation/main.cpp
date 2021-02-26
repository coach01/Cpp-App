#include "Employees.h"

using namespace std;
int main()
{
	Employees Engineer;
	string firstName, lastName, position;
	double money = 0;
	cout << "Firstname:";
	cin >> firstName;
	cout << "Lastname:";
	cin >> lastName;
	cout << "Position:";
	cin >> position;
	cout << "Salary:";
	cin >> money;
	Engineer.setProperties(firstName, lastName, position);
	Engineer.setSalary(money);
	Engineer.overTime();
	Engineer.printInfo();
}
