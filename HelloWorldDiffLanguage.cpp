#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Turkish");
    cout << "Merhaba Dünya!" << endl;

    //setlocale(LC_ALL, "Russian");
    //cout << "Привет, мир" << endl;

    return 0;
}
