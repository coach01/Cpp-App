//Beginner Level Class --> You can develop it
//It is not ready
#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <iomanip>
using namespace std;

class Dictionary {
public:
	Dictionary()
	{
		printDbTable();
	}
	void setup() {
		cout << "Your Language:";
		cin >> userLang;
		cout << "Translate Language:";
		cin >> otherLang;
		cout << endl;
	}

	void translate() {

		if (userLang == "English")
		{
			cout << "Enter your word :";
			cin >> word;
			transform(word.begin(), word.end(), word.begin(), std::tolower);//tolower

			if (otherLang == "Turkish") {
				for (size_t i = 0; i < 5; i++)
				{
					if (word == English[i]) {
						cout << "We translated : " << Turkish[i] << endl;
						isFind = true;
					}
				}
			}
			else if (otherLang == "Italian") {
				for (size_t i = 0; i < 5; i++)
				{
					if (word == English[i]) {
						cout << "We translated : " << Italian[i] << endl;
						isFind = true;
					}
				}
			}
			else {
				cout << "The other language not found" << endl;
				return;
			}
		}
		else if (userLang == "Turkish") {

			cout << "Kelime gir:";
			cin >> word;
			transform(word.begin(), word.end(), word.begin(), std::tolower);//tolower

			if (otherLang == "English") {
				for (size_t i = 0; i < 5; i++)
				{
					if (word == Turkish[i]) {
						cout << "We translated : " << English[i] << endl;
						isFind = true;
					}
				}
			}
			else if (otherLang == "Italian") {
				for (size_t i = 0; i < 5; i++)
				{
					if (word == Turkish[i]) {
						cout << "We translated : " << Italian[i] << endl;
						isFind = true;
					}
				}
			}
			else {
				cout << "Diger dil bulunamadi." << endl;
				return;
			}
		}
		else if (userLang == "Italian") {

			cout << "Inserisci la tua parola:";
			cin >> word;
			transform(word.begin(), word.end(), word.begin(), std::tolower);//tolower

			if (otherLang == "English") {
				for (size_t i = 0; i < 5; i++)
				{
					if (word == Italian[i]) {
						cout << "We translated : " << English[i] << endl;
						isFind = true;
					}
				}
			}
			else if (otherLang == "Turkish") {
				for (size_t i = 0; i < 5; i++)
				{
					if (word == Italian[i]) {
						cout << "We translated : " << Turkish[i] << endl;
						isFind = true;
					}
				}
			}
			else {
				cout << "L'altra lingua non e stata trovata" << endl;
				return;
			}
		}
		else {
			cout << "Your language not found" << endl;//English
			return;
		}

		if (isFind == false) {
			cout << "Not Found" << endl;//English
		}

		quit();
	}

	void quit() {
		isFind = false;
		char request;
		cout << "Do you want to continue?(y / n) : ";
		cin >> request;
		if (request == 'y')
			translate();
		else
			cout << "Finished " << endl;
	}

	void printDbTable() {
		cout << "No " << setw(15) << "English" << setw(15)
			<< "Turkish" << setw(15) << "Italian" << endl;
		for (size_t i = 0; i < 5; i++)
		{
			cout << setw(3) << No[i] << setw(15) << English[i]
				<< setw(15) << Turkish[i] << setw(15) << Italian[i] << endl;
		}
		cout << endl;
	}

private:
	string userLang;
	string otherLang;
	string word;
	string message;
	bool isFind = false;
	string No[5] = { "1","2","3","4","5" };//Database 0.Column
	string English[5] = { "apple","kiwi","melon","banana","cherry" };//Database 1.Column
	string Turkish[5] = { "elma","kivi","kavun","muz","kiraz" };//Database 2.Column
	string Italian[5] = { "mela", "kiwi", "melone", "banana", "ciliegia" };//Database 2.Column

};

int main()
{
	Dictionary myTranslate;
	myTranslate.setup();
	myTranslate.translate();


}
