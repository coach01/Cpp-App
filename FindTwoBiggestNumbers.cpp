#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int number;
    int total = 0;
    int firstBigNumber = INT32_MIN;
    int secondBigNumber = INT32_MIN;

    for (size_t i = 1; i <= 5; i++)
    {
        cout << "Enter "<<i<<".number:";
        cin >> number;
        total += number;

        if (number > firstBigNumber) {
            secondBigNumber = firstBigNumber;
            firstBigNumber = number;
        }
        else {
            if (number < firstBigNumber && number >= secondBigNumber) {
                secondBigNumber = number;
            }
        }
    }
    if (total != 0) {
        if ((total / (number * 5) != -1 ) && (total / (number * 5) != 1)) {

                cout << "\nThe first biggest number is " << firstBigNumber << endl;
                cout << "\nThe second biggest number is " << secondBigNumber << endl;
        }
    }
    else {
        cout << "All numbers are equal" << endl;
    }
}
