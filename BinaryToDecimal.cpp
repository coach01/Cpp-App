#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	string binaryNumber;
	unsigned long long int result = 0;
	cout << "Please enter binary number : ";//11111111
	cin >> binaryNumber;

	short int length = binaryNumber.length();

	for (size_t i = 0; i < length; i++)
	{
		if (binaryNumber[i] == '1')
		{
			result += (long long)pow(2, length - 1 - i);
		}
	}
	cout << "Result is " << result << endl;
}
