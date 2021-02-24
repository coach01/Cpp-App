#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    int result = 0;// 8 Byte
    int max = 0, min = 0;
    bool comparison = true;

    cout << "You have to enter unequal number " << endl;
    cout << "1.Number:";
    cin >> x;
    cout << "2.Number:";
    cin >> y;
    cout << "3.Number:";
    cin >> z;

    result = x + y + z;
    cout << "Sum = " << result << endl;
    cout << "Integer Average = " << (result / 3) << endl;
    //cout << "Decimally Average = " << ((double)result / 3) << endl;



    if (x > y && x > z) {
        max = x;
        if (y < z)
            min = y;
        else
            min = z;
    }
    else if (y > x && y > z) {
        max = y;
        if (x < z)
            min = x;
        else
            min = z;
    }
    else if (z > x && z > y) {
        max = z;
        if (x < y)
            min = x;
        else
            min = y;
    }
    else {
        comparison = false;
        cerr << "You entered the equal numbers " << endl;
    }
    if (comparison == true) {
        cout << "The smallest number :" << min << endl;
        cout << "The biggest number :" << max << endl;
    }
}