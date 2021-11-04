#include <iostream>
using namespace std;
int main()
{
    int fourDigitNumber;
    int digitOne, digitTwo, digitThree, digitFour;
    cin >> fourDigitNumber;
    digitOne = fourDigitNumber / 1000;
    digitTwo = (fourDigitNumber / 100) % 10;
    digitThree = (fourDigitNumber / 10) % 10;
    digitFour = fourDigitNumber % 10;

    bool uniqueness =
        ((digitOne != digitTwo)
            && (digitOne != digitThree)
            && (digitOne != digitFour)
            && (digitTwo != digitThree)
            && (digitTwo != digitFour)
            && (digitThree != digitFour));
    if (fourDigitNumber > 999 && fourDigitNumber < 10000)
    {

        if (uniqueness == true)
        {
            cout << "The number's numbers are unique";
        }
        else
        {
            cout << "The number's numbers aren't unique";
        }
    }
    else
    {
        cout << "The number isn't a four-digit one.";
    }
    return 0;

}