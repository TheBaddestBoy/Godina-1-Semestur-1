#include <iostream>
using namespace std;
int main()
{
	int lineLenght;
	int distanceTravelled = 0;
	
	cout << "Input the length of the line that Tishko must pain" << endl;
	cin >> lineLenght;
	"\n";
	for (int moveDistance = 1; moveDistance <= lineLenght; moveDistance++)
	{
		 distanceTravelled = distanceTravelled + (2 * moveDistance);
		
	}

	cout << "The distance Tishko covered was: " << distanceTravelled<< endl;


	return 0;
}

