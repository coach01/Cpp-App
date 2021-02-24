#include <iostream>
using namespace std;

int main()
{
	string email = "email@email.tom";
	string pswd = "";
	bool result = false;
	int counter = 1;
	do
	{
		cout << "Enter password:";
		cin >> pswd;

		if (pswd == "1234") {
			result = true;
			break;
		}
		counter++;
	} while (counter <= 3);

	if (result)
		cout << "Welcome" << endl;
	else
		cout << "Good bye" << endl;
}
