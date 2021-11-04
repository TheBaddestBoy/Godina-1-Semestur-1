#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int fiveDigitNumber, sumOfNumbers, firstDigit, secondDigit, thirdDigit, fourthDigit, fifthDigit;
    cout << "Enter a 5-digit number: ";
    cin >> fiveDigitNumber;
    fifthDigit = fiveDigitNumber / 10000;
    fourthDigit = fiveDigitNumber / 10000 % 10;
    thirdDigit = fiveDigitNumber / 1000 % 10;
    secondDigit = fiveDigitNumber / 100 % 10;
    firstDigit = fiveDigitNumber % 10;
    sumOfNumbers = (fifthDigit + fourthDigit + thirdDigit + secondDigit + firstDigit);

    cout << "\n" << "The sum of the 5-digit number's numbers is: " << sumOfNumbers;

    return 0;
}