#include <iostream>

using namespace std;

int main()
{
	int beer, rakija, ice;
	cout << "Define truth on statement - 1=yes, 0=no" << endl;

	cout << "Does Tishko need to go to the store" << endl;

	cout << "Does Tishko have beer in the fridge" << endl;
	cin >> beer;
	"\n";
	
	cout << "Does Tishko have ice in the freezer" << endl;
	cin >> ice;
	"\n";

	cout << "Does Tishko have rakija in the fridge" << endl;
	cin >> rakija;
	"\n";


	if ((rakija == 0 || rakija == 1) && (beer == 1 || beer == 0) && (ice == 0 || ice == 1))
	{
		if (beer == 1)
		{
			cout << "Tishko doesn't need to go to the store" << endl;
		}
		else if (ice == 1 && rakija == 1 && beer == 0)
		{
			cout << "Tishko doesn't need to go to the store" << endl;
		}
		else
		{
			cout << "Tishko needs to go to the store" << endl;
		}
	}
	else
	{
		cout << "Did not use True (1) or False(0)" << endl;
	}

		return 0;
}