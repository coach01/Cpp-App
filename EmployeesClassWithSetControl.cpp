#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Employees {
public:
	void setProperties(string fname, string lname, string pos)
	{
		firstName = fname;
		lastName = lname;
		position = pos;

	}
	void setSalary(int amount) {
		if (amount < 0) {
			amount = 0;
			cerr << "Warning : Salary can not be negative value!\n" << endl;
		}
		else {
			salary = amount;
		}

	}
	int getSalary()const
	{
		return salary;
	}

	void printInfo()
	{
		cout << "Employee Information" << endl;
		cout << left << setw(15) << "First name " << ":" + firstName << endl;
		cout << left << setw(15) << "Last name " << ":" + lastName << endl;
		cout << left << setw(15) << "Position " << ":" + position << endl;
		cout << left << setw(15) << "Salary " << ":$" << getSalary() << endl;

	}
private:
	string firstName;
	string lastName;
	string position;
	int salary = 0;
};

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
