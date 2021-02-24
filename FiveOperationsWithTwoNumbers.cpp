// Math Processes
#include <iostream>
using namespace std;
int main()
{
    int number1, number2;
    int result = 0;

    cout << "Please Enter 1.Number:";
    cin >> number1;
    cout << "Please Enter 2.Number:";
    cin >> number2;

    result = number1 + number2;
    cout << "Add = " << result << endl;

    result = number1 - number2;
    cout << "Sub = " << result << endl;

    result = number1 * number2;
    cout << "Mul = " << result << endl;

    result = number1 / number2; // we don't control zero
    cout << "Div = " << result << endl;

    result = number1 % number2;
    cout << "Rem = " << result << endl;

}
