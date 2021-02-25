#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int number = 0;
    int bigNumber = INT32_MIN;
    int smallNumber = INT32_MAX;
    int counter = 1;

    while (counter <= 5)
    {
        cout << "Enter Number:";
        cin >> number;

        if (number > bigNumber)
            bigNumber = number;

        if (number < smallNumber)
            smallNumber = number;

        counter++;
    }
    cout << "The smallest number is " << smallNumber << endl;
    cout << "The biggest number is " << bigNumber << endl;
}
