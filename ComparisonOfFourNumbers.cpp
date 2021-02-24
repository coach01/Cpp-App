#include <iostream>
using namespace std;

int main()
{
    int max, min;
    int a, b, c, d;
    cout << "You must enter four numbers with a space " << endl;
    cin >> a >> b >> c >> d ;
    min = a;
    max = a;

    if (b > max) {
        max = b;
    }
    else {
        if (b < min)
            min = b;
    }

    if (c > max) {
        max = c;
    }
    else {
        if (c < min)
            min = c;
    }
    if (d > max) {
        max = d;
    }
    else {
        if (d < min)
            min = d;
    }

    cout << "The smallest number :" << min << endl;
    cout << "The biggest number :" << max << endl;

}
/*
You can test it with below numbers.Copy, Run and Paste(Maybe Right Click) to the Stream
3 5 2 1   --> watchout 2
3 3 4 2
4 4 7 8
4 6 1 3
0 -1 1 -2
*/
