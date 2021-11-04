#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double farenheit, celsius, kelvin, command;
	cout << "Commands for the degrees are: Celsius - 1, kelvin 2" << endl;
	cout << "Enter degrees in Farenheit ";
	cin >> farenheit;
	celsius = ((farenheit - 32) * 5) / 9;
	kelvin = (celsius + 273.15);



	cout << "Enter command code ";
	cin >> command;

	if (command == 1)
	{
		cout << "degrees converted to celsius are " << celsius;
	}
	else if (command == 2)
	{
		cout << "degrees converted to kelvin are " << kelvin;
	};
	return 0;

}