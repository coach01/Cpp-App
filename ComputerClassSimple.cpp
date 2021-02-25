#include <iostream>
#include <string>
using namespace std;

class Computer {
public:
	void setup() {
		cout << "User name:";
		cin >> user;
		cout << "Password:";
		cin >> password;
		cout << endl;
	}

	void start() {
		cout << "Enter Password:";
		cin >> value;
		if (value == password) {
			openingMessage();
		}
		else {
			cout << "\nWrong-password" << endl;
			chance++;
			if (chance < 3)
				start();
			else
				systemClosing();
		}
	}

	void openingMessage()const {
		cout << "\nHello, Dear " << user << endl;
	}
	void write(string txt) {
		message = txt;
		cout << message << endl;
	}

	void close()const {
		cout << "Your computer is been closing..." << endl;
	}
	void systemClosing()const {
		cout << "System is closing the computer..." << endl;
	}
private:
	string user;
	string password;
	string value;
	short int chance = 0;
	string message;
};

int main()
{

	Computer myDesktopComputer;
	myDesktopComputer.setup();

	myDesktopComputer.start();

	myDesktopComputer.write("How are you?");
	myDesktopComputer.write("I am fine.");

	myDesktopComputer.close();
}
