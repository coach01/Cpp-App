#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int customerId;
	double balance;
	double totalExpenditure;
	double totalRepayments;
	double cardLimit;

	cout << "Enter customer id(or -1 to quit):";
	cin >> customerId;

	while (customerId != -1)
	{
		cout << "Enter total expenditure::";
		cin >> balance;
		cout << "Enter new expenditure:";
		cin >> totalExpenditure;
		cout << "Enter repayment:";
		cin >> totalRepayments;
		cout << "Enter card limit:";
		cin >> cardLimit;

		balance = balance + totalExpenditure - totalRepayments;
		cout << setprecision(2) << fixed;

		cout << "\nNew balance is " << balance << endl;
		if (balance > cardLimit) {
			cout << "Customer Id : " << customerId << endl;
			cout << "Credit Limit : " << cardLimit << endl;
			cout << "Exceeded Limit " << endl;
		}
		cout << endl;


		cout << "Enter account number(or -1 to quit):";
		cin >> customerId;
	}

}
