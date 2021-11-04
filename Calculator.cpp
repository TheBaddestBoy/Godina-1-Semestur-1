#include <iostream>
using namespace std;
int main()
{
	char op;
	double num1;
	double num2;
	double result;
	cout << "Enter operators(+, -, *, /)" << " ";
	cin >> op;

	cout << "Enter two numbers: ";
	cin >> num1 >> num2;

	if (op == '+')
	{
		cout << "the Sum of the two numbers is: " << num1 + num2 << endl;

	}
	else if (op == '-')
	{
		cout << "the substraction of the two numbers is: " << num1 - num2 << endl;

	}
	else if (op == '*')
	{
		cout << "the multiplication of the two numbers is: " << num1 * num2 << endl;
	}
	if (num2 == 0)
	{
		cout << "Cannot divide by 0" << endl;
	}
	else if (op == '/' && num2 != 0)
	{
		cout << "the division of the two numbers is: " << num1 / num2 << endl;
	}

	return 0;
}