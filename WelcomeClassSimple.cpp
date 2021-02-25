#include <iostream>
#include <string>
using namespace std;

class Welcome {
public:
	void Message(string name)
	{
		cout << "Welcome to Our Country,Dear " << name << endl;
	}
};

int main()
{
	Welcome visitor;

	string fullName;
	cout << "Please Enter Full Name:";
	getline(cin, fullName);

	visitor.Message(fullName);
}
