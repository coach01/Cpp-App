#include <iostream>
using namespace std;
int main()
{
	int num1;
	int num2;
	cout << "Enter first number :";
	cin >> num1;
	cout << "Enter second number :";
	cin >> num2;

	if (num1 > num2)
		cout << num1 << " is bigger than " << num2 << endl;
	else
		cout << num1 << " is less than " << num2 << endl;
}
