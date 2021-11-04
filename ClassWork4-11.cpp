#include <iostream>
using namespace std;

int main()
{
	//1
	/*int number;
	 do
	 {
	     cout << "Enter a value between 10 and 99: ";
	     cin >> number;
	 } while (number < 10 || number > 99);*/	  	 
	//2-a	
    /*  int n,m;
	cout << "Please input 2 numbers, first for row number, 2nd for * amount" << endl;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < m; k++)
		{
			cout << "*";
		}
		cout << endl;
	} */
	//2-b
	/*int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = n-1; i > 0; i--)
	{
		for (int h = 0; h < i; h++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;*/	
	//3
	/*int n;
	cin >> n;
	int sumOfFactoriel = 1;
	for (int i = 1; i <= n; i++)
	{
		sumOfFactoriel = sumOfFactoriel * i;

	}
	cout << sumOfFactoriel;*/
	//4
	/*int numberCount = 0;
	for (int i = 100; i < 1000; i++)
	{
		if (((i / 100) != (i / 10 % 10)) && ((i % 10) != (i / 100)) && ((i / 10 % 10) != (i % 10)))
		{
			cout << i;
			numberCount++;
		}
		cout << endl;
	}

	cout <<"Amount of numbers with unique digits is: "<< numberCount;
	*/
	//5	
	/* int diviser=1;
	for (int i = 100; i < 1000; i++)
	{
		if (i % 10 != 0) diviser *= i % 10;
		if (((i / 10) % 10) != 0) diviser *= (i / 10) % 10;
		if (((i / 100) != 0)) diviser *= (i / 100);

		if (i % diviser == 0)
		{
			cout << i << endl;
		}

		diviser = 1;
	} */
	
	return 0;
}