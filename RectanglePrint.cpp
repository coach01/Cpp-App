#include <iostream>
using namespace std;

int main()
{
    unsigned int height, width;
    cout << "Enter width :";
    cin >> width;
    cout << "Enter height :";
    cin >> height;

    for (size_t i = 1; i <= height; i++)          //from top to bottom
    {
        if (i == 1 || i == height) {
            for (size_t j = 1; j <= width; j++)   // from left to right
                 cout << "*";
        }
        else
        {
            for (size_t j = 1; j <= width; j++)   // from left to right
            {
                if (j == 1 || j == width)
                    cout << "*";
                else
                    cout << " ";
            }
        }
            cout << endl;                          // new line each rows
    }

}
