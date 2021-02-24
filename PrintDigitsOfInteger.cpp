#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	short int digit;
	long long int number;
	short int carry = 0;

	cout << "We print from " << LLONG_MIN << " to " << LLONG_MAX << "\n";
	cout << "Enter number:";
	cin >> number;

	if (number >= LLONG_MIN && number < 0) {
		carry = 1;
		number--;
		number = abs(number); //we want positive number
		cout << "- ";// we print sign
	}

	digit = to_string(number).length() - 1;

	while(digit >= 0)
	{
		if(carry == 1 && digit == 0)
		 cout << number / (long long)pow(10, digit) + 1 << " ";
		else
		 cout << number / (long long)pow(10, digit) << " ";

		number = number % (long long)pow(10, digit--);
	}

	return 0;
}
