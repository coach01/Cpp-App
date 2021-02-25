#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double bonus = 500;
    double gain;
    cout << "Enter 1 month earnings(-1 to end):";
    cin >> gain;

    while (gain != -1)
    {
        double salary = (gain * 0.4) + bonus;
        cout << setprecision(2) << fixed;
        cout << "Salary is $" << salary << endl;
        cout << "Enter 1 month earnings(-1 to end):";
        cin >> gain;

    }
}
