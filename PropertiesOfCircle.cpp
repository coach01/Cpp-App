//properties of the circle
#include <iostream>
using namespace std;

int main()
{
	const double PI = 3.14;//You use PI from math.h with #include <math.h>
	double radius;
	double height;
	double circum = 0.0;
	double area = 0.0;
	double volume = 0.0;

	cout << "Enter value for radius:";
	cin >> radius;
	cout << "Enter value for height:";
	cin >> height;

	circum = 2 * PI * radius;
	area = PI * radius * radius;
	volume = area * height;

	cout << "The circumference of the circle : " << circum << " unit" << endl;
	cout << "The area of the circle : " << area << " unit"<<(char)253 <<endl;
	cout << "The volume of the circle : " << volume << " unit" << (char)252 << endl;

	// we obtain superscript 2 with (char)253 so we convert number 253 to character
}
