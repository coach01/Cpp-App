#include <iostream>
#include <random>
#include <ctime>
#include <string>
#include <array>
#include <math.h>
using namespace std;

int main()
{
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 10);

    unsigned int counter = 0;
    unsigned int number = pow(randomInt(engine), 2);//the perfect squares number
    array<unsigned int, 12> result = {};
    int answer;


    cout << "Question : A = {x | x" << (char)253 << " <= " << number << " and x count number}" << endl;
    cout << "s(A)= ? " << endl;
    cout << "Enter your answer : ";

    for (size_t i = 1; i <= number; i++)
    {
        if (i * i <= number) {
            counter++;
            result[i] = i;
        }
    }
    cin >> answer;

    if (answer == counter) {
        cout << "Your answer is correct" << endl;
    }
    else
    {
        cout << "Your answer is wrong" << endl;
        cout << "s(A)= " << counter << endl;
    }

    cout << "A = {";
    for (size_t i = 1; i <= counter; i++)
    {
        if (result[i] != 0)
            cout << result[i];
        if (result[i + 1] != 0)
            cout << ",";
    }
    cout << "}";
}
// You can add while for loop again again