#include <iostream>
#include <iomanip>
using  namespace std;

int main()
{
    float miles;
    float energy;
    float MPKwh;// Miles Per Kilo watt hour
    double totalMiles = 0;
    double totalEnergy = 0;
    double totalMPKwh = 0;

    cout << "You can enter -1 for quit" << endl << endl;
    cout << "Enter miles traveled:";
    cin >> miles;
    while (miles != -1)
    {
        totalMiles += miles;

        cout << "Enter energy expended(Kwh):";
        cin >> energy;

        totalEnergy += energy;

        MPKwh = miles / energy;

        cout << setprecision(4) << fixed;
        cout << "MPKwh for this drive: " << MPKwh << endl;

        totalMPKwh = totalMiles / totalEnergy;

        cout << "Total MPKwh:" << totalMPKwh << endl << endl;

        cout << "Enter miles traveled:";
        cin >> miles;
    }
}
