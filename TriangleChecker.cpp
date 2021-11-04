#include <iostream>
using namespace std;

int main()
{//Task 4
	int sideA, sideB, sideC;

	cout << "Please input the triangle's dimensions: " << endl;
	cin >> sideA >> sideB >> sideC;
	if ((sideA + sideB) > sideC && (sideC + sideB) > sideA && (sideC + sideA) > sideB)
	{
		cout << "A triangle with such dimensions exists" << endl;
	}
	else
	{
		cout << "A triangle with such dimensions does not exist" << endl;
	}
	return 0;
}