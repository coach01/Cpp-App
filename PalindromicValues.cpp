#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string value;// to give a idea use  "Live on time,emit no evil"  or 12321
    cout << "Enter text or natural number(q to quit):";
    getline(cin, value);

    transform(value.begin(), value.end(), value.begin(), ::tolower);

    while (value != "q")
    {
        int length = value.length();
        int count = 0;

        for (size_t i = 0; i < length / 2; i++)
        {
            if (value[i] == value[length - 1 - i])
                count++;
        }

        if (count == length / 2)
            cout << "It is a palindrome" << endl;
        else
            cout << "It is not a palindrome" << endl;

        cout << "Enter text or natural number(-1 to quit):";
        getline(cin, value);

        transform(value.begin(), value.end(), value.begin(), ::tolower);


    }

}
//https://en.wikipedia.org/wiki/Palindromic_number
